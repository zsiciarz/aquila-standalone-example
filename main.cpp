#include "aquila/global.h"
#include "aquila/source/generator/SineGenerator.h"
#include "aquila/tools/TextPlot.h"

int main()
{
    Aquila::SineGenerator sine = Aquila::SineGenerator(1000);
    sine.setAmplitude(32).setFrequency(50).generate(64);
    Aquila::TextPlot plt("Sine wave example");
    plt.plot(sine);

    return 0;
}

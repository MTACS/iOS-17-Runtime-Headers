
@interface EspressoTrainingConvolutionWeightsForMPS : EspressoConvolutionWeightsForMPS {
    <MTLBuffer> * _biasesBuffer;
    <MTLBuffer> * _weightsBuffer;
    bool  is_training;
}

@property (retain) <MTLBuffer> *biasesBuffer;
@property (retain) <MTLBuffer> *weightsBuffer;

- (void).cxx_destruct;
- (float*)biasTerms;
- (id)biasesBuffer;
- (id)initWithParams:(struct convolution_uniforms { int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; float x10; int x11; int x12; int x13; int x14; int x15; int x16; float x17; float x18; struct padding_params_t { short x_19_1_1; short x_19_1_2; float x_19_1_3; short x_19_1_4; short x_19_1_5; short x_19_1_6; short x_19_1_7; short x_19_1_8; short x_19_1_9; } x19; short x20; short x21; short x22; short x23; unsigned short x24; unsigned short x25; int x26; int x27; int x28; int x29; int x30; unsigned short x31; unsigned short x32; unsigned short x33; unsigned short x34; unsigned short x35; short x36; int x37; int x38; int x39; int x40; int x41; short x42; int x43; bool x44; })arg1 forMode:(bool)arg2;
- (bool)ready;
- (void)setBiasesBuffer:(id)arg1;
- (void)setWeightsBuffer:(id)arg1;
- (void*)weights;
- (id)weightsBuffer;
- (unsigned int)weightsLayout;

@end


@interface EspressoTrainingInnerProductWeightsForMPS : EspressoInnerProductWeightsForMPS {
    <MTLBuffer> * _biasesBuffer;
    <MTLBuffer> * _weightsBuffer;
}

@property (retain) <MTLBuffer> *biasesBuffer;
@property (retain) <MTLBuffer> *weightsBuffer;

- (void).cxx_destruct;
- (float*)biasTerms;
- (id)biasesBuffer;
- (id)initWithParams:(struct inner_product_uniforms { unsigned int x1; unsigned int x2; int x3; int x4; int x5; float x6; float x7; int x8; int x9; int x10; bool x11; int x12; int x13; int x14; float x15; float x16; unsigned int x17; unsigned int x18; unsigned int x19; unsigned int x20; unsigned int x21; unsigned int x22; unsigned int x23; unsigned int x24; unsigned int x25; int x26; int x27; int x28; int x29; int x30; int x31; int x32; int x33; })arg1 forMode:(bool)arg2;
- (bool)ready;
- (void)setBiasesBuffer:(id)arg1;
- (void)setWeightsBuffer:(id)arg1;
- (void*)weights;
- (id)weightsBuffer;

@end


@interface PICombineRGBKernel : NUComputeKernel {
    <MTLTexture> * _blueTexture;
    <MTLTexture> * _greenTexture;
    <MTLTexture> * _redTexture;
}

@property (nonatomic, retain) <MTLTexture> *blueTexture;
@property (nonatomic, retain) <MTLTexture> *greenTexture;
@property (nonatomic, retain) <MTLTexture> *redTexture;

+ (void)combineRGBTextures:(id)arg1 intoDestinationTexture:(id)arg2 withCommandBuffer:(id)arg3;

- (void).cxx_destruct;
- (id)blueTexture;
- (void)encodeToCommandBuffer:(id)arg1 destinationTexture:(id)arg2;
- (id)greenTexture;
- (id)redTexture;
- (void)setBlueTexture:(id)arg1;
- (void)setGreenTexture:(id)arg1;
- (void)setRedTexture:(id)arg1;

@end

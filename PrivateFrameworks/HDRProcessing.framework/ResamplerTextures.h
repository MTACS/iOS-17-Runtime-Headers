
@interface ResamplerTextures : NSObject {
    <MTLTexture> * _inputTexture;
    <MTLTexture> * _inputTexureUV;
    <MTLTexture> * _outputTextureUV;
    <MTLTexture> * _outputTextureY;
    <MTLTexture> * _tempTextureUV;
    <MTLTexture> * _tempTextureY;
}

@property (retain) <MTLTexture> *inputTexture;
@property (retain) <MTLTexture> *inputTexureUV;
@property (retain) <MTLTexture> *outputTextureUV;
@property (retain) <MTLTexture> *outputTextureY;
@property (retain) <MTLTexture> *tempTextureUV;
@property (retain) <MTLTexture> *tempTextureY;

- (void).cxx_destruct;
- (id)inputTexture;
- (id)inputTexureUV;
- (id)outputTextureUV;
- (id)outputTextureY;
- (void)setInputTexture:(id)arg1;
- (void)setInputTexureUV:(id)arg1;
- (void)setOutputTextureUV:(id)arg1;
- (void)setOutputTextureY:(id)arg1;
- (void)setTempTextureUV:(id)arg1;
- (void)setTempTextureY:(id)arg1;
- (id)tempTextureUV;
- (id)tempTextureY;

@end

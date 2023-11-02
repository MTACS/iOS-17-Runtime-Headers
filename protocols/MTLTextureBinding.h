
@protocol MTLTextureBinding <MTLBinding>

@required

- (unsigned long long)arrayLength;
- (bool)isDepthTexture;
- (unsigned long long)textureDataType;
- (unsigned long long)textureType;

@end


@interface MDLTextureSampler : NSObject {
    MDLTextureFilter * hardwareFilter;
    unsigned long long  mappingChannel;
    MDLTexture * texture;
    long long  textureComponents;
    MDLTransform * transform;
}

@property (nonatomic, retain) MDLTextureFilter *hardwareFilter;
@property (nonatomic) unsigned long long mappingChannel;
@property (nonatomic, retain) MDLTexture *texture;
@property (nonatomic) long long textureComponents;
@property (nonatomic, retain) MDLTransform *transform;

- (void).cxx_destruct;
- (id)hardwareFilter;
- (id)init;
- (unsigned long long)mappingChannel;
- (void)setHardwareFilter:(id)arg1;
- (void)setMappingChannel:(unsigned long long)arg1;
- (void)setTexture:(id)arg1;
- (void)setTextureComponents:(long long)arg1;
- (void)setTransform:(id)arg1;
- (id)texture;
- (long long)textureComponents;
- (id)transform;

@end

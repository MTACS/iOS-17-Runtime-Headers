
@interface PTGlobalRenderingMetadataVersion2 : PTGlobalRenderingMetadata {
    unsigned int  _hwModelID;
    bool  _readSuccessAll;
    unsigned int  _renderingVersion;
    unsigned int  _sensorID;
    unsigned int  _sourceColorBitDepth;
}

@property (nonatomic) unsigned int hwModelID;
@property (nonatomic) unsigned int sensorID;
@property (nonatomic) unsigned int sourceColorBitDepth;

- (void)applyToRenderRequest:(id)arg1;
- (void)applyToRenderState:(id)arg1;
- (bool)applyToRenderState:(id)arg1 error:(id*)arg2;
- (unsigned int)hwModelID;
- (id)initWithData:(id)arg1;
- (id)initWithMinorVersion:(unsigned int)arg1;
- (bool)matchesRenderState:(id)arg1;
- (unsigned int)renderingVersion;
- (unsigned int)sensorID;
- (void)setHwModelID:(unsigned int)arg1;
- (void)setRenderingVersion:(unsigned int)arg1;
- (void)setSensorID:(unsigned int)arg1;
- (void)setSourceColorBitDepth:(unsigned int)arg1;
- (unsigned int)sizeOfSerializedObjectWithOptions:(id)arg1;
- (unsigned int)sourceColorBitDepth;
- (bool)writeToData:(id)arg1 withOptions:(id)arg2;

@end

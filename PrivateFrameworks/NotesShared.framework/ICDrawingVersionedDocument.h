
@interface ICDrawingVersionedDocument : ICTTVersionedDocument {
    ICDrawing * _drawing;
}

@property (nonatomic, readonly) ICDrawing *drawing;

+ (unsigned int)minimumSupportedVersion;
+ (unsigned int)serializationVersion;

- (void).cxx_destruct;
- (id)drawing;
- (void)mergeVersion:(unsigned int)arg1 fromData:(id)arg2;
- (unsigned long long)mergeWithDrawingVersionedDocument:(id)arg1;
- (id)serializeCurrentVersion:(unsigned int*)arg1;

@end

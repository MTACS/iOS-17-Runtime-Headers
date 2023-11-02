
@interface TRIFBMobileAssetReferenceBuilder : NSObject {
    struct MobileAssetReferenceBuilder { struct FlatBufferBuilder {} *x1; unsigned int x2; } * _bldr;
    AFBBufferBuilder * _owner;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;
- (void)setAssetName:(id)arg1;
- (void)setDownloadSize:(unsigned long long)arg1;
- (void)setFileType:(unsigned char)arg1;
- (void)setIsOnDemand:(bool)arg1;
- (void)setSpecifier:(id)arg1;
- (void)setType:(id)arg1;
- (void)setVersion:(id)arg1;

@end

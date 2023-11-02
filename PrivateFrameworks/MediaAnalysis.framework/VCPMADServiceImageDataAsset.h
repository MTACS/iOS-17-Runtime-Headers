
@interface VCPMADServiceImageDataAsset : VCPMADServiceImageAsset {
    NSData * _cachedParseData;
    NSArray * _documentObservations;
    bool  _hasCachedParseData;
    NSString * _identifier;
    NSData * _imageData;
    unsigned int  _orientation;
    struct CF<__CVBuffer *> { 
        struct __CVBuffer {} *value_; 
    }  _pixelBuffer;
    UTType * _uniformTypeIdentifier;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)assetType;
- (id)cachedParseData;
- (id)documentObservations;
- (bool)hasCachedParseData;
- (id)identifier;
- (id)initWithImageData:(id)arg1 uniformTypeIdentifier:(id)arg2 identifier:(id)arg3 clientBundleID:(id)arg4 clientTeamID:(id)arg5;
- (bool)isHighResDecoded;
- (int)loadPixelBuffer:(struct __CVBuffer {}**)arg1 orientation:(unsigned int*)arg2;
- (unsigned int)orientation;
- (struct CGSize { double x1; double x2; })resolution;
- (void)setCachedParseData:(id)arg1 overwriteExisting:(bool)arg2;
- (void)setDocumentObservations:(id)arg1;

@end

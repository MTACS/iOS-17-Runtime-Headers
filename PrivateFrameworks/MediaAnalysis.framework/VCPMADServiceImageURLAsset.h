
@interface VCPMADServiceImageURLAsset : VCPMADServiceImageAsset {
    NSData * _cachedParseData;
    NSArray * _documentObservations;
    bool  _hasCachedParseData;
    NSString * _identifier;
    unsigned int  _orientation;
    struct CF<__CVBuffer *> { 
        struct __CVBuffer {} *value_; 
    }  _pixelBuffer;
    NSURL * _url;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)assetType;
- (id)cachedParseData;
- (id)documentObservations;
- (bool)hasCachedParseData;
- (id)identifier;
- (id)initWithURL:(id)arg1 identifier:(id)arg2 clientBundleID:(id)arg3 clientTeamID:(id)arg4;
- (bool)isHighResDecoded;
- (int)loadPixelBuffer:(struct __CVBuffer {}**)arg1 orientation:(unsigned int*)arg2;
- (unsigned int)orientation;
- (struct CGSize { double x1; double x2; })resolution;
- (void)setCachedParseData:(id)arg1 overwriteExisting:(bool)arg2;
- (void)setDocumentObservations:(id)arg1;

@end

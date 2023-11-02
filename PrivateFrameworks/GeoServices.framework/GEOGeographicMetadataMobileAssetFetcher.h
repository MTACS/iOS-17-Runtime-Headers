
@interface GEOGeographicMetadataMobileAssetFetcher : NSObject {
    NSDictionary * _parameters;
    id /* block */  _responseBlock;
    GEOMobileAssetResource * _result;
    unsigned long long  _type;
}

- (void).cxx_destruct;
- (void)fetchMetadataWithResponseQueue:(id)arg1 block:(id /* block */)arg2;
- (id)initForType:(unsigned long long)arg1 parameters:(id)arg2;
- (void)reportCorrupt:(id)arg1;

@end

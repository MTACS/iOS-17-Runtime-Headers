
@interface LPFetcherARAssetResponse : LPFetcherResponse <LPFetcherURLResponse> {
    LPARAsset * _arAsset;
}

@property (nonatomic, readonly, retain) LPARAsset *arAsset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)arAssetPropertiesForFetcher:(id)arg1;
+ (bool)isValidMIMEType:(id)arg1;
+ (id)responseForFetcher:(id)arg1 withData:(id)arg2 MIMEType:(id)arg3;

- (void).cxx_destruct;
- (id)arAsset;
- (id)initWithARAsset:(id)arg1 fetcher:(id)arg2;

@end

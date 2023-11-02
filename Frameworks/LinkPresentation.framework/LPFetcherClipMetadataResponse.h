
@interface LPFetcherClipMetadataResponse : LPFetcherResponse {
    NSURL * _iconURL;
    CPSClipMetadata * _metadata;
}

@property (nonatomic, readonly, copy) NSURL *iconURL;
@property (nonatomic, readonly, copy) CPSClipMetadata *metadata;

- (void).cxx_destruct;
- (id)iconURL;
- (id)initWithClipMetadata:(id)arg1 iconURL:(id)arg2 fetcher:(id)arg3;
- (id)metadata;

@end

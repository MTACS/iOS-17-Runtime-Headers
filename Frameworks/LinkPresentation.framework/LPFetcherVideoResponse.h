
@interface LPFetcherVideoResponse : LPFetcherResponse {
    LPVideo * _video;
}

@property (nonatomic, readonly, retain) LPVideo *video;

+ (id)videoPropertiesForFetcher:(id)arg1;

- (void).cxx_destruct;
- (id)initWithVideo:(id)arg1 fetcher:(id)arg2;
- (id)video;

@end

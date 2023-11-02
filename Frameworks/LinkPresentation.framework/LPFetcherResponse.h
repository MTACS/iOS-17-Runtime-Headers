
@interface LPFetcherResponse : NSObject {
    long long  _state;
    id  _userData;
}

@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly, retain) id userData;

- (void).cxx_destruct;
- (id)initWithState:(long long)arg1 fetcher:(id)arg2;
- (long long)state;
- (id)userData;

@end

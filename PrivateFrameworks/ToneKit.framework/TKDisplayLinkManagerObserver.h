
@interface TKDisplayLinkManagerObserver : NSObject {
    id /* block */  _block;
    unsigned long long  _displayDidRefreshCount;
    unsigned long long  _frameInterval;
}

- (void).cxx_destruct;
- (void)displayDidRefresh:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBlock:(id /* block */)arg1;
- (id)initWithBlock:(id /* block */)arg1 frameInterval:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;

@end

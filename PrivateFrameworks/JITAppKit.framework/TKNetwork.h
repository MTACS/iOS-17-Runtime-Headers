
@interface TKNetwork : NSObject {
    double  _timeoutInterval;
}

@property (nonatomic, readonly) double timeoutInterval;

+ (void)setShared:(id)arg1;
+ (id)shared;

- (id)downloadImage:(id)arg1 priority:(long long)arg2 completion:(id /* block */)arg3;
- (id)downloadRequest:(id)arg1 priority:(long long)arg2 completion:(id /* block */)arg3;
- (id)loadRequest:(id)arg1 priority:(long long)arg2 completion:(id /* block */)arg3;
- (double)timeoutInterval;
- (void)updateNetworkActivity:(long long)arg1;

@end

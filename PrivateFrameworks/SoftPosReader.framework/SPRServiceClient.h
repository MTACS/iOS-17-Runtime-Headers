
@interface SPRServiceClient : SPRObject {
    long long  _primerPredicate;
    SPRPrimer * _sharedPrimer;
}

@property (readonly) NSDate *buildDate;
@property (nonatomic, readonly) SPRPrimer *sharedPrimer;

+ (id)shared;

- (void).cxx_destruct;
- (bool)abortAndReturnError:(id*)arg1;
- (void)assertCompatibleBuild;
- (id)buildDate;
- (void)invalidate;
- (bool)jetsamAndReturnError:(id*)arg1;
- (void)onDisconnect;
- (id)proxyDescription;
- (id)sharedPrimer;

@end

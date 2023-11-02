
@interface XBLaunchImageProviderClient : BSBaseXPCClient {
    XBApplicationLaunchCompatibilityInfo * _appInfo;
}

+ (void)preheatServiceWithTimeout:(double)arg1;

- (void).cxx_destruct;
- (unsigned int)generateImageWithContext:(id)arg1 captureInfo:(id*)arg2 error:(id*)arg3;
- (id)init;
- (id)initWithApplicationInfo:(id)arg1;

@end

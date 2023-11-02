
@interface CPSClipURL : NSObject {
    NSURL * _URL;
}

@property (nonatomic, readonly) NSURL *URL;

+ (bool)isSupported;
+ (bool)shouldStallProgress;
+ (void)stopStallingCurrentInstallationWithCompletionHandler:(id /* block */)arg1;
+ (bool)usesDemoMetadata;

- (void).cxx_destruct;
- (id)URL;
- (void)cancelPrewarmingClipWithCompletionHandler:(id /* block */)arg1;
- (void)checkAvailabilityWithCompletionHandler:(id /* block */)arg1;
- (void)fetchClipMetadataWithCompletionHandler:(id /* block */)arg1;
- (id)initWithURL:(id)arg1;
- (void)installClipWithCompletionHandler:(id /* block */)arg1;
- (void)openWithCompletionHandler:(id /* block */)arg1;
- (void)prewarmClipWithCompletionHandler:(id /* block */)arg1;
- (void)test_uninstallClipWithCompletionHandler:(id /* block */)arg1;

@end

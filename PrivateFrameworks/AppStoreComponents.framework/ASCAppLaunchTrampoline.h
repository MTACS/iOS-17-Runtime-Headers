
@interface ASCAppLaunchTrampoline : NSObject {
    NSObject<ASCAppLaunchTrampolineWorkspace> * _workspace;
}

@property (nonatomic, readonly) NSObject<ASCAppLaunchTrampolineWorkspace> *workspace;

+ (id)log;

- (void).cxx_destruct;
- (id)handleURL:(id)arg1;
- (id)handleURL:(id)arg1 workspace:(id)arg2;
- (id)init;
- (id)initWithWorkspace:(id)arg1;
- (id)openApplicationWithBundleIdentifier:(id)arg1 payloadURL:(id)arg2;
- (id)openApplicationWithBundleIdentifier:(id)arg1 payloadURL:(id)arg2 workspace:(id)arg3;
- (id)productPageURLForAdamId:(id)arg1 deeplink:(id)arg2 eventId:(id)arg3 encodedMetrics:(id)arg4 sourceApplication:(id)arg5;
- (id)productPageURLForAdamId:(id)arg1 eventId:(id)arg2;
- (id)productPageURLForAdamId:(id)arg1 eventId:(id)arg2 encodedMetrics:(id)arg3;
- (id)productPageURLForAdamId:(id)arg1 eventId:(id)arg2 encodedMetrics:(id)arg3 sourceApplication:(id)arg4;
- (id)workspace;

@end


@interface AMSOpenURL : NSObject {
    NSURL * _URL;
    NSMutableSet * _attemptedTargets;
    <AMSBagProtocol> * _bag;
    AMSProcessInfo * _clientInfo;
}

@property (nonatomic, readonly) NSURL *URL;
@property (nonatomic, retain) NSMutableSet *attemptedTargets;
@property (nonatomic, retain) <AMSBagProtocol> *bag;
@property (nonatomic, retain) AMSProcessInfo *clientInfo;

+ (id)_modifiedURLFromURL:(id)arg1 bundleInfo:(id)arg2;
+ (unsigned long long)_openModeForStandardURL:(id)arg1 inApp:(id)arg2 withLinks:(id)arg3;
+ (bool)_openURL:(id)arg1 inApp:(id)arg2;
+ (bool)_openURLWithLaunchServices:(id)arg1;
+ (bool)_shouldOpenStandardURL:(id)arg1 inApp:(id)arg2 withLinks:(id)arg3;
+ (bool)openStandardURL:(id)arg1;
+ (void)openURL:(id)arg1 account:(id)arg2 preferredClient:(id)arg3;
+ (id)openURL:(id)arg1 clientInfo:(id)arg2 bag:(id)arg3;

- (void).cxx_destruct;
- (id)URL;
- (bool)_openURL:(id)arg1 bundleInfo:(id)arg2;
- (id)_performOpen;
- (bool)_shouldOpenURL:(id)arg1;
- (id)attemptedTargets;
- (id)bag;
- (id)clientInfo;
- (id)initWithURL:(id)arg1 clientInfo:(id)arg2 bag:(id)arg3;
- (void)setAttemptedTargets:(id)arg1;
- (void)setBag:(id)arg1;
- (void)setClientInfo:(id)arg1;

@end

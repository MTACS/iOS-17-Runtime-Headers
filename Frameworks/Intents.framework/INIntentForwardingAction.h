
@interface INIntentForwardingAction : NSObject <NSSecureCoding> {
    bool  _allowsForegroundAppLaunch;
    bool  _allowsScenelessAppLaunch;
    NSString * _appBundleIdentifier;
    struct { 
        unsigned int val[8]; 
    }  _hostProcessAuditToken;
    INIntent * _intent;
    double  _requestTimeout;
}

@property (nonatomic, readonly) bool allowsForegroundAppLaunch;
@property (nonatomic) bool allowsScenelessAppLaunch;
@property (nonatomic, readonly) NSString *appBundleIdentifier;
@property (nonatomic, readonly) struct { unsigned int x1[8]; } hostProcessAuditToken;
@property (nonatomic, readonly) INIntent *intent;
@property (nonatomic) double requestTimeout;

+ (Class)responseClass;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowsForegroundAppLaunch;
- (bool)allowsScenelessAppLaunch;
- (id)appBundleIdentifier;
- (void)encodeWithCoder:(id)arg1;
- (void)executeLocallyWithIntentDeliverer:(id)arg1 completionHandler:(id /* block */)arg2;
- (bool)executeRemotelyWithVendorRemote:(id)arg1 completionHandler:(id /* block */)arg2;
- (struct { unsigned int x1[8]; })hostProcessAuditToken;
- (id)initWithCoder:(id)arg1;
- (id)initWithIntent:(id)arg1;
- (id)intent;
- (double)requestTimeout;
- (void)setAllowsScenelessAppLaunch:(bool)arg1;
- (void)setRequestTimeout:(double)arg1;

@end

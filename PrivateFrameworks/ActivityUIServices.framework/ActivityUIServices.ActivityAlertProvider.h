
@interface ActivityUIServices.ActivityAlertProvider : NSObject <ActivityUIServices.ActivityAlertProviding> {
    void activityIdentifier;
    void alertAction;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  alertConfiguration;
    void applicationBundleIdentifier;
    void configuration;
    void payloadID;
    void presentationOptions;
}

@property (nonatomic, readonly) long long action;
@property (nonatomic, retain) TLAlertConfiguration *configuration;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *payloadIdentifier;
@property (nonatomic, retain) ACAlertPresentationOptions *presentationOptions;

- (void).cxx_destruct;
- (long long)action;
- (id)configuration;
- (id)identifier;
- (id)init;
- (id)initWithIdentifier:(id)arg1 payloadIdentifier:(id)arg2 action:(long long)arg3 presentationOptions:(id)arg4 soundName:(id)arg5 applicationBundleIdentifier:(id)arg6;
- (id)payloadIdentifier;
- (id)presentationOptions;
- (void)setConfiguration:(id)arg1;
- (void)setPresentationOptions:(id)arg1;

@end

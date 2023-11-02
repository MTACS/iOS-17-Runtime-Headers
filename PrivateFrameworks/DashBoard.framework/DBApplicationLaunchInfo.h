
@interface DBApplicationLaunchInfo : NSObject {
    NSDictionary * _activationSettings;
    DBApplicationInfo * _application;
}

@property (nonatomic, readonly) NSDictionary *activationSettings;
@property (nonatomic, readonly) DBApplicationInfo *application;

+ (id)launchInfoForApplication:(id)arg1;
+ (id)launchInfoForApplication:(id)arg1 withActivationSettings:(id)arg2;

- (void).cxx_destruct;
- (id)activationSettings;
- (id)application;
- (id)initWithApplication:(id)arg1 activationSettings:(id)arg2;

@end

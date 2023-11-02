
@interface VSNonChannelAppDecider : NSObject {
    NSArray * _appDescriptions;
    NSString * _preferredAppBundleOrAdamID;
    NSString * _preferredDeviceFamily;
}

@property (nonatomic, copy) NSArray *appDescriptions;
@property (nonatomic, copy) NSString *preferredAppBundleOrAdamID;
@property (nonatomic, copy) NSString *preferredDeviceFamily;

- (void).cxx_destruct;
- (id)appDescriptions;
- (id)decidedNonChannelApps;
- (id)init;
- (id)preferredAppBundleOrAdamID;
- (id)preferredDeviceFamily;
- (void)setAppDescriptions:(id)arg1;
- (void)setPreferredAppBundleOrAdamID:(id)arg1;
- (void)setPreferredDeviceFamily:(id)arg1;

@end

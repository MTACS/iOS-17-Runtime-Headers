
@interface VUIJSDevice : VUIJSObject <VUIJSDevice> {
    id  _networkPropertiesChangedToken;
}

@property (nonatomic, readonly) NSString *appIdentifier;
@property (nonatomic, readonly) NSString *appVersion;
@property (nonatomic, readonly) bool isInAirplaneMode;
@property (nonatomic, readonly) bool isInRetailDemoMode;
@property (nonatomic, readonly) bool isNetworkReachable;
@property (nonatomic, readonly) bool isSeedBuild;
@property (nonatomic, readonly) bool isVisionOS;
@property (nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) NSString *networkType;
@property (nonatomic, readonly) NSString *osBuildNumber;
@property (nonatomic, readonly) NSString *productType;
@property (nonatomic, readonly) bool runningAnInternalBuild;
@property (nonatomic, readonly) bool supportsSharedWatchPostPlayBinge;
@property (nonatomic, readonly) NSString *systemVersion;

+ (id)getMobileGestaltString:(struct __CFString { }*)arg1;

- (void).cxx_destruct;
- (id)appIdentifier;
- (id)appVersion;
- (void)dealloc;
- (id)initWithAppContext:(id)arg1;
- (bool)isInAirplaneMode;
- (bool)isInRetailDemoMode;
- (bool)isNetworkReachable;
- (bool)isSeedBuild;
- (bool)isVisionOS;
- (id)model;
- (id)networkType;
- (id)osBuildNumber;
- (id)productType;
- (bool)runningAnInternalBuild;
- (bool)supportsSharedWatchPostPlayBinge;
- (id)systemVersion;

@end

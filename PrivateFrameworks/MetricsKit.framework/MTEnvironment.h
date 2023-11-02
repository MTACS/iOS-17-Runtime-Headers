
@interface MTEnvironment : MTObject {
    <MTEnvironmentDelegate> * _delegate;
}

@property (nonatomic) <MTEnvironmentDelegate> *delegate;

- (void).cxx_destruct;
- (id)app;
- (id)appVersion;
- (id)capacityData;
- (id)capacityDataAvailable;
- (id)capacityDisk;
- (id)capacitySystem;
- (id)capacitySystemAvailable;
- (id)connectionType;
- (id)cookies;
- (id)delegate;
- (id)dsId;
- (id)environmentBuild;
- (id)environmentDataCenter;
- (id)environmentInstance;
- (id)hardwareFamily;
- (id)hardwareModel;
- (id)hostApp;
- (id)hostAppVersion;
- (bool)isAnonymous;
- (id)os;
- (id)osBuildNumber;
- (id)osLanguages;
- (id)osVersion;
- (id)pageUrl;
- (id)parentPageUrl;
- (id)pixelRatio;
- (id)resourceRevNum;
- (id)screenHeight;
- (id)screenWidth;
- (void)setDelegate:(id)arg1;
- (id)storeFrontHeader;
- (id)userAgent;
- (id)windowInnerHeight;
- (id)windowInnerWidth;
- (id)windowOuterHeight;
- (id)windowOuterWidth;

@end

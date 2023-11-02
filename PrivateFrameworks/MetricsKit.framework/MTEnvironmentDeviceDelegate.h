
@interface MTEnvironmentDeviceDelegate : NSObject <MTEnvironmentDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_diskUsage;
- (id)app;
- (id)appVersion;
- (id)capacityData;
- (id)capacityDataAvailable;
- (id)capacityDisk;
- (id)capacitySystem;
- (id)capacitySystemAvailable;
- (id)connectionType;
- (id)cookies;
- (id)dsId;
- (id)hardwareFamily;
- (id)hardwareModel;
- (id)hostApp;
- (bool)isAnonymous;
- (id)os;
- (id)osBuildNumber;
- (id)osLanguages;
- (id)osVersion;
- (id)pageUrl;
- (id)pixelRatio;
- (id)resourceRevNum;
- (id)screenHeight;
- (id)screenWidth;
- (id)storeFrontHeader;
- (id)userAgent;
- (id)userType;
- (id)windowInnerHeight;
- (id)windowInnerWidth;
- (id)windowOuterHeight;
- (id)windowOuterWidth;

@end

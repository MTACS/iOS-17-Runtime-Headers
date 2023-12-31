
@protocol MTEnvironmentDelegate <NSObject>

@required

- (<NSObject> *)app;
- (<NSObject> *)appVersion;
- (<NSObject> *)capacityData;
- (<NSObject> *)capacityDataAvailable;
- (<NSObject> *)capacityDisk;
- (<NSObject> *)capacitySystem;
- (<NSObject> *)capacitySystemAvailable;
- (<NSObject> *)connectionType;
- (<NSObject> *)cookies;
- (<NSObject> *)dsId;
- (<NSObject> *)hardwareFamily;
- (<NSObject> *)hardwareModel;
- (<NSObject> *)hostApp;
- (bool)isAnonymous;
- (<NSObject> *)os;
- (<NSObject> *)osBuildNumber;
- (<NSObject> *)osLanguages;
- (<NSObject> *)osVersion;
- (<NSObject> *)pageUrl;
- (<NSObject> *)pixelRatio;
- (<NSObject> *)resourceRevNum;
- (<NSObject> *)screenHeight;
- (<NSObject> *)screenWidth;
- (<NSObject> *)storeFrontHeader;
- (<NSObject> *)userAgent;
- (<NSObject> *)userType;
- (<NSObject> *)windowInnerHeight;
- (<NSObject> *)windowInnerWidth;
- (<NSObject> *)windowOuterHeight;
- (<NSObject> *)windowOuterWidth;

@optional

- (<NSObject> *)environmentBuild;
- (<NSObject> *)environmentDataCenter;
- (<NSObject> *)environmentInstance;
- (<NSObject> *)hostAppVersion;
- (<NSObject> *)parentPageUrl;

@end


@interface GKDevice : NSObject {
    NSString * _buildVersion;
    NSString * _deviceType;
    bool  _gameKitAvailable;
    NSString * _gameKitVersion;
    NSString * _osVersion;
    NSString * _udid;
}

@property (nonatomic, readonly) NSString *buildVersion;
@property (nonatomic, retain) NSString *deviceType;
@property (getter=isGameKitAvailable, nonatomic, readonly) bool gameKitAvailable;
@property (nonatomic, readonly) NSString *gameKitVersion;
@property (getter=isInternalBuild, nonatomic, readonly) bool internalBuild;
@property (nonatomic, readonly) NSString *osVersion;
@property (nonatomic, readonly) NSString *udid;

+ (id)currentDevice;

- (void).cxx_destruct;
- (void)_initPlatform;
- (id)_platformUDID;
- (id)buildVersion;
- (id)buildVersionHeader;
- (id)deviceType;
- (id)gameKitVersion;
- (id)init;
- (bool)isDevelopmentDevice;
- (bool)isFocusDevice;
- (bool)isGameKitAvailable;
- (bool)isInternalBuild;
- (bool)isProductType:(unsigned int)arg1;
- (id)osVersion;
- (id)platformBuildVersion;
- (id)processNameHeader;
- (void)setDeviceType:(id)arg1;
- (id)udid;
- (id)userAgentWithProcessName:(id)arg1 protocolVersion:(id)arg2;

@end


@interface ATXBiomeAppLaunchWrapper : NSObject {
    BMAppInFocus * _appLaunchEvent;
    bool  _isLocal;
    bool  _isMacDesktop;
    bool  _isMacPortable;
    NSDate * _launchTimestamp;
}

@property (nonatomic, readonly) BMAppInFocus *appLaunchEvent;
@property (nonatomic, readonly) bool isLocal;
@property (nonatomic, readonly) bool isMacDesktop;
@property (nonatomic, readonly) bool isMacPortable;
@property (nonatomic, readonly) NSDate *launchTimestamp;

- (void).cxx_destruct;
- (id)appLaunchEvent;
- (id)initWithAppLaunch:(id)arg1 isLocal:(bool)arg2 isMacPortable:(bool)arg3 isMacDesktop:(bool)arg4;
- (bool)isLocal;
- (bool)isMacDesktop;
- (bool)isMacPortable;
- (id)launchTimestamp;

@end

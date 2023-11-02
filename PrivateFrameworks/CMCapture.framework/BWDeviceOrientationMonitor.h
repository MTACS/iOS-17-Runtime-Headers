
@interface BWDeviceOrientationMonitor : NSObject {
    unsigned int  _currentOrientation;
    unsigned int  _mostRecentPortraitLandscapeOrientation;
    int  _orientationDispatchToken;
    NSObject<OS_dispatch_queue> * _orientationNotificationDispatchQueue;
    <BWDeviceOrientationMonitorPortraitLandscapeUpdateDelegate> * _portraitLandscapeUpdateDelegate;
    struct OpaqueFigSimpleMutex { } * _stateMutex;
}

@property (nonatomic, readonly) unsigned int mostRecentPortraitLandscapeOrientation;
@property (nonatomic) <BWDeviceOrientationMonitorPortraitLandscapeUpdateDelegate> *portraitLandscapeUpdateDelegate;

+ (void)initialize;

- (void)dealloc;
- (id)init;
- (unsigned int)mostRecentPortraitLandscapeOrientation;
- (id)portraitLandscapeUpdateDelegate;
- (void)setPortraitLandscapeUpdateDelegate:(id)arg1;
- (bool)start;
- (bool)stop;

@end

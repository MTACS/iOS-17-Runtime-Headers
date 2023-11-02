
@interface PKPencilTouchDetectionService : NSObject <NSXPCListenerDelegate, PKPencilTouchDetectionGestureRecognizerDelegate, _PKTouchDetectionProtocol> {
    double  _activePencilUsageTimestamp;
    PKPencilTouchDetectionGestureRecognizer * _detectionGesture;
    FBSDisplayLayoutMonitor * _displayLayoutMonitor;
    bool  _isListening;
    NSXPCListener * _listener;
    NSUserDefaults * _pencilDefaults;
    NSMutableDictionary * _timestamps;
    NSDictionary * _userInfoForNotification;
    bool  _wereFrontBoardOverlaysEnabled;
}

@property (nonatomic) double activePencilUsageTimestamp;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) PKPencilTouchDetectionGestureRecognizer *detectionGesture;
@property (nonatomic, retain) FBSDisplayLayoutMonitor *displayLayoutMonitor;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isListening;
@property (nonatomic, retain) NSXPCListener *listener;
@property (nonatomic, retain) NSUserDefaults *pencilDefaults;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSMutableDictionary *timestamps;
@property (nonatomic, retain) NSDictionary *userInfoForNotification;
@property (nonatomic) bool wereFrontBoardOverlaysEnabled;

+ (void)beginObservingTouchesForDetection;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_nop:(id)arg1;
- (void)_updateActivePencilUsageForTouchType:(long long)arg1;
- (double)activePencilUsageTimestamp;
- (void)dealloc;
- (id)detectionGesture;
- (id)displayLayoutMonitor;
- (id)init;
- (bool)isListening;
- (id)listener;
- (bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)loadDefaultsIfNecessary;
- (void)loadTimestampsIfNecessary;
- (id)pencilDefaults;
- (void)pencilType:(long long)arg1 hasRecentlyBeenUsedWithCompletionHandler:(id /* block */)arg2;
- (void)persistTimestamps;
- (void)postUpdateNotificationIfNecessary;
- (void)reset:(id)arg1;
- (void)resumeConnectionIfIdle;
- (void)setActivePencilUsageTimestamp:(double)arg1;
- (void)setDetectionGesture:(id)arg1;
- (void)setDisplayLayoutMonitor:(id)arg1;
- (void)setIsListening:(bool)arg1;
- (void)setListener:(id)arg1;
- (void)setPencilDefaults:(id)arg1;
- (void)setTimestamps:(id)arg1;
- (void)setUserInfoForNotification:(id)arg1;
- (void)setWereFrontBoardOverlaysEnabled:(bool)arg1;
- (id)stringForTouchDetectionPencilType:(long long)arg1;
- (bool)timestampIndicatesRecentUsage:(id)arg1;
- (id)timestamps;
- (void)updateTimestampForType:(long long)arg1;
- (id)userInfoForNotification;
- (bool)wereFrontBoardOverlaysEnabled;

@end

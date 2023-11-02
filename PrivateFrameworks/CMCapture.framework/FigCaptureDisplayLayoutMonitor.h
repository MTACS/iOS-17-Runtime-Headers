
@interface FigCaptureDisplayLayoutMonitor : NSObject {
    long long  _displayType;
    NSArray * _elementIdentifiersToIgnore;
    SBSExternalDisplayService * _externalDisplayService;
    FigCaptureDisplayLayout * _layout;
    struct OpaqueFigSimpleMutex { } * _layoutLock;
    FBSDisplayLayoutMonitor * _layoutMonitor;
    NSMutableArray * _layoutObservers;
    struct OpaqueFigSimpleMutex { } * _layoutObserversLock;
}

@property (nonatomic, readonly) long long displayType;
@property (getter=isOnHomeScreen, nonatomic, readonly) bool onHomeScreen;
@property (getter=isOnLockScreen, nonatomic, readonly) bool onLockScreen;

+ (void)initialize;
+ (id)sharedDisplayLayoutMonitor;
+ (id)sharedExternalDisplayLayoutMonitor;

- (void)addLayoutObserver:(id)arg1;
- (void)dealloc;
- (id)debugDescription;
- (id)description;
- (long long)displayType;
- (void)externalDisplayDidConnect:(id)arg1;
- (void)externalDisplayWillDisconnect:(id)arg1;
- (id)initWithFBSDisplayLayoutMonitorCreateFunction:(int (*)arg1 displayType:(long long)arg2;
- (bool)isOnHomeScreen;
- (bool)isOnLockScreen;
- (void)removeLayoutObserver:(id)arg1;

@end

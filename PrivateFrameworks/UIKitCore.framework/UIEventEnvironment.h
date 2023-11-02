
@interface UIEventEnvironment : NSObject {
    UIApplication * _application;
    double  _beginTimeForTouchEvents;
    double  _commitTimeForTouchEvents;
    NSMapTable * _currentNudgePressTypeByScene;
    NSMapTable * _currentTouchByScene;
    double  _deadlineTimeForTouchEvents;
    long long  _disableTouchCoalescingCount;
    NSMutableDictionary * _dragEventsByContextAndSessionIDPair;
    NSMutableDictionary * _estimatedTouchRecordsByContextIDAndEstimationIndex;
    NSMutableArray * _estimatedTouchRecordsInIncomingOrder;
    UIEvent * _event;
    NSMutableArray * _eventQueue;
    NSMapTable * _eventRegistryByScene;
    unsigned int  _fallbackPencilBarrelEventFocusWindowContextID;
    UIPhysicalKeyboardEvent * _fallbackPhysicalKeyboardEvent;
    NSMutableDictionary * _fallbackPressMap;
    UIPressesEvent * _fallbackPressesEvent;
    UIWheelEvent * _fallbackWheelEvent;
    bool  _hasSeenAnyPencilEvents;
    NSHashTable * _invalidatedAndDisconnectedScenes;
    bool  _isSystemApplication;
    UIMotionEvent * _motionEvent;
    unsigned int  _pencilBarrelEventFocusWindowContextID;
    NSMapTable * _pressesMapByScene;
    UIRemoteControlEvent * _remoteControlEvent;
    struct __CFDictionary { } * _touchMapsByWindow;
    NSMutableSet * _windowsWithActiveTouchMaps;
}

@property (nonatomic) UIApplication *application;
@property (nonatomic, retain) NSMutableArray *eventQueue;

- (void).cxx_destruct;
- (void)_enqueueHIDEvent:(struct __IOHIDEvent { }*)arg1;
- (id)application;
- (void)dealloc;
- (id)eventQueue;
- (id)initWithApplication:(id)arg1;
- (void)pointerLockStateDidChange:(id)arg1;
- (void)sceneDidActivate:(id)arg1;
- (void)sceneDidDisconnect:(id)arg1;
- (void)setApplication:(id)arg1;
- (void)setEventQueue:(id)arg1;

@end


@interface UITouch : NSObject <ASVTouch, _UIEventComponent, _UIResponderForwardable> {
    BKSHIDEventAuthenticationMessage * __authenticationMessage;
    bool  __expectedToBecomeDrag;
    BKSWindowServerHitTestSecurityAnalysis * __hitTestSecurityAnalysis;
    <_UITouchPhaseChangeDelegate> * __phaseChangeDelegate;
    UIWindow * __windowServerHitTestWindow;
    double  _altitudeAngle;
    double  _azimuthAngleInCADisplay;
    double  _azimuthAngleInWindow;
    struct CGSize { 
        double width; 
        double height; 
    }  _displacement;
    bool  _eaten;
    unsigned long long  _edgeAim;
    long long  _edgeType;
    long long  _forceCorrelationToken;
    unsigned char  _forceStage;
    NSMutableArray * _forwardingRecord;
    NSMutableArray * _gestureRecognizers;
    bool  _hasForceUpdate;
    struct __IOHIDEvent { } * _hidEvent;
    double  _initialTouchTimestamp;
    struct CGPoint { 
        double x; 
        double y; 
    }  _locationInWindow;
    double  _majorRadiusTolerance;
    double  _maxObservedPressure;
    double  _maximumPossiblePressure;
    double  _movementMagnitudeSquared;
    bool  _needsForceUpdate;
    unsigned char  _pathIdentity;
    long long  _pathIndex;
    double  _pathMajorRadius;
    long long  _phase;
    struct CGPoint { 
        double x; 
        double y; 
    }  _preciseLocationInWindow;
    struct CGPoint { 
        double x; 
        double y; 
    }  _precisePreviousLocationInWindow;
    unsigned long long  _precision;
    double  _pressure;
    struct CGPoint { 
        double x; 
        double y; 
    }  _previousLocationInWindow;
    double  _previousPressure;
    UIResponder<_UIGestureOwning> * _responder;
    unsigned long long  _senderID;
    unsigned long long  _tapCount;
    double  _timestamp;
    _UITouchAuthenticationRecord * _touchAuthenticationRecord;
    struct { 
        unsigned int _firstTouchForView : 1; 
        unsigned int _isTap : 1; 
        unsigned int _isDelayed : 1; 
        unsigned int _sentTouchesEnded : 1; 
        unsigned int _abandonForwardingRecord : 1; 
        unsigned int _deliversUpdatesInTouchesMovedIsValid : 1; 
        unsigned int _deliversUpdatesInTouchesMoved : 1; 
        unsigned int _isPredictedTouch : 1; 
        unsigned int _didDispatchAsEnded : 1; 
        unsigned int _isPointerTouch : 1; 
        unsigned int _analyticsUsedByAllowedGesture : 1; 
        unsigned int _isRestingTouch : 1; 
        unsigned int _isTapToClick : 1; 
    }  _touchFlags;
    unsigned int  _touchIdentifier;
    _UITouchPredictor * _touchPredictor;
    long long  _type;
    UIView * _warpedIntoView;
    UIWindow * _window;
    float  _zGradient;
}

@property (setter=_setEdgeAim:, nonatomic) unsigned long long _edgeAim;
@property (setter=_setEdgeType:, nonatomic) long long _edgeType;
@property (nonatomic, readonly) unsigned long long _eventComponentType;
@property (setter=_setForceStage:, nonatomic) unsigned char _forceStage;
@property (setter=_setForwardablePhase:, nonatomic) long long _forwardablePhase;
@property (setter=_setHidEvent:, nonatomic) struct __IOHIDEvent { }*_hidEvent;
@property (setter=_setIsPointerTouch:, nonatomic) bool _isPointerTouch;
@property (setter=_setIsRestingTouch:, nonatomic) bool _isRestingTouch;
@property (setter=_setIsTapToClick:, nonatomic) bool _isTapToClick;
@property (setter=_setPathIdentity:, nonatomic) unsigned char _pathIdentity;
@property (setter=_setPathIndex:, nonatomic) long long _pathIndex;
@property (nonatomic, readonly) double _pressure;
@property (setter=_setResponder:, nonatomic, retain) UIResponder<_UIGestureOwning> *_responder;
@property (setter=_setSenderID:, nonatomic) unsigned long long _senderID;
@property (setter=_setTouchAuthenticationRecord:, nonatomic, retain) _UITouchAuthenticationRecord *_touchAuthenticationRecord;
@property (setter=_setZGradient:, nonatomic) float _zGradient;
@property (nonatomic, readonly) double altitudeAngle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) long long estimatedProperties;
@property (nonatomic, readonly) long long estimatedPropertiesExpectingUpdates;
@property (nonatomic, readonly) NSNumber *estimationUpdateIndex;
@property (nonatomic, readonly) double force;
@property (nonatomic, readonly, copy) NSArray *gestureRecognizers;
@property (readonly) unsigned long long hash;
@property (nonatomic) double initialTouchTimestamp;
@property (nonatomic, readonly) void location;
@property (nonatomic, readonly) double majorRadius;
@property (nonatomic, readonly) double majorRadiusTolerance;
@property (nonatomic, readonly) double maximumPossibleForce;
@property (nonatomic, readonly) long long phase;
@property (nonatomic) long long phase;
@property (nonatomic, readonly) void previousLocation;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long tapCount;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic) double timestamp;
@property (setter=_setType:, nonatomic) long long type;
@property (nonatomic, retain) UIView *view;
@property (nonatomic, retain) UIWindow *window;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (id)_createTouchesWithGSEvent:(struct __GSEvent { }*)arg1 phase:(long long)arg2 view:(id)arg3;

- (void).cxx_destruct;
- (void)_abandonForwardingRecord;
- (void)_clearForReenteringHoverInWindow:(id)arg1;
- (void)_clearGestureRecognizers;
- (id)_clone;
- (void)_clonePropertiesToTouch:(id)arg1;
- (long long)_compareIndex:(id)arg1;
- (unsigned long long)_edgeAim;
- (bool)_edgeForceActive;
- (bool)_edgeForcePending;
- (long long)_edgeType;
- (unsigned long long)_eventComponentType;
- (unsigned char)_forceStage;
- (long long)_forwardablePhase;
- (id)_forwardingRecord;
- (id)_gestureRecognizers;
- (struct __IOHIDEvent { }*)_hidEvent;
- (bool)_isAbandoningForwardingRecord;
- (bool)_isFirstTouchForView;
- (bool)_isPointerTouch;
- (bool)_isRestingTouch;
- (bool)_isTapToClick;
- (void)_loadStateFromTouch:(id)arg1;
- (struct CGPoint { double x1; double x2; })_locationInSceneReferenceSpace;
- (id)_mutableForwardingRecord;
- (unsigned char)_pathIdentity;
- (long long)_pathIndex;
- (float)_pathMajorRadius;
- (id)_phaseDescription;
- (double)_pressure;
- (struct CGPoint { double x1; double x2; })_previousLocationInSceneReferenceSpace;
- (id)_responder;
- (long long)_responderForwardableType;
- (SEL)_responderSelectorForPhase:(long long)arg1;
- (unsigned long long)_senderID;
- (void)_setEdgeAim:(unsigned long long)arg1;
- (void)_setEdgeType:(long long)arg1;
- (void)_setForceStage:(unsigned char)arg1;
- (void)_setForwardablePhase:(long long)arg1;
- (void)_setHidEvent:(struct __IOHIDEvent { }*)arg1;
- (void)_setIsFirstTouchForView:(bool)arg1;
- (void)_setIsPointerTouch:(bool)arg1;
- (void)_setIsRestingTouch:(bool)arg1;
- (void)_setIsTapToClick:(bool)arg1;
- (void)_setLocationInWindow:(struct CGPoint { double x1; double x2; })arg1 resetPrevious:(bool)arg2;
- (void)_setPathIdentity:(unsigned char)arg1;
- (void)_setPathIndex:(long long)arg1;
- (void)_setPreviousTouch:(id)arg1;
- (void)_setResponder:(id)arg1;
- (void)_setSenderID:(unsigned long long)arg1;
- (void)_setTouchAuthenticationRecord:(id)arg1;
- (void)_setType:(long long)arg1;
- (void)_setZGradient:(float)arg1;
- (id)_touchAuthenticationRecord;
- (unsigned int)_touchIdentifier;
- (bool)_wantsForwardingFromResponder:(id)arg1 toNextResponder:(id)arg2 withEvent:(id)arg3;
- (float)_zGradient;
- (double)altitudeAngle;
- (double)azimuthAngleInView:(id)arg1;
- (struct CGVector { double x1; double x2; })azimuthUnitVectorInView:(id)arg1;
- (void)dealloc;
- (id)description;
- (long long)estimatedProperties;
- (long long)estimatedPropertiesExpectingUpdates;
- (id)estimationUpdateIndex;
- (double)force;
- (id)gestureRecognizers;
- (long long)info;
- (double)initialTouchTimestamp;
- (bool)isDelayed;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (double)majorRadius;
- (double)majorRadiusTolerance;
- (double)maximumPossibleForce;
- (long long)phase;
- (struct CGPoint { double x1; double x2; })preciseLocationInView:(id)arg1;
- (struct CGPoint { double x1; double x2; })precisePreviousLocationInView:(id)arg1;
- (struct CGPoint { double x1; double x2; })previousLocationInView:(id)arg1;
- (void)setInitialTouchTimestamp:(double)arg1;
- (void)setIsDelayed:(bool)arg1;
- (void)setPhase:(long long)arg1;
- (void)setTapCount:(unsigned long long)arg1;
- (void)setTimestamp:(double)arg1;
- (void)setView:(id)arg1;
- (void)setWindow:(id)arg1;
- (unsigned long long)tapCount;
- (double)timestamp;
- (long long)type;
- (id)view;
- (id)window;

// Image: /System/Library/Frameworks/PencilKit.framework/PencilKit

- (struct CGPoint { double x1; double x2; })PK_locationInView:(id)arg1;
- (struct CGPoint { double x1; double x2; })PK_preciseLocationInView:(id)arg1;

// Image: /System/Library/Frameworks/SpriteKit.framework/SpriteKit

- (struct CGPoint { double x1; double x2; })locationInNode:(id)arg1;
- (struct CGPoint { double x1; double x2; })previousLocationInNode:(id)arg1;

// Image: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer

- (void)location;
- (void)previousLocation;

@end

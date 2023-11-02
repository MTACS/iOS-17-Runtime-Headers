
@interface UIGestureRecognizer : NSObject <TSDGesture, _UIEventRespondable, _UIExcludable, _UIForceLevelClassifierDelegate, _UIPressesEventRespondable, _UITouchesEventRespondable> {
    NSMutableSet * _activeEvents;
    NSArray * _allowedPressTypes;
    long long  _allowedTouchTypes;
    bool  _analyticsGestureHandled;
    NSObservationSource * _beganObservable;
    long long  _buttonMask;
    NSMutableArray * _delayedPresses;
    NSMutableArray * _delayedTouches;
    <UIGestureRecognizerDelegate> * _delegate;
    NSMutableSet * _failureDependents;
    NSMutableSet * _failureRequirements;
    double  _firstEventTimestamp;
    _UIForceLevelClassifier * _forceClassifier;
    unsigned long long  _forcePressCount;
    NSMutableArray * _forceTargets;
    UIGestureEnvironment * _gestureEnvironment;
    struct { 
        unsigned int delegateShouldBegin : 1; 
        unsigned int delegateCanPrevent : 1; 
        unsigned int delegateCanBePrevented : 1; 
        unsigned int delegateShouldRecognizeSimultaneously : 1; 
        unsigned int delegateShouldReceiveEvent : 1; 
        unsigned int delegateShouldReceiveTouch : 1; 
        unsigned int delegateShouldReceivePress : 1; 
        unsigned int delegateShouldRequireFailure : 1; 
        unsigned int delegateShouldBeRequiredToFail : 1; 
        unsigned int delegateFailed : 1; 
        unsigned int privateDelegateShouldBegin : 1; 
        unsigned int privateDelegateCanPrevent : 1; 
        unsigned int privateDelegateCanBePrevented : 1; 
        unsigned int privateDelegateShouldRecognizeSimultaneously : 1; 
        unsigned int privateDelegateShouldReceiveEvent : 1; 
        unsigned int privateDelegateShouldReceiveTouch : 1; 
        unsigned int privateDelegateShouldReceivePress : 1; 
        unsigned int privateDelegateShouldRequireFailure : 1; 
        unsigned int privateDelegateShouldBeRequiredToFail : 1; 
        unsigned int subclassShouldRequireFailure : 1; 
        unsigned int subclassShouldBeRequiredToFail : 1; 
        unsigned int hasSubclassDynamicFailureRequirements : 1; 
        unsigned int hasDelegateDynamicFailureRequirements : 1; 
        unsigned int subclassTouchesEstimatedPropertiesUpdated : 1; 
        unsigned int subclassShouldReceiveTouchForEventRecognizerView : 1; 
        unsigned int queriedFailureRequirements : 1; 
        unsigned int cancelsTouchesInView : 1; 
        unsigned int delaysTouchesBegan : 1; 
        unsigned int delaysTouchesEnded : 1; 
        unsigned int disabled : 1; 
        unsigned int dirty : 1; 
        unsigned int delivered : 1; 
        unsigned int deliveredEndedOrCancelled : 1; 
        unsigned int continuous : 1; 
        unsigned int requiresDelayedBegan : 1; 
        unsigned int willBeginAfterSatisfyingFailureRequirements : 1; 
        unsigned int requiresSystemGesturesToFail : 1; 
        unsigned int acceptsFailureRequirements : 1; 
        unsigned int requiresExclusiveTouchType : 1; 
        unsigned int initialTouchTypeIsValid : 1; 
        unsigned int forceRequirementSatisfied : 1; 
        unsigned int wantsDragEvents : 1; 
        unsigned int conformsToDragEventRespondable : 1; 
        unsigned int isDynamicGesture : 1; 
        unsigned int canExcludeWithActiveRequirements : 1; 
        unsigned int isObservingGesture : 1; 
        unsigned int didCheckForcePressShouldBegin : 1; 
        unsigned int canSendForcePressAction : 1; 
        unsigned int queriedShouldReceiveTouchesEvent : 1; 
        unsigned int shouldReceiveTouchesEvent : 1; 
        unsigned int queriedDelegateShouldReceiveTouchesEvent : 1; 
        unsigned int delegateShouldReceiveTouchesEvent : 1; 
        unsigned int queriedShouldReceivePressesEvent : 1; 
        unsigned int shouldReceivePressesEvent : 1; 
        unsigned int queriedDelegateShouldReceivePressesEvent : 1; 
        unsigned int delegateShouldReceivePressesEvent : 1; 
        unsigned int conformsToHoverEventRespondable : 1; 
        unsigned int conformsToScrollEventRespondable : 1; 
        unsigned int conformsToTransformEventRespondable : 1; 
        unsigned int isWebKitMouseGestureRecognizer : 1; 
        unsigned int canBeCancelledByAffectedViews : 1; 
        unsigned int enqueuedForReset : 1; 
        unsigned int sendUpdateOnEventChange : 1; 
    }  _gestureFlags;
    long long  _initialTouchType;
    unsigned long long  _inputPrecision;
    NSMutableSet * _internalActiveTouches;
    bool  _keepTouchesOnContinuation;
    double  _lastTouchTimestamp;
    unsigned long long  _machTimeEnqueuedForReset;
    long long  _modifierFlags;
    NSString * _name;
    <_UIGestureOwning> * _owner;
    long long  _requiredPreviewForceState;
    long long  _state;
    NSMutableArray * _targets;
    _UITouchForceObservable * _touchForceObservable;
    NSObservation * _touchForceObservableAndClassifierObservation;
}

@property (nonatomic, readonly) NSObject<NSObservable> *_beganObservable;
@property (getter=_canBeCancelledByAffectedViews, setter=_setCanBeCancelledByAffectedViews:, nonatomic) bool _canBeCancelledByAffectedViews;
@property (nonatomic, readonly) NSSet *_failureDependents;
@property (nonatomic, readonly) NSSet *_failureRequirements;
@property (nonatomic, readonly) bool _hasUnmetFailureRequirements;
@property (nonatomic, readonly) bool _isTouchGestureRecognizer;
@property (setter=_setKeepTouchesOnContinuation:, nonatomic) bool _keepTouchesOnContinuation;
@property (nonatomic, readonly) NSMutableSet *_pairedGestureIdentifiers;
@property (setter=_setRecognitionEvent:, nonatomic) long long _recognitionEvent;
@property (setter=_setSendUpdateOnEventChange:, nonatomic) bool _sendUpdateOnEventChange;
@property (readonly) unsigned long long akNumberOfTouches;
@property (nonatomic, copy) NSArray *allowedPressTypes;
@property (nonatomic, copy) NSArray *allowedTouchTypes;
@property (nonatomic, readonly) long long buttonMask;
@property (nonatomic, retain) <TSDGestureTarget> *cachedGestureTarget;
@property (getter=_canExcludeWithActiveRequirements, setter=_setCanExcludeWithActiveRequirements:, nonatomic) bool canExcludeWithActiveRequirements;
@property (nonatomic) bool cancelsTouchesInView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) bool delaysTouchesBegan;
@property (nonatomic) bool delaysTouchesEnded;
@property (nonatomic) <UIGestureRecognizerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEnabled, nonatomic) bool enabled;
@property (getter=_isEventObserving, setter=_setEventObserving:, nonatomic) bool eventObserving;
@property (nonatomic) <TSDGestureDelegate> *gestureDelegate;
@property (nonatomic) UIGestureEnvironment *gestureEnvironment;
@property (nonatomic, retain) NSString *gestureKind;
@property (nonatomic, readonly) int gestureState;
@property (readonly) unsigned long long hash;
@property (getter=_inputPrecision, nonatomic) unsigned long long inputPrecision;
@property (nonatomic, readonly) double lastTouchTimestamp;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } location;
@property (nonatomic, readonly) long long modifierFlags;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, readonly) unsigned long long numberOfTouches;
@property (nonatomic) bool requiresExclusiveTouchType;
@property (getter=_requiresSystemGesturesToFail, setter=_setRequiresSystemGesturesToFail:, nonatomic) bool requiresSystemGesturesToFail;
@property (getter=sb_isInstalledAsSystemGesture, setter=sb_setInstalledAsSystemGesture:, nonatomic) bool sb_installedAsSystemGesture;
@property (nonatomic, readonly) long long state;
@property (readonly) Class superclass;
@property (nonatomic, retain) TSDRep *targetRep;
@property (nonatomic, readonly) UIView *view;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (bool)_shouldDefaultToTouches;
+ (bool)_shouldSupportStylusTouches;
+ (bool)_shouldUseLinearForceLevelClassifier;
+ (bool)_supportsTouchContinuation;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)_acceptsFailureRequirements;
- (id)_activeEventOfType:(long long)arg1;
- (id)_activeEvents;
- (id)_activePressesEvent;
- (id)_activeTouchesEvent;
- (id)_activeTouchesForEvent:(id)arg1;
- (void)_addForceTarget:(id)arg1 action:(SEL)arg2;
- (void)_addTouch:(id)arg1 forEvent:(id)arg2;
- (bool)_affectedByGesture:(id)arg1;
- (id)_allActiveTouches;
- (bool)_analyticsIsGestureHandled;
- (void)_appendSubclassDescription:(id)arg1;
- (id)_beganObservable;
- (id)_briefDescription;
- (long long)_buttonMask;
- (bool)_canBeCancelledByAffectedViews;
- (bool)_canExcludeOtherExcludables;
- (bool)_canExcludeWithActiveRequirements;
- (void)_cancelRecognition;
- (struct CGPoint { double x1; double x2; })_centroidOfTouches:(id)arg1 excludingEnded:(bool)arg2;
- (void)_componentsBegan:(id)arg1 withEvent:(id)arg2;
- (void)_componentsCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_componentsChanged:(id)arg1 withEvent:(id)arg2;
- (void)_componentsEnded:(id)arg1 withEvent:(id)arg2;
- (bool)_conformsToHoverEventRespondable;
- (void)_connectInterfaceBuilderEventConnection:(id)arg1;
- (struct CGPoint { double x1; double x2; })_convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromSceneReferenceCoordinatesToView:(id)arg2;
- (struct CGPoint { double x1; double x2; })_convertPoint:(struct CGPoint { double x1; double x2; })arg1 toSceneReferenceCoordinatesFromView:(id)arg2;
- (long long)_currentForceLevel;
- (long long)_defaultAllowedMouseButtons;
- (id)_defaultAllowedPressTypes;
- (id)_defaultAllowedTouchTypes;
- (id)_delayedTouches;
- (bool)_delegateShouldReceiveEvent:(id)arg1;
- (long long)_depthFirstGestureOwnerCompare:(id)arg1;
- (double)_distanceBetweenTouches:(id)arg1;
- (void)_exclude;
- (long long)_exclusiveDirectionalPressAxis;
- (id)_failureDependents;
- (id)_failureRequirements;
- (id)_forceLevelClassifier;
- (void)_forceLevelClassifier:(id)arg1 currentForceLevelDidChange:(long long)arg2;
- (unsigned long long)_forcePressCount;
- (bool)_hasUnmetFailureRequirements;
- (bool)_inForceCapableEnvironment;
- (unsigned long long)_inputPrecision;
- (bool)_isActive;
- (bool)_isDirty;
- (bool)_isEventObserving;
- (bool)_isExcludedByExcludable:(id)arg1;
- (bool)_isGestureType:(long long)arg1;
- (bool)_isRecognized;
- (bool)_isTouchGestureRecognizer;
- (bool)_keepTouchesOnContinuation;
- (long long)_modifierFlags;
- (bool)_needsDynamicDependentRequirementForGestureRecognizer:(id)arg1;
- (bool)_needsDynamicFailureRequirementForGestureRecognizer:(id)arg1;
- (id)_pairedGestureIdentifiers;
- (id)_pairedGestureIdentifiersAndCreate:(bool)arg1;
- (bool)_paused;
- (void)_pressWasCancelled:(id)arg1;
- (long long)_recognitionEvent;
- (void)_removeActiveEvent:(id)arg1;
- (void)_removeForceTarget:(id)arg1 action:(SEL)arg2;
- (void)_removeTouch:(id)arg1 forEvent:(id)arg2;
- (void)_removeTouch:(id)arg1 forEvent:(id)arg2 byCancellingTouches:(bool)arg3;
- (void)_requiredGestureRecognizerCompletedOrWasUnrelated:(id)arg1;
- (bool)_requiresGestureRecognizerToFail:(id)arg1;
- (bool)_requiresSystemGesturesToFail;
- (void)_resetGestureRecognizer;
- (bool)_sendUpdateOnEventChange;
- (void)_setAcceptsFailureRequiments:(bool)arg1;
- (void)_setAnalyticsGestureHandled:(bool)arg1;
- (void)_setCanBeCancelledByAffectedViews:(bool)arg1;
- (void)_setCanExcludeWithActiveRequirements:(bool)arg1;
- (void)_setDirty;
- (void)_setEventObserving:(bool)arg1;
- (void)_setForceLevelClassifier:(id)arg1;
- (void)_setKeepTouchesOnContinuation:(bool)arg1;
- (void)_setRecognitionEvent:(long long)arg1;
- (void)_setRequiresSystemGesturesToFail:(bool)arg1;
- (void)_setSendUpdateOnEventChange:(bool)arg1;
- (void)_setWantsDragEvents:(bool)arg1;
- (bool)_shouldBegin;
- (bool)_shouldDelayUntilForceLevelRequirementIsMet;
- (bool)_shouldReceiveEvent:(id)arg1;
- (bool)_shouldReceiveHoverTouch:(id)arg1 forEvent:(id)arg2 gestureOwner:(id)arg3;
- (bool)_shouldReceivePress:(id)arg1;
- (bool)_shouldReceivePress:(id)arg1 forPressesEvent:(id)arg2;
- (bool)_shouldReceiveTouch:(id)arg1 forEvent:(id)arg2 recognizerView:(id)arg3;
- (bool)_shouldReceiveTouch:(id)arg1 withEvent:(id)arg2;
- (id)_touchForceObservable;
- (bool)_touchTypeIsAllowed:(id)arg1;
- (void)_touchWasCancelled:(id)arg1;
- (void)_updateGestureForActiveEvents;
- (bool)_wantsDragEvents;
- (bool)_wantsHoverEventsWhilePointerIsLocked;
- (bool)_wantsPartialTouchSequences;
- (void)_willBeginAfterSatisfyingFailureRequirements;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (void)addTouchesFromGestureRecognizer:(id)arg1;
- (id)allowedPressTypes;
- (id)allowedTouchTypes;
- (long long)buttonMask;
- (bool)canBePreventedByGestureRecognizer:(id)arg1;
- (bool)canPreventGestureRecognizer:(id)arg1;
- (bool)cancelsTouchesInView;
- (long long)currentPreviewForceState;
- (void)dealloc;
- (bool)delaysTouchesBegan;
- (bool)delaysTouchesEnded;
- (id)delegate;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)gestureEnvironment;
- (void)ignorePress:(id)arg1 forEvent:(id)arg2;
- (void)ignoreTouch:(id)arg1 forEvent:(id)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (bool)isEnabled;
- (double)lastTouchTimestamp;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (struct CGPoint { double x1; double x2; })locationOfTouch:(unsigned long long)arg1 inView:(id)arg2;
- (long long)modifierFlags;
- (id)name;
- (unsigned long long)numberOfTouches;
- (id)owner;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)pressesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)pressesChanged:(id)arg1 withEvent:(id)arg2;
- (void)pressesEnded:(id)arg1 withEvent:(id)arg2;
- (void)removeFailureRequirement:(id)arg1;
- (void)removeTarget:(id)arg1 action:(SEL)arg2;
- (void)requireGestureRecognizerToFail:(id)arg1;
- (long long)requiredPreviewForceState;
- (bool)requiresExclusiveTouchType;
- (void)reset;
- (void)setAllowedPressTypes:(id)arg1;
- (void)setAllowedTouchTypes:(id)arg1;
- (void)setCancelsTouchesInView:(bool)arg1;
- (void)setDelaysTouchesBegan:(bool)arg1;
- (void)setDelaysTouchesEnded:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnabled:(bool)arg1;
- (void)setGestureEnvironment:(id)arg1;
- (void)setInputPrecision:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (void)setOwner:(id)arg1;
- (void)setRequiredPreviewForceState:(long long)arg1;
- (void)setRequiresExclusiveTouchType:(bool)arg1;
- (void)setState:(long long)arg1;
- (void)setView:(id)arg1;
- (bool)shouldBeRequiredToFailByGestureRecognizer:(id)arg1;
- (bool)shouldReceiveEvent:(id)arg1;
- (bool)shouldRequireFailureOfGestureRecognizer:(id)arg1;
- (long long)state;
- (id)stringValue;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesEstimatedPropertiesUpdated:(id)arg1;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)transferTouchesFromGestureRecognizer:(id)arg1;
- (id)view;

// Image: /System/Library/Frameworks/PencilKit.framework/PencilKit

+ (bool)PK_isPencilTextInputSystemGestureRecognizer:(id)arg1;

// Image: /System/Library/Frameworks/WebKit.framework/WebKit

- (void)_wk_cancel;
- (bool)_wk_isTapAndAHalf;

// Image: /System/Library/PrivateFrameworks/AnnotationKit.framework/AnnotationKit

- (struct CGPoint { double x1; double x2; })akLocationInWindow;
- (unsigned long long)akNumberOfTouches;

// Image: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI

- (struct CGPoint { double x1; double x2; })hu_locationInGlobalCoordinateSpace;

// Image: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore

- (void)px_cancel;
- (bool)px_isPanGestureRecognizerOfScrollView:(id*)arg1;
- (struct CGPoint { double x1; double x2; })px_locationInCoordinateSpace:(id)arg1;

// Image: /System/Library/PrivateFrameworks/PhotosUIPrivate.framework/PhotosUIPrivate

- (void)pu_cancel;

// Image: /System/Library/PrivateFrameworks/Silex.framework/Silex

- (void)cancel;

// Image: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusFoundation.framework/OpusFoundation

- (void)cancel;

// Image: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard

- (id)sb_briefDescription;
- (void)sb_cancel;
- (bool)sb_isInstalledAsSystemGesture;
- (void)sb_setInstalledAsSystemGesture:(bool)arg1;
- (id)sb_stringForState;

// Image: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation

- (void)sbf_setStylusTouchesAllowed:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading

- (struct CGPoint { double x1; double x2; })boundsLocationForICC:(id)arg1;
- (id)cachedGestureTarget;
- (id)gestureDelegate;
- (id)gestureKind;
- (int)gestureState;
- (id)initWithGestureDispatcher:(id)arg1 gestureKind:(id)arg2;
- (bool)isDone;
- (struct CGPoint { double x1; double x2; })naturalLocationForRep:(id)arg1;
- (void)setCachedGestureTarget:(id)arg1;
- (void)setGestureDelegate:(id)arg1;
- (void)setGestureKind:(id)arg1;
- (void)setTargetRep:(id)arg1;
- (id)targetRep;
- (struct CGPoint { double x1; double x2; })unscaledLocationForICC:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML

- (struct CGPoint { double x1; double x2; })location;
- (void)tmlSignalAttach:(id)arg1;
- (void)tmlSignalDetach:(id)arg1;

@end

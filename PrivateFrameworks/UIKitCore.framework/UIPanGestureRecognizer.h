
@interface UIPanGestureRecognizer : UIGestureRecognizer <_UIScrollEventRespondable> {
    double  _allowableSeparation;
    double  _allowableTouchTimeSeparation;
    long long  _allowedScrollTypesMask;
    unsigned int  _canPanHorizontally;
    unsigned int  _canPanVertically;
    unsigned int  _delegateAllowsPanHorizontally;
    unsigned int  _delegateAllowsPanVertically;
    unsigned int  _delegateImplementsShouldTryToBeginHorizontally;
    unsigned int  _delegateImplementsShouldTryToBeginVertically;
    struct CGPoint { 
        double x; 
        double y; 
    }  _digitizerLocation;
    unsigned int  _failsPastHysteresisWithoutMinTouches;
    unsigned int  _failsPastMaxTouches;
    struct CGPoint { 
        double x; 
        double y; 
    }  _firstSceneReferenceLocation;
    double  _hysteresis;
    bool  _iOSMacIgnoreScrollDirectionUserPreference;
    bool  _iOSMacScrollingEnabled;
    bool  _iOSMacUseNonacceleratedDelta;
    unsigned int  _ignoresStationaryTouches;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastSceneReferenceLocation;
    unsigned long long  _lastTouchCount;
    double  _lastTouchTime;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastUnadjustedSceneReferenceLocation;
    unsigned long long  _maximumNumberOfTouches;
    unsigned long long  _minimumNumberOfTouches;
    NSMutableArray * _movingTouches;
    unsigned int  _multitouchTimerOn;
    UIPanGestureVelocitySample * _previousVelocitySample;
    unsigned int  _queriedDelegateAllowsPanHorizontally;
    unsigned int  _queriedDelegateAllowsPanVertically;
    unsigned int  _requiresImmediateMultipleTouches;
    unsigned int  _sawNonzeroStifledDeltaX;
    unsigned int  _sawNonzeroStifledDeltaY;
    NSMutableArray * _touches;
    UIPanGestureVelocitySample * _velocitySample;
}

@property (getter=_allowedScrollTypes, setter=_setAllowedScrollTypes:, nonatomic, copy) NSArray *allowedScrollTypes;
@property (nonatomic) long long allowedScrollTypesMask;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } direction;
@property (nonatomic) bool failsPastMaxTouches;
@property (readonly) unsigned long long hash;
@property (nonatomic) double hysteresis;
@property (getter=_iOSMacIgnoreScrollDirectionUserPreference, setter=_setiOSMacIgnoreScrollDirectionUserPreference:, nonatomic) bool iOSMacIgnoreScrollDirectionUserPreference;
@property (getter=_iOSMacScrollingEnabled, setter=_setiOSMacScrollingEnabled:, nonatomic) bool iOSMacScrollingEnabled;
@property (getter=_iOSMacUseNonacceleratedDelta, setter=_setiOSMacUseNonacceleratedDelta:, nonatomic) bool iOSMacUseNonacceleratedDelta;
@property (getter=_ignoresStationaryTouches, setter=_setIgnoresStationaryTouches:, nonatomic) bool ignoresStationaryTouches;
@property (getter=_lastTouchCount, nonatomic, readonly) long long lastTouchCount;
@property (nonatomic) unsigned long long maximumNumberOfTouches;
@property (nonatomic) unsigned long long minimumNumberOfTouches;
@property (getter=_scrollDeviceCategory, nonatomic, readonly) unsigned long long scrollDeviceCategory;
@property (nonatomic) bool smu_requiresSystemGesturesToFail;
@property (readonly) Class superclass;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } translation;
@property (nonatomic, readonly) struct CGPoint { double x1; double x2; } velocity;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

+ (double)_defaultHysteresis;
+ (void)_setPanGestureRecognizersEnabled:(bool)arg1;
+ (bool)_shouldDefaultToTouches;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_activeTouches;
- (struct CGPoint { double x1; double x2; })_adjustSceneReferenceLocation:(struct CGPoint { double x1; double x2; })arg1;
- (double)_allowableSeparation;
- (double)_allowableTouchTimeSeparation;
- (id)_allowedScrollTypes;
- (long long)_allowedScrollTypesMask;
- (bool)_canPanHorizontally;
- (bool)_canPanVertically;
- (void)_centroidMovedTo:(struct CGPoint { double x1; double x2; })arg1 atTime:(double)arg2 affectingTranslation:(bool)arg3;
- (struct CGPoint { double x1; double x2; })_convertPoint:(struct CGPoint { double x1; double x2; })arg1 fromSceneReferenceCoordinatesToView:(id)arg2;
- (struct CGPoint { double x1; double x2; })_convertPoint:(struct CGPoint { double x1; double x2; })arg1 toSceneReferenceCoordinatesFromView:(id)arg2;
- (struct CGPoint { double x1; double x2; })_convertVelocitySample:(id)arg1 fromSceneReferenceCoordinatesToView:(id)arg2;
- (struct CGPoint { double x1; double x2; })_digitizerLocation;
- (bool)_failsPastHysteresisWithoutMinTouches;
- (void)_handleEndedTouches:(id)arg1 withFinalStateAdjustments:(id /* block */)arg2;
- (double)_hysteresis;
- (bool)_iOSMacIgnoreScrollDirectionUserPreference;
- (bool)_iOSMacScrollingEnabled;
- (bool)_iOSMacUseNonacceleratedDelta;
- (void)_ignoreTouchForTouchIdentifier:(unsigned int)arg1;
- (void)_ignoreTouches:(id)arg1 forEvent:(id)arg2;
- (bool)_ignoresStationaryTouches;
- (bool)_isGestureType:(long long)arg1;
- (long long)_lastTouchCount;
- (struct UIOffset { double x1; double x2; })_offsetInViewFromSceneReferenceLocation:(struct CGPoint { double x1; double x2; })arg1 toSceneReferenceLocation:(struct CGPoint { double x1; double x2; })arg2;
- (void)_processScrollPhaseChanged:(id)arg1;
- (void)_processTouchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)_removeHysteresisFromTranslation;
- (bool)_requiresImmediateMultipleTouches;
- (void)_resetGestureRecognizer;
- (void)_resetVelocitySamples;
- (unsigned long long)_scrollDeviceCategory;
- (void)_scrollingChangedWithEvent:(id)arg1;
- (void)_setAllowableSeparation:(double)arg1;
- (void)_setAllowableTouchTimeSeparation:(double)arg1;
- (void)_setAllowedScrollTypes:(id)arg1;
- (void)_setAllowedScrollTypesMask:(long long)arg1;
- (void)_setCanPanHorizontally:(bool)arg1;
- (void)_setCanPanVertically:(bool)arg1;
- (void)_setFailsPastHysteresisWithoutMinTouches:(bool)arg1;
- (void)_setHysteresis:(double)arg1;
- (void)_setIgnoresStationaryTouches:(bool)arg1;
- (void)_setRequiresImmediateMultipleTouches:(bool)arg1;
- (void)_setiOSMacIgnoreScrollDirectionUserPreference:(bool)arg1;
- (void)_setiOSMacScrollingEnabled:(bool)arg1;
- (void)_setiOSMacUseNonacceleratedDelta:(bool)arg1;
- (struct CGPoint { double x1; double x2; })_shiftPanLocationToNewSceneReferenceLocation:(struct CGPoint { double x1; double x2; })arg1 lockingToAxis:(unsigned long long)arg2;
- (bool)_shouldBeginHorizontally:(bool)arg1 vertically:(bool)arg2 withEvent:(id)arg3;
- (bool)_shouldTryToBeginWithEvent:(id)arg1;
- (bool)_touchesExceedAllowableSeparation;
- (void)_touchesListChangedFrom:(id)arg1 to:(id)arg2;
- (double)_translationDistanceInSceneInSelfAxis:(struct CGPoint { double x1; double x2; })arg1;
- (void)_updateDigitizerLocationWithEvent:(id)arg1;
- (bool)_updateMovingTouchesArraySavingOldArray:(id*)arg1;
- (void)_willBeginAfterSatisfyingFailureRequirements;
- (bool)_willScrollX;
- (bool)_willScrollY;
- (long long)allowedScrollTypesMask;
- (void)clearMultitouchTimer;
- (void)encodeWithCoder:(id)arg1;
- (bool)failsPastMaxTouches;
- (id)initWithCoder:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (bool)isIOSMacScrollingEnabled;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (struct CGPoint { double x1; double x2; })locationOfTouch:(unsigned long long)arg1 inView:(id)arg2;
- (unsigned long long)maximumNumberOfTouches;
- (unsigned long long)minimumNumberOfTouches;
- (void)multitouchExpired:(id)arg1;
- (unsigned long long)numberOfTouches;
- (void)pressesBegan:(id)arg1 withEvent:(id)arg2;
- (void)setAllowedScrollTypesMask:(long long)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFailsPastMaxTouches:(bool)arg1;
- (void)setMaximumNumberOfTouches:(unsigned long long)arg1;
- (void)setMinimumNumberOfTouches:(unsigned long long)arg1;
- (void)setTranslation:(struct CGPoint { double x1; double x2; })arg1 inView:(id)arg2;
- (bool)shouldReceiveEvent:(id)arg1;
- (void)startMultitouchTimer:(double)arg1;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (struct CGPoint { double x1; double x2; })translationInView:(id)arg1;
- (struct CGPoint { double x1; double x2; })velocityInView:(id)arg1;

// Image: /System/Library/PrivateFrameworks/SeymourUI.framework/SeymourUI

- (double)hysteresis;
- (void)setHysteresis:(double)arg1;
- (void)setSmu_requiresSystemGesturesToFail:(bool)arg1;
- (bool)smu_requiresSystemGesturesToFail;

// Image: /System/Library/PrivateFrameworks/TSReading.framework/TSReading

- (struct CGPoint { double x1; double x2; })direction;

// Image: /System/Library/PrivateFrameworks/TouchML.framework/TouchML

- (struct CGPoint { double x1; double x2; })translation;
- (struct CGPoint { double x1; double x2; })velocity;

@end

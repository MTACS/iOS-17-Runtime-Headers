
@interface UIHoverGestureRecognizer : UIGestureRecognizer {
    UIHoverEvent * _currentHoverEvent;
    UITouch * _currentTouch;
    bool  _pausesWhilePanning;
    long long  _previousTrackpadFingerDownCount;
    long long  _trackpadFingerDownCount;
}

@property (nonatomic, readonly) double _altitudeAngle;
@property (nonatomic, readonly) double _hoverHeight;
@property (nonatomic, readonly) double _hoverTouchTimestamp;
@property (nonatomic, readonly) double _maximumHoverHeight;
@property (nonatomic, readonly) double _zOffset;
@property (nonatomic, readonly) double altitudeAngle;
@property (getter=_pausesWhilePanning, setter=_setPausesWhilePanning:, nonatomic) bool pausesWhilePanning;
@property (getter=_previousTrackpadFingerDownCount, nonatomic, readonly) long long previousTrackpadFingerDownCount;
@property (getter=_trackpadFingerDownCount, nonatomic, readonly) long long trackpadFingerDownCount;
@property (nonatomic, readonly) double zOffset;

// Image: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore

- (void).cxx_destruct;
- (bool)_affectedByGesture:(id)arg1;
- (double)_altitudeAngle;
- (double)_azimuthAngleInView:(id)arg1;
- (struct CGVector { double x1; double x2; })_azimuthUnitVectorInView:(id)arg1;
- (void)_hoverCancelled:(id)arg1 withEvent:(id)arg2;
- (void)_hoverEntered:(id)arg1 withEvent:(id)arg2;
- (void)_hoverExited:(id)arg1 withEvent:(id)arg2;
- (double)_hoverHeight;
- (void)_hoverMoved:(id)arg1 withEvent:(id)arg2;
- (double)_hoverTouchTimestamp;
- (struct CAPoint3D { double x1; double x2; double x3; })_location3DInView:(id)arg1;
- (double)_maximumHoverHeight;
- (bool)_paused;
- (bool)_pausesWhilePanning;
- (struct CGPoint { double x1; double x2; })_preciseLocationInView:(id)arg1;
- (long long)_previousTrackpadFingerDownCount;
- (void)_resetInternalState;
- (void)_setPausesWhilePanning:(bool)arg1;
- (bool)_shouldReceiveEvent:(id)arg1;
- (bool)_shouldReceivePress:(id)arg1;
- (bool)_shouldReceiveTouch:(id)arg1 withEvent:(id)arg2;
- (long long)_trackpadFingerDownCount;
- (bool)_wantsHoverEventsWhilePointerIsLocked;
- (double)_zOffset;
- (double)altitudeAngle;
- (double)azimuthAngleInView:(id)arg1;
- (struct CGVector { double x1; double x2; })azimuthUnitVectorInView:(id)arg1;
- (bool)canBePreventedByGestureRecognizer:(id)arg1;
- (bool)canPreventGestureRecognizer:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (struct CGPoint { double x1; double x2; })locationInView:(id)arg1;
- (void)reset;
- (void)setAllowedTouchTypes:(id)arg1;
- (void)setRequiresExclusiveTouchType:(bool)arg1;
- (double)zOffset;

// Image: /System/Library/PrivateFrameworks/MapsUI.framework/MapsUI

- (bool)_mapsui_isHovering;

@end

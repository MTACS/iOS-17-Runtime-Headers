
@interface PKHoverController : NSObject <PKInputPointAltitudeAndAzimuthEdgeFilterDelegate, PKPencilObserverGestureRecognizerDelegate> {
    bool  _activeHoverHold;
    bool  _activeInputPoint;
    NSArray * _allInputPointFilters;
    PKInputPointAltitudeAndAzimuthBucketingFilter * _altitudeAndAzimuthBucketingFilter;
    PKInputPointAltitudeAndAzimuthEdgeFilter * _altitudeAndAzimuthEdgeFilter;
    PKInputPointAltitudeAndAzimuthNoiseFilter * _altitudeAndAzimuthNoiseFilter;
    PKInputPointAltitudeAndAzimuthZLimitFilter * _altitudeAndAzimuthZLimitFilter;
    struct { 
        union { 
            struct CGPoint { 
                double x; 
                double y; 
            } point; 
            struct CGPoint { 
                double x; 
                double y; 
            } location; 
        } ; 
        double force; 
        double azimuth; 
        double altitude; 
        double velocity; 
        double directionAngle; 
        double zPosition; 
        double timestamp; 
        bool predicted; 
        long long estimationUpdateIndex; 
        double length; 
        bool hasEstimatedAltitudeAndAzimuth; 
    }  _cachedLatestInputPoint;
    unsigned long long  _currentInputPointCounter;
    NSAttributedString * _currentLabel;
    <PKHoverControllerDelegate> * _delegate;
    struct { 
        unsigned int delegateSupportsDidBegin : 1; 
        unsigned int delegateSupportsDidUpdate : 1; 
        unsigned int delegateSupportsDidEnd : 1; 
        unsigned int delegateSupportsDidLift : 1; 
        unsigned int delegateSupportsHoldGestureMeanInputPointLatestInputPoint : 1; 
        unsigned int delegateSupportsHoldGestureEnded : 1; 
        unsigned int delegateSupportsIntentionalHoverWithDuration : 1; 
        unsigned int delegateSupportsShouldBeActiveAt : 1; 
    }  _delegateFlags;
    bool  _didPauseOtherControllers;
    bool  _didReceiveNewPointToPredict;
    CADisplayLink * _displayLink;
    NSTimer * _eventGeneratorTimer;
    PKInputPointExtraLatencyFilter * _extraLatencyFilter;
    UIHoverGestureRecognizer * _gestureRecognizer;
    struct { 
        unsigned int gestureSupportsAzimuth : 1; 
        unsigned int gestureSupportsAltitude : 1; 
        unsigned int gestureSupportsTimestamp : 1; 
        unsigned int gestureSupportsZOffset : 1; 
    }  _gestureRecognizerFlags;
    bool  _hasSeenAnyHoverEvent;
    bool  _hasSeenAnyHoverEventWithAltitude;
    UIView * _hoverLabelView;
    struct vector<PKInputPoint, std::allocator<PKInputPoint>> { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<PKInputPoint *, std::allocator<PKInputPoint>> { 
            struct { /* ? */ } *__value_; 
        } __end_cap_; 
    }  _inputPoints;
    double  _intentionalHoverMaxZValue;
    double  _intentionalHoverMinZValue;
    double  _intentionalHoverStartTimestamp;
    bool  _isPaused;
    struct CGPoint { 
        double x; 
        double y; 
    }  _latestHoldLocation;
    double  _latestHoldTimestamp;
    double  _latestHoldZPosition;
    double  _latestInputPointSentTimestamp;
    double  _latestInputPointTimestamp;
    double  _maximumTimeIntervalBetweenEvents;
    PKInputPointPredictionFilter * _predictionFilter;
    PKInputPointReduceFramerateFilter * _reduceFramerateFilter;
    bool  _shouldGenerate120HzEvents;
    bool  _shouldLogHoverEvents;
    bool  _shouldShowHoverDebugLayer;
    double  _timestampForLatestGestureUpdate;
    UIView * _view;
    bool  _waitingForHoverHold;
    double  _waitingForHoverHoldTimestamp;
    PKInputPointWeightedAverageFilter * _weightedAverageFilter;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_endIntentionalHoverTracking;
- (void)_handleHoverInputPoint:(struct { union { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; bool x9; long long x10; double x11; bool x12; })arg1;
- (void)_hoverGesture:(id)arg1;
- (void)_pause:(id)arg1;
- (void)_resume:(id)arg1;
- (void)_sendDidUpdate:(struct { union { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; bool x9; long long x10; double x11; bool x12; })arg1;
- (void)_sendDidUpdateNow:(struct { union { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; bool x9; long long x10; double x11; bool x12; })arg1;
- (void)_setupHoverGestureRecognizerInView:(id)arg1;
- (void)_setupPredictorForNewPoint:(bool)arg1;
- (void)_trackIntentionalHover:(struct { union { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; bool x9; long long x10; double x11; bool x12; })arg1;
- (void)_triggerHoldGestureIfNecessary;
- (void)_updateInputPointFilters;
- (void)checkDidLiftAfterGestureEnd;
- (struct { union { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; bool x9; long long x10; double x11; bool x12; })currentInputPoint;
- (double)currentMovementSpeed;
- (bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (void)hideLabel;
- (double)inputPointFilter:(id)arg1 distanceToEdge:(struct { union { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; bool x9; long long x10; double x11; bool x12; })arg2;
- (void)logInputPoint:(struct { union { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; bool x9; long long x10; double x11; bool x12; })arg1;
- (void)updateCurrentInputPointWithInputPoint:(struct { union { struct CGPoint { double x_1_2_1; double x_1_2_2; } x_1_1_1; struct CGPoint { double x_2_2_1; double x_2_2_2; } x_1_1_2; } x1; double x2; double x3; double x4; double x5; double x6; double x7; double x8; bool x9; long long x10; double x11; bool x12; })arg1;
- (void)vsync:(double)arg1;

@end

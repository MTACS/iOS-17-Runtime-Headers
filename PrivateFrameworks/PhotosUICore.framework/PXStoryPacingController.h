
@interface PXStoryPacingController : PXStoryController <PXStoryDiagnosticHUDContentProvider, PXStoryMutablePacingController, PXStoryPacingTimeSourceDelegate, PXTapToRadarDiagnosticProvider> {
    bool  _canChangePlaybackTime;
    <PXStoryPacingCueSource> * _cueSource;
    struct { 
        long long segmentIdentifier; 
        struct { 
            struct { 
                long long value; 
                int timescale; 
                unsigned int flags; 
                long long epoch; 
            } start; 
            struct { 
                long long value; 
                int timescale; 
                unsigned int flags; 
                long long epoch; 
            } duration; 
        } allowedTimeRange; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } originalDuration; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } adjustedDuration; 
        struct { 
            struct { 
                long long value; 
                int timescale; 
                unsigned int flags; 
                long long epoch; 
            } time; 
            long long rank; 
        } cue; 
        long long cueVersion; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } cueTime; 
        double startTime; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } startTimeIntoSegment; 
        long long timelineVersion; 
        BOOL transitionKind; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } transitionCorrection; 
    }  _currentPacingDecision;
    bool  _isActive;
    PXStoryModel * _model;
    _PXStoryPacingControllerChangeOrigin * _modelChangeOrigin;
    _PXStoryPacingControllerDecisionHistory * _pacingDecisionHistory;
    NSString * _reasonPreventingPlaybackTimeChange;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _targetEndTime;
    NSString * _targetEndUpdateReason;
    <PXStoryPacingTimeSource> * _timeSource;
    long long  _timelineVersion;
}

@property (nonatomic) bool canChangePlaybackTime;
@property (nonatomic, readonly) <PXStoryPacingCueSource> *cueSource;
@property (nonatomic, readonly) struct { long long x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; } x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; struct { long long x_4_1_1; int x_4_1_2; unsigned int x_4_1_3; long long x_4_1_4; } x4; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_5_1_1; long long x_5_1_2; } x5; long long x6; struct { long long x_7_1_1; int x_7_1_2; unsigned int x_7_1_3; long long x_7_1_4; } x7; double x8; struct { long long x_9_1_1; int x_9_1_2; unsigned int x_9_1_3; long long x_9_1_4; } x9; long long x10; BOOL x11; struct { long long x_12_1_1; int x_12_1_2; unsigned int x_12_1_3; long long x_12_1_4; } x12; } currentPacingDecision;
@property (nonatomic, readonly) bool isActive;
@property (nonatomic, readonly) PXStoryModel *model;
@property (nonatomic, readonly) _PXStoryPacingControllerChangeOrigin *modelChangeOrigin;
@property (nonatomic, retain) _PXStoryPacingControllerDecisionHistory *pacingDecisionHistory;
@property (nonatomic, retain) NSString *reasonPreventingPlaybackTimeChange;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } targetEndTime;
@property (nonatomic, retain) NSString *targetEndUpdateReason;
@property (nonatomic, readonly) <PXStoryPacingTimeSource> *timeSource;
@property (nonatomic) long long timelineVersion;

- (void).cxx_destruct;
- (void)_handleTimelineDidChange;
- (void)_invalidateCanChangePlaybackTime;
- (void)_invalidateCurrentPacingDecision;
- (void)_invalidateTargetEndTimeWithReason:(id)arg1;
- (void)_updateCanChangePlaybackTime;
- (void)_updateTargetEndTime;
- (bool)canChangePlaybackTime;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)arg1;
- (void)configureUpdater:(id)arg1;
- (id)cueSource;
- (struct { long long x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; } x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; struct { long long x_4_1_1; int x_4_1_2; unsigned int x_4_1_3; long long x_4_1_4; } x4; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_5_1_1; long long x_5_1_2; } x5; long long x6; struct { long long x_7_1_1; int x_7_1_2; unsigned int x_7_1_3; long long x_7_1_4; } x7; double x8; struct { long long x_9_1_1; int x_9_1_2; unsigned int x_9_1_3; long long x_9_1_4; } x9; long long x10; BOOL x11; struct { long long x_12_1_1; int x_12_1_2; unsigned int x_12_1_3; long long x_12_1_4; } x12; })currentPacingDecision;
- (id)diagnosticErrorsByComponentForHUDType:(long long)arg1;
- (id)diagnosticTextForHUDType:(long long)arg1;
- (id)diagnosticTextForHUDType:(long long)arg1 displaySize:(struct CGSize { double x1; double x2; })arg2;
- (void)handleModelChange:(unsigned long long)arg1;
- (id)initWithModel:(id)arg1 timeSource:(id)arg2 cueSource:(id)arg3;
- (id)initWithObservableModel:(id)arg1;
- (bool)isActive;
- (id)model;
- (id)modelChangeOrigin;
- (id)pacingDecisionHistory;
- (id)reasonPreventingPlaybackTimeChange;
- (void)setCanChangePlaybackTime:(bool)arg1;
- (void)setCurrentPacingDecision:(struct { long long x1; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_2_1_1; struct { long long x_2_2_1; int x_2_2_2; unsigned int x_2_2_3; long long x_2_2_4; } x_2_1_2; } x2; struct { long long x_3_1_1; int x_3_1_2; unsigned int x_3_1_3; long long x_3_1_4; } x3; struct { long long x_4_1_1; int x_4_1_2; unsigned int x_4_1_3; long long x_4_1_4; } x4; struct { struct { long long x_1_2_1; int x_1_2_2; unsigned int x_1_2_3; long long x_1_2_4; } x_5_1_1; long long x_5_1_2; } x5; long long x6; struct { long long x_7_1_1; int x_7_1_2; unsigned int x_7_1_3; long long x_7_1_4; } x7; double x8; struct { long long x_9_1_1; int x_9_1_2; unsigned int x_9_1_3; long long x_9_1_4; } x9; long long x10; BOOL x11; struct { long long x_12_1_1; int x_12_1_2; unsigned int x_12_1_3; long long x_12_1_4; } x12; })arg1;
- (void)setIsActive:(bool)arg1;
- (void)setPacingDecisionHistory:(id)arg1;
- (void)setReasonPreventingPlaybackTimeChange:(id)arg1;
- (void)setTargetEndTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setTargetEndUpdateReason:(id)arg1;
- (void)setTimelineVersion:(long long)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })targetEndTime;
- (id)targetEndUpdateReason;
- (id)timeSource;
- (void)timeSource:(id)arg1 didIncrementByTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg2;
- (long long)timelineVersion;

@end


@interface PVMotionEffectTimelineComponent : PVMotionEffectComponent <PVEffectTimeline> {
    struct OZChannelBool { int (**x1)(); struct OZFactory {} *x2; int (**x3)(); unsigned int x4; struct PCString { struct __CFString {} *x_5_1_1; } x5; struct PCString {} *x6; struct OZChannelFolder {} *x7; unsigned long long x8; unsigned long long x9; void *x10; struct __CFString {} *x11; struct __CFString {} *x12; struct __CFString {} *x13; struct OZChannelTimeConverter {} *x14; struct OZChannelImpl {} *x15; struct OZChannelImpl {} *x16; struct OZChannelInfo {} *x17; struct OZChannelInfo {} *x18; struct OZCurve {} *x19; } * _buildInEnableChan;
    struct OZChannelBool { int (**x1)(); struct OZFactory {} *x2; int (**x3)(); unsigned int x4; struct PCString { struct __CFString {} *x_5_1_1; } x5; struct PCString {} *x6; struct OZChannelFolder {} *x7; unsigned long long x8; unsigned long long x9; void *x10; struct __CFString {} *x11; struct __CFString {} *x12; struct __CFString {} *x13; struct OZChannelTimeConverter {} *x14; struct OZChannelImpl {} *x15; struct OZChannelImpl {} *x16; struct OZChannelInfo {} *x17; struct OZChannelInfo {} *x18; struct OZCurve {} *x19; } * _buildOutEnableChan;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _frameDuration;
    double  _frameRate;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _loopTime;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _loopTimeOverride;
    bool  _loopTimeOverrideEnabled;
    bool  _needsToUpdateSceneDuration;
    unsigned int  _numFrames;
    PVTimelineMarker * _posterFrameMarker;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _renderStartOffset;
    struct METimeRemap { 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } _introDuration; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } _outroDuration; 
        struct { 
            long long value; 
            int timescale; 
            unsigned int flags; 
            long long epoch; 
        } _scaleableDuration; 
        bool _isIntroOptional; 
        bool _isOutroOptional; 
        bool _isStartTimeAligned; 
        bool _isEndTimeAligned; 
        bool _isLoop; 
        bool _forceDisableLoop; 
        bool _forceDisableBuildAnimation; 
        struct OZChannelBool {} *_pBuildInEnableChan; 
        struct OZChannelBool {} *_pBuildOutEnableChan; 
    }  _timeRemap;
}

@property (nonatomic) bool forceDisableBuildAnimation;
@property (nonatomic) bool forceDisableLoop;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } loopTimeOverride;
@property (nonatomic) bool loopTimeOverrideEnabled;
@property (nonatomic) bool useLocalLoopTime;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)applyProperties_NoLock:(id)arg1 defaultProperties:(id)arg2 documentInfo:(const void*)arg3;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })componentTimeFromTimelineTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })componentTimeFromTimelineTime_NoLock:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 documentInfo:(const void*)arg2;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })componentTimeFromTimelineTime_NoLock:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 editRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2 documentInfo:(const void*)arg3;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })componentTimeRangeFromTimelineTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })componentTimeRangeFromTimelineTimeRange_NoLock:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 documentInfo:(const void*)arg2;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })componentTimeRangeFromTimelineTimeRange_NoLock:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 editRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2 documentInfo:(const void*)arg3;
- (void)computeIntroOutroPoints_NoLock:(const void*)arg1;
- (void)dealloc;
- (void)effect:(id)arg1 updateProperties:(id)arg2 allProperties:(id)arg3;
- (bool)forceDisableBuildAnimation;
- (bool)forceDisableBuildAnimation_NoLock;
- (bool)forceDisableLoop;
- (bool)forceDisableLoop_NoLock;
- (id)initWithMotionEffect:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })introDuration_NoLock;
- (bool)isForceRenderAtPosterFrameEnabled;
- (bool)isForceRenderAtPosterFrameEnabled:(id)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })loopTimeOverride;
- (bool)loopTimeOverrideEnabled;
- (bool)loopTimeOverrideEnabled_NoLock;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })loopTimeOverride_NoLock;
- (void)motionEffect:(id)arg1 didBecomeReady:(const void*)arg2 properties:(id)arg3;
- (bool)motionEffect:(id)arg1 propertiesDisableCache:(id)arg2 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 forcePosterFrame:(bool)arg4;
- (bool)motionEffect:(id)arg1 shouldInvalidateCachedRenderForProperty:(id)arg2 oldValue:(id)arg3 newValue:(id)arg4;
- (void)motionEffectDidUnload:(id)arg1;
- (id)motionEffectPropertyKeysThatInvalidateCachedRender:(id)arg1;
- (id)posterFrameMarker;
- (id)posterFrameMarker_NoLock:(const void*)arg1;
- (void)setBuildInEnabled_NoLock:(bool)arg1;
- (void)setBuildOutEnabled_NoLock:(bool)arg1;
- (void)setForceDisableBuildAnimation:(bool)arg1;
- (void)setForceDisableBuildAnimation_NoLock:(bool)arg1;
- (void)setForceDisableLoop:(bool)arg1;
- (void)setForceDisableLoop_NoLock:(bool)arg1;
- (void)setLoopTimeOverride:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setLoopTimeOverrideEnabled:(bool)arg1;
- (void)setLoopTimeOverrideEnabled_NoLock:(bool)arg1;
- (void)setLoopTimeOverride_NoLock:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setNeedsToUpdateSceneDuration_NoLock;
- (void)setRenderStartOffset_NoLock:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (void)setUseLocalLoopTime:(bool)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timelineDuration;
- (unsigned int)timelineDurationInFrames;
- (unsigned int)timelineDurationInFrames_NoLock;
- (double)timelineDurationInSeconds;
- (double)timelineDurationInSeconds_NoLock;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timelineDuration_NoLock;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timelineFrameDuration;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timelineFrameDuration_NoLock;
- (double)timelineFrameRate;
- (double)timelineFrameRate_NoLock;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timelineLastFrame;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timelineLastFrame_NoLock;
- (id)timelineMarkers;
- (id)timelineMarkersOfType:(int)arg1;
- (id)timelineMarkersOfType_NoLock:(int)arg1 documentInfo:(const void*)arg2;
- (id)timelineMarkers_NoLock:(const void*)arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timelineTimeFromComponentTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timelineTimeFromComponentTime_NoLock:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 documentInfo:(const void*)arg2;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timelineTimeFromComponentTime_NoLock:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 editRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2 documentInfo:(const void*)arg3;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timelineTimeFromComponentTime_NoLock:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 editRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2 forcePosterFrame:(bool)arg3 documentInfo:(const void*)arg4;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })timelineTimeFromComponentTime_NoLock:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forcePosterFrame:(bool)arg2 documentInfo:(const void*)arg3;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timelineTimeRangeFromComponentTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timelineTimeRangeFromComponentTimeRange_NoLock:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 documentInfo:(const void*)arg2;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })timelineTimeRangeFromComponentTimeRange_NoLock:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg1 editRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })arg2 documentInfo:(const void*)arg3;
- (void)updateSceneDuration_NoLock:(const void*)arg1;
- (bool)useLocalLoopTime;

@end

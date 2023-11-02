
@interface JFXFaceTrackingPlaybackDelegate : NSObject <PVEffectTimedPropertiesDelegate> {
    JFXARMetadataMediaReader * _arMetadataReader;
    JFXFaceTrackingPlaybackProperties * _cachedFaceTrackingProperties;
    NSObject<OS_dispatch_queue> * _cachedFaceTrackingPropertiesQueue;
    bool  _isScrubbing;
    NSObject<OS_dispatch_queue> * _mediaDataReaderUpdateQueue;
    struct CGSize { 
        double width; 
        double height; 
    }  _outputSize;
    <JFXPlayableElement> * _playableElement;
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
    }  _playbackElementPlaybackMediaRange;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _playbackElementPlaybackPresentationOffset;
    JFXSharedMediaDataReaderManager * _sharedMediaDataReaderManager;
}

@property (nonatomic, retain) JFXARMetadataMediaReader *arMetadataReader;
@property (nonatomic, retain) JFXFaceTrackingPlaybackProperties *cachedFaceTrackingProperties;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *cachedFaceTrackingPropertiesQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isScrubbing;
@property (nonatomic, readonly) NSObject<OS_dispatch_queue> *mediaDataReaderUpdateQueue;
@property (nonatomic, readonly) struct CGSize { double x1; double x2; } outputSize;
@property (nonatomic, readonly) <JFXPlayableElement> *playableElement;
@property (nonatomic, readonly) struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; } playbackElementPlaybackMediaRange;
@property (nonatomic, readonly) struct { long long x1; int x2; unsigned int x3; long long x4; } playbackElementPlaybackPresentationOffset;
@property (nonatomic, readonly) JFXSharedMediaDataReaderManager *sharedMediaDataReaderManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)JFX_arMetadataForMediaTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 foundTimeRange:(struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; }*)arg2;
- (void)JFX_cacheFaceTrackingProperties:(id)arg1;
- (id)JFX_cachedFaceTrackingPropertiesForMediaTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forDisplayingMediaAtInterfaceOrientation:(long long)arg2;
- (id)JFX_faceTrackingPlaybackPropertiesAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forDisplayingMediaAtInterfaceOrientation:(long long)arg2;
- (void)JFX_initFaceTrackingCachingProperties;
- (void)JFX_initMetadataReadingProperties;
- (void)JFX_loadMediaDataReaders;
- (void)JFX_setMediaDataReaderScrubbingMode:(bool)arg1;
- (void)JFX_unloadMediaDataReaders;
- (id)arDataAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forDisplayingMediaAtInterfaceOrientation:(long long)arg2;
- (id)arMetadataReader;
- (id)cachedFaceTrackingProperties;
- (id)cachedFaceTrackingPropertiesQueue;
- (void)effect:(id)arg1 didStopRequestingTimedProperties:(id)arg2;
- (id)effect:(id)arg1 timedPropertiesForGroup:(id)arg2 time:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 userContext:(id)arg4;
- (void)effect:(id)arg1 willStartRequestingTimedProperties:(id)arg2;
- (id)faceTrackingTransformAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 forDisplayingMediaAtInterfaceOrientation:(long long)arg2;
- (id)initWithPlayableElement:(id)arg1 sharedMediaDataReaderManager:(id)arg2 outputSize:(struct CGSize { double x1; double x2; })arg3;
- (bool)isScrubbing;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })jfx_mediaTimeFromPlaybackTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;
- (id)mediaDataReaderUpdateQueue;
- (struct CGSize { double x1; double x2; })outputSize;
- (id)playableElement;
- (struct { struct { long long x_1_1_1; int x_1_1_2; unsigned int x_1_1_3; long long x_1_1_4; } x1; struct { long long x_2_1_1; int x_2_1_2; unsigned int x_2_1_3; long long x_2_1_4; } x2; })playbackElementPlaybackMediaRange;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })playbackElementPlaybackPresentationOffset;
- (void)setArMetadataReader:(id)arg1;
- (void)setCachedFaceTrackingProperties:(id)arg1;
- (void)setIsScrubbing:(bool)arg1;
- (id)sharedMediaDataReaderManager;
- (id)supportedTimedPropertyGroupsForEffect:(id)arg1;

@end

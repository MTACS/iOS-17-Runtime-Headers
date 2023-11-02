
@interface NTKTimeOffsetManager : NSObject {
    double  _timeOffset;
}

@property (nonatomic) double timeOffset;

+ (id)sharedManager;

- (void)_handleFaceDefaultsChanged;
- (void)_handleFaceLibraryReloaded;
- (void)_loadTimeOffset;
- (void)_updateTimeOffset:(bool)arg1;
- (void)dealloc;
- (id)displayTimeForRealTime:(id)arg1;
- (id)faceDisplayTime;
- (void)forceUpdateTimeOffset;
- (id)init;
- (void)setTimeOffset:(double)arg1;
- (double)timeOffset;

@end

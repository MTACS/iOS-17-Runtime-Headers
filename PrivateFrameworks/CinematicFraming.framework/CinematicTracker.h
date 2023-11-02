
@interface CinematicTracker : NSObject {
    NSMutableArray * _allTracks;
    NSMutableDictionary * _oidToTrackMap;
    CinematicFramingSessionOptions * _options;
    unsigned long long  _trackIndexCounter;
    NSMutableArray * _tracksOidMappings;
}

@property (nonatomic, retain) CinematicFramingSessionOptions *options;
@property (nonatomic, readonly) NSArray *tracks;

- (void).cxx_destruct;
- (id)init;
- (id)options;
- (void)processDetections:(id)arg1 ofType:(long long)arg2 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)processFaceDetections:(id)arg1 bodyDetections:(id)arg2 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 inView:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg4;
- (void)removeTrackOfType:(long long)arg1 atIndex:(int)arg2 atTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3;
- (void)resetTracksFramingProperties;
- (void)setOptions:(id)arg1;
- (id)tracks;
- (void)updateBodyFacePairsAtTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

@end


@interface PXFlexMusicPathfinder : NSObject {
    NSArray * _renditions;
    FMSong * _song;
}

@property (nonatomic, readonly) FMSong *song;

- (void).cxx_destruct;
- (void)_loadRenditionsIfNeeded;
- (void)findPathFromCurrentTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1 inRendition:(id)arg2 withTargetRemainder:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg3 tolerance:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg4 result:(id /* block */)arg5;
- (id)init;
- (id)initWithSong:(id)arg1;
- (id)song;

@end

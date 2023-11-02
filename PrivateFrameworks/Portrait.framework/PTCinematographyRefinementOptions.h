
@interface PTCinematographyRefinementOptions : NSObject <NSCopying> {
    bool  _disableDetectionSmoothing;
    PTCinematographyFocusFramesOptions * _focusFramesOptions;
    PTGlobalCinematographyMetadata * _globalMetadata;
}

@property (nonatomic) bool disableDetectionSmoothing;
@property (retain) PTCinematographyFocusFramesOptions *focusFramesOptions;
@property (nonatomic, copy) PTGlobalCinematographyMetadata *globalMetadata;
@property (nonatomic) struct { long long x1; int x2; unsigned int x3; long long x4; } rackFocusPullTime;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)disableDetectionSmoothing;
- (id)focusFramesOptions;
- (id)globalMetadata;
- (id)init;
- (struct { long long x1; int x2; unsigned int x3; long long x4; })rackFocusPullTime;
- (void)setDisableDetectionSmoothing:(bool)arg1;
- (void)setFocusFramesOptions:(id)arg1;
- (void)setGlobalMetadata:(id)arg1;
- (void)setRackFocusPullTime:(struct { long long x1; int x2; unsigned int x3; long long x4; })arg1;

@end

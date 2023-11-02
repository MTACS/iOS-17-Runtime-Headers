
@interface PNWallpaperCrop : NSObject {
    double  _cropScore;
    double  _cropZoomRatio;
    bool  _passesClockOverlap;
}

@property (readonly) double cropScore;
@property (readonly) double cropZoomRatio;
@property (readonly) bool passesClockOverlap;

- (double)cropScore;
- (double)cropZoomRatio;
- (id)description;
- (id)initWithAsset:(id)arg1 orientation:(long long)arg2 classification:(unsigned long long)arg3;
- (bool)passesClockOverlap;

@end


@interface PhotosUICore.PXScrollBehavior : NSObject {
    void behavior;
}

@property (nonatomic, readonly) bool allowFlickAcrossMultiplePages;
@property (nonatomic, readonly) long long axis;
@property (nonatomic, readonly) long long decelerationRate;
@property (nonatomic, readonly) double intrinsicContentOffset;
@property (nonatomic, readonly) double pageOffset;
@property (nonatomic, readonly) bool pagingEnabled;
@property (nonatomic, readonly) double pagingOrigin;

+ (id)normalWithAxis:(long long)arg1;
+ (id)normalWithAxis:(long long)arg1 intrinsicContentOffset:(double)arg2;
+ (id)pagingWithAxis:(long long)arg1 pagingOrigin:(double)arg2 pageOffset:(double)arg3 decelerationRate:(long long)arg4;

- (struct CGPoint { double x1; double x2; })adjustedScrollTargetContentOffsetFor:(struct CGPoint { double x1; double x2; })arg1 velocity:(struct CGPoint { double x1; double x2; })arg2 currentContentOffset:(struct CGPoint { double x1; double x2; })arg3;
- (bool)allowFlickAcrossMultiplePages;
- (long long)axis;
- (long long)decelerationRate;
- (id)init;
- (double)intrinsicContentOffset;
- (double)pageOffset;
- (bool)pagingEnabled;
- (double)pagingOrigin;

@end

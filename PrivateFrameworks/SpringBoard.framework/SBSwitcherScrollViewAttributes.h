
@interface SBSwitcherScrollViewAttributes : NSObject <NSCopying, NSMutableCopying> {
    struct CGSize { 
        double width; 
        double height; 
    }  _contentSize;
    double  _decelerationRate;
    struct CGSize { 
        double width; 
        double height; 
    }  _interpageSpacingForPaging;
    bool  _interpolatesDuringSwipeToKill;
    struct CGPoint { 
        double x; 
        double y; 
    }  _pagingOrigin;
    bool  _scrollViewPagingEnabled;
}

@property (nonatomic) struct CGSize { double x1; double x2; } contentSize;
@property (nonatomic) double decelerationRate;
@property (nonatomic) struct CGSize { double x1; double x2; } interpageSpacingForPaging;
@property (nonatomic) bool interpolatesDuringSwipeToKill;
@property (nonatomic) struct CGPoint { double x1; double x2; } pagingOrigin;
@property (nonatomic) bool scrollViewPagingEnabled;

- (id)_copyWithClass:(Class)arg1;
- (struct CGSize { double x1; double x2; })contentSize;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (double)decelerationRate;
- (struct CGSize { double x1; double x2; })interpageSpacingForPaging;
- (bool)interpolatesDuringSwipeToKill;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (struct CGPoint { double x1; double x2; })pagingOrigin;
- (bool)scrollViewPagingEnabled;
- (void)setContentSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setDecelerationRate:(double)arg1;
- (void)setInterpageSpacingForPaging:(struct CGSize { double x1; double x2; })arg1;
- (void)setInterpolatesDuringSwipeToKill:(bool)arg1;
- (void)setPagingOrigin:(struct CGPoint { double x1; double x2; })arg1;
- (void)setScrollViewPagingEnabled:(bool)arg1;

@end

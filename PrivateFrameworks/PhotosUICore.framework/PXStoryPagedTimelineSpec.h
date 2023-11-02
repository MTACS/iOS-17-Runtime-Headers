
@interface PXStoryPagedTimelineSpec : NSObject {
    bool  _displayOneAssetPerPage;
    double  _keyInterpageSpacing;
    struct CGSize { 
        double width; 
        double height; 
    }  _keyPageSize;
    double  _regularInterpageSpacing;
    struct CGSize { 
        double width; 
        double height; 
    }  _regularPageSize;
}

@property (nonatomic) bool displayOneAssetPerPage;
@property (nonatomic) double keyInterpageSpacing;
@property (nonatomic) struct CGSize { double x1; double x2; } keyPageSize;
@property (nonatomic) double regularInterpageSpacing;
@property (nonatomic) struct CGSize { double x1; double x2; } regularPageSize;

- (id)description;
- (bool)displayOneAssetPerPage;
- (double)keyInterpageSpacing;
- (struct CGSize { double x1; double x2; })keyPageSize;
- (double)regularInterpageSpacing;
- (struct CGSize { double x1; double x2; })regularPageSize;
- (void)setDisplayOneAssetPerPage:(bool)arg1;
- (void)setKeyInterpageSpacing:(double)arg1;
- (void)setKeyPageSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setRegularInterpageSpacing:(double)arg1;
- (void)setRegularPageSize:(struct CGSize { double x1; double x2; })arg1;

@end

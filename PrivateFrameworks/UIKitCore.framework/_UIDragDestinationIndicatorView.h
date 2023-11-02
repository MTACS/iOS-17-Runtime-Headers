
@interface _UIDragDestinationIndicatorView : UIView {
    NSIndexPath * _currentIndexPath;
    bool  _isSourceList;
    double  _scaleFactor;
}

@property (nonatomic, retain) NSIndexPath *currentIndexPath;
@property (nonatomic) bool isSourceList;
@property (nonatomic, readonly) double scaleFactor;

- (void).cxx_destruct;
- (id)currentIndexPath;
- (void)drawRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)initWithSourceListStyle:(bool)arg1;
- (bool)isSourceList;
- (void)positionHorizontallyCenteredInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)positionOnCellFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 above:(bool)arg2;
- (void)positionVerticallyCenteredInFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)scaleFactor;
- (void)setCurrentIndexPath:(id)arg1;
- (void)setIsSourceList:(bool)arg1;

@end

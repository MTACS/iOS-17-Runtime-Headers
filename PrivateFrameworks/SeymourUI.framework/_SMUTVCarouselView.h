
@interface _SMUTVCarouselView : _TVCarouselView <SMUTVCarouselView>

@property (nonatomic) double autoscrollInterval;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic) <SMUTVCarouselViewDataSource> *dataSource;
@property (nonatomic) <SMUTVCarouselViewDelegate> *delegate;
@property (nonatomic) struct CGPoint { double x1; double x2; } focusDirection;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } frame;
@property (nonatomic, retain) UIView *headerView;
@property (nonatomic) double interitemSpacing;
@property (nonatomic) struct CGSize { double x1; double x2; } itemSize;
@property (nonatomic) double pageControlMargin;
@property (nonatomic) unsigned long long scrollMode;
@property (nonatomic) bool shouldScaleOnIdleFocus;
@property (nonatomic, readonly) double showcaseFactor;
@property (nonatomic) bool showsPageControl;
@property (nonatomic) double unitScrollDuration;
@property (nonatomic, readonly, copy) NSArray *visibleCells;

@end

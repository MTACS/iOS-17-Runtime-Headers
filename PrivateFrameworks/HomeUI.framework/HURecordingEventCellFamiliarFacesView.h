
@interface HURecordingEventCellFamiliarFacesView : UIView <HFCameraImageObserver> {
    NSArray * _imageViews;
    NSLayoutConstraint * _leftTitleConstraint;
    double  _maxWidthForNames;
    UIView * _pointerView;
    NSArray * _sortedPeople;
    UILabel * _titleLabel;
}

@property (nonatomic, readonly) NSArray *imageViews;
@property (nonatomic, retain) NSLayoutConstraint *leftTitleConstraint;
@property (nonatomic) double maxWidthForNames;
@property (nonatomic, retain) UIView *pointerView;
@property (nonatomic, retain) NSArray *sortedPeople;
@property (nonatomic, retain) UILabel *titleLabel;

+ (id)faceCropImageView;
+ (id)placeholderImage;

- (void).cxx_destruct;
- (id)faceCropImageViews;
- (id)imageViews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (id)leftTitleConstraint;
- (void)manager:(id)arg1 didFindFaceCrop:(id)arg2 forClip:(id)arg3 usingPersonName:(id)arg4;
- (void)manager:(id)arg1 failedToFindFaceCropForPersonName:(id)arg2;
- (double)maxWidthForNames;
- (id)pointerView;
- (void)resizeWithMaxWidth:(double)arg1;
- (void)setLeftTitleConstraint:(id)arg1;
- (void)setMaxWidthForNames:(double)arg1;
- (void)setPointerView:(id)arg1;
- (void)setSortedPeople:(id)arg1;
- (void)setTitleLabel:(id)arg1;
- (id)sortedPeople;
- (id)titleLabel;
- (void)updateTitleLabel;
- (void)updateWithPersonEvents:(id)arg1 forCameraClip:(id)arg2;

@end


@interface PXCMMStackBubbleView : UIView <PXAssetsDataSourceManagerObserver> {
    UIActivityIndicatorView * _activityIndicatorView;
    PXPhotoKitAssetsDataSourceManager * _dataSourceManager;
    double  _maximumHeight;
    PXPhotoKitUIMediaProvider * _mediaProvider;
    PHMomentShare * _momentShare;
    PXMessagesStackView * _stackView;
}

@property (nonatomic, retain) PXPhotoKitAssetsDataSourceManager *dataSourceManager;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) double maximumHeight;
@property (nonatomic, readonly) PXPhotoKitUIMediaProvider *mediaProvider;
@property (nonatomic, retain) PHMomentShare *momentShare;
@property (readonly) Class superclass;

+ (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

- (void).cxx_destruct;
- (void)_updateSubviews;
- (id)dataSourceManager;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (double)maximumHeight;
- (id)mediaProvider;
- (id)momentShare;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3;
- (void)setDataSourceManager:(id)arg1;
- (void)setMaximumHeight:(double)arg1;
- (void)setMomentShare:(id)arg1;
- (struct CGSize { double x1; double x2; })sizeThatFits:(struct CGSize { double x1; double x2; })arg1;

@end

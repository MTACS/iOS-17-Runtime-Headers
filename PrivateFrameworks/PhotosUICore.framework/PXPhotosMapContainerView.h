
@interface PXPhotosMapContainerView : UIView {
    MKMapView * _bodyView;
    PXMapOptionsView * _mapOptionsView;
}

@property (nonatomic, retain) MKMapView *bodyView;
@property (nonatomic, retain) PXMapOptionsView *mapOptionsView;

- (void).cxx_destruct;
- (id)bodyView;
- (void)layoutSubviews;
- (id)mapOptionsView;
- (void)setBodyView:(id)arg1;
- (void)setMapOptionsView:(id)arg1;
- (void)updateWithConfiguration:(id)arg1;

@end

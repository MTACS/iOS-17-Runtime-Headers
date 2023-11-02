
@interface SearchUIMapCardSectionView : SearchUICardSectionView <NUIContainerViewDelegate> {
    CLPlacemark * _currentPlacemark;
    TLKLabel * _footnoteDescriptorLabel;
    TLKLabel * _footnoteLabel;
    TLKStackView * _labelsStackView;
    MKMapSnapshotter * _mapSnapshotter;
    MKPinAnnotationView * _pinAnnotationView;
    TLKImageView * _snapshotView;
    UITapGestureRecognizer * _tapRecognizer;
}

@property (nonatomic, retain) CLPlacemark *currentPlacemark;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) TLKLabel *footnoteDescriptorLabel;
@property (nonatomic, retain) TLKLabel *footnoteLabel;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) TLKStackView *labelsStackView;
@property (nonatomic, retain) MKMapSnapshotter *mapSnapshotter;
@property (nonatomic, retain) MKPinAnnotationView *pinAnnotationView;
@property (nonatomic, readonly) SFMapCardSection *section;
@property (nonatomic, retain) TLKImageView *snapshotView;
@property (readonly) Class superclass;
@property (nonatomic, retain) UITapGestureRecognizer *tapRecognizer;

+ (id)_postalAddressFromPlacemark:(id)arg1;
+ (bool)fillsBackgroundWithContentForRowModel:(id)arg1;
+ (bool)supportsRecyclingForCardSection:(id)arg1;

- (void).cxx_destruct;
- (id)_clLocationFromSFLatLng:(id)arg1;
- (void)_mapButtonPressed;
- (void)_updateSnapshot;
- (void)_updateSnapshotWithSize:(struct CGSize { double x1; double x2; })arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })containerView:(id)arg1 layoutFrameForArrangedSubview:(id)arg2 withProposedFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (id)currentPlacemark;
- (void)dealloc;
- (id)footnoteDescriptorLabel;
- (id)footnoteLabel;
- (id)labelsStackView;
- (id)mapSnapshotter;
- (id)pinAnnotationView;
- (double)requestedMapHeight;
- (void)sendMapFeedbackWithTriggerEvent:(unsigned long long)arg1 placemarkData:(id)arg2;
- (void)setCurrentPlacemark:(id)arg1;
- (void)setFootnoteDescriptorLabel:(id)arg1;
- (void)setFootnoteLabel:(id)arg1;
- (void)setLabelsStackView:(id)arg1;
- (void)setMapSnapshotter:(id)arg1;
- (void)setPinAnnotationView:(id)arg1;
- (void)setSnapshotView:(id)arg1;
- (void)setTapRecognizer:(id)arg1;
- (id)setupContentView;
- (id)snapshotView;
- (id)tapRecognizer;
- (void)updateWithRowModel:(id)arg1;

@end

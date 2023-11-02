
@interface MKLookAroundSnapshotOptions : NSObject {
    MKMapSnapshotOptions * _options;
}

@property (getter=_options, setter=_setOptions:, nonatomic, retain) MKMapSnapshotOptions *options;
@property (nonatomic, copy) MKPointOfInterestFilter *pointOfInterestFilter;
@property (nonatomic) struct CGSize { double x1; double x2; } size;
@property (nonatomic, copy) UITraitCollection *traitCollection;

- (void).cxx_destruct;
- (id)_options;
- (void)_setOptions:(id)arg1;
- (id)init;
- (id)pointOfInterestFilter;
- (void)setPointOfInterestFilter:(id)arg1;
- (void)setSize:(struct CGSize { double x1; double x2; })arg1;
- (void)setTraitCollection:(id)arg1;
- (struct CGSize { double x1; double x2; })size;
- (id)traitCollection;

@end

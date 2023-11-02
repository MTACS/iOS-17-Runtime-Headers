
@interface CPSPointOfInterestClusterView : MKMarkerAnnotationView

- (void)_configure;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (void)prepareForDisplay;
- (void)prepareForReuse;
- (void)setAnnotation:(id)arg1;
- (void)setSelected:(bool)arg1 animated:(bool)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)update;

@end

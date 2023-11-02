
@interface MKPlaceBatchableCompactCollection : NSObject {
    MKMapItemIdentifier * _guideLocationIdentifier;
    MKPlaceCompactCollectionViewModel * _viewModel;
}

@property (nonatomic, readonly) MKMapItemIdentifier *guideLocationIdentifier;
@property (nonatomic, retain) MKPlaceCompactCollectionViewModel *viewModel;

- (void).cxx_destruct;
- (id)description;
- (id)guideLocationIdentifier;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithWorldwideViewModel:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setViewModel:(id)arg1;
- (id)viewModel;

@end

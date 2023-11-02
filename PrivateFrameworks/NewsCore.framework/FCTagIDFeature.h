
@interface FCTagIDFeature : FCPersonalizationFeature

- (double)featureWeightWithConfigurableValues:(id)arg1 publisherID:(id)arg2;
- (id)init;
- (id)initWithPersonalizationIdentifier:(id)arg1;
- (id)initWithTagID:(id)arg1;
- (bool)shouldBeBoosted;

@end

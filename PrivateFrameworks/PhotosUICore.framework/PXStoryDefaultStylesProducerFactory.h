
@interface PXStoryDefaultStylesProducerFactory : NSObject <PXStoryStylesProducerFactory>

- (id)initialStyleProducerForAssetCollection:(id)arg1;
- (id)initialStyleProducerForPersistableRecipe:(id)arg1 songResource:(id)arg2 autoEditDecisionList:(id)arg3;
- (id)stylesProducerForAutoEditDecisionLists:(id)arg1;

@end

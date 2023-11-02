
@protocol PXStoryStylesProducerFactory

@required

- (<PXStoryStylesProducer> *)initialStyleProducerForAssetCollection:(id <PXDisplayAssetCollection>)arg1;
- (<PXStoryStylesProducer> *)initialStyleProducerForPersistableRecipe:(id <PFStoryRecipe>)arg1 songResource:(id <PXStorySongResource>)arg2 autoEditDecisionList:(id <PXStoryAutoEditDecisionList>)arg3;
- (<PXStoryStylesProducer> *)stylesProducerForAutoEditDecisionLists:(NSArray *)arg1;

@end


@protocol PXContentSyndicationGadgetDelegate <PXGadgetDelegate>

@required

- (void)contentSyndicationGadget:(PXContentSyndicationGadget *)arg1 presentOneUpAnimated:(bool)arg2 asset:(id <PXDisplayAsset>)arg3;
- (PXContentSyndicationCountsController *)countsControllerForContentSyndicationGadget:(PXContentSyndicationGadget *)arg1;

@end


@interface HURecommendedTriggerItemModuleController : HUItemModuleController {
    NSString * _analyticsPresentationContext;
    <HURecommendedTriggerItemModuleControllerDelegate> * _delegate;
}

@property (nonatomic, retain) NSString *analyticsPresentationContext;
@property (nonatomic) <HURecommendedTriggerItemModuleControllerDelegate> *delegate;

- (void).cxx_destruct;
- (id)analyticsPresentationContext;
- (Class)cellClassForItem:(id)arg1;
- (id)delegate;
- (void)didCommitTriggerBuilderForItem:(id)arg1 withError:(id)arg2;
- (unsigned long long)didSelectItem:(id)arg1;
- (void)setAnalyticsPresentationContext:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)updateCell:(id)arg1 forItem:(id)arg2 animated:(bool)arg3;

@end

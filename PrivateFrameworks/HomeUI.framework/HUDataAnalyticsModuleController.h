
@interface HUDataAnalyticsModuleController : HUItemModuleController {
    <HUDataAnalyticsModuleControllerDelegate> * _dataAnalyticsModuleControllerDelegate;
}

@property (nonatomic) <HUDataAnalyticsModuleControllerDelegate> *dataAnalyticsModuleControllerDelegate;

- (void).cxx_destruct;
- (bool)canSelectItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1;
- (id)dataAnalyticsModuleControllerDelegate;
- (unsigned long long)didSelectItem:(id)arg1;
- (id)initWithModule:(id)arg1;
- (id)module;
- (void)setDataAnalyticsModuleControllerDelegate:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2;

@end


@interface HUTriggerConditionDetailEditingContext : NSObject {
    UINavigationController * _navigationController;
    HFItem * _optionItem;
    HUTriggerTimeConditionDetailEditorViewController * _viewController;
}

@property (nonatomic, retain) UINavigationController *navigationController;
@property (nonatomic, retain) HFItem *optionItem;
@property (nonatomic, retain) HUTriggerTimeConditionDetailEditorViewController *viewController;

- (void).cxx_destruct;
- (id)navigationController;
- (id)optionItem;
- (void)setNavigationController:(id)arg1;
- (void)setOptionItem:(id)arg1;
- (void)setViewController:(id)arg1;
- (id)viewController;

@end

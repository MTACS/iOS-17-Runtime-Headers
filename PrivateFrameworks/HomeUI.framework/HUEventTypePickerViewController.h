
@interface HUEventTypePickerViewController : HUItemTableViewController <HUEventUIFlowViewController> {
    HUEventUIFlow * _flow;
    NSString * _stepIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) HUEventUIFlow *flow;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HUEventTypePickerItemManager *itemManager;
@property (nonatomic, retain) NSString *stepIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_cancel:(id)arg1;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)flow;
- (id)initWithFlow:(id)arg1 stepIdentifier:(id)arg2;
- (void)setFlow:(id)arg1;
- (void)setStepIdentifier:(id)arg1;
- (bool)shouldHideFooterBelowSection:(long long)arg1;
- (bool)shouldHideHeaderAboveSection:(long long)arg1;
- (id)stepIdentifier;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(bool)arg4;

@end

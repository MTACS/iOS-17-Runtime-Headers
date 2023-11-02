
@interface HUActionSetAccessoryPickerViewController : HUItemCollectionViewController {
    void accessoryElementModule;
    void actionSetBuilder;
    void delegate;
    void selectionController;
}

@property (nonatomic, readonly) HFActionSetBuilder *actionSetBuilder;

- (void).cxx_destruct;
- (id)actionSetBuilder;
- (id)buildItemModuleControllerForModule:(id)arg1;
- (void)cancelWithSender:(id)arg1;
- (void)doneWithSender:(id)arg1;
- (id)initUsingCompositionalLayoutWithItemManager:(id)arg1;
- (id)initWithActionSetBuilder:(id)arg1 delegate:(id)arg2;
- (id)initWithItemManager:(id)arg1 collectionViewLayout:(id)arg2;
- (id)listContentConfigurationForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)viewDidLoad;

@end

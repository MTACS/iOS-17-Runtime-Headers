
@interface HUTriggerActionPickerViewController : HUItemCollectionViewController <WFHomeWorkflowEditorViewControllerDelegate> {
    void accessoryModule;
    void actionSetModule;
    void delegate;
    void flow;
    void selectionController;
    void triggerBuilder;
}

@property (nonatomic, readonly) <HUTriggerEditorDelegate> *delegate;
@property (nonatomic, readonly) HUTriggerActionFlow *flow;
@property (nonatomic, readonly) id triggerBuilder;

- (void).cxx_destruct;
- (id)buildItemModuleControllerForModule:(id)arg1;
- (void)cancelWithSender:(id)arg1;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)delegate;
- (id)flow;
- (void)homeWorkflowEditorViewController:(id)arg1 didFinishWithHomeWorkflow:(id)arg2 includesSecureAccessory:(bool)arg3;
- (id)initUsingCompositionalLayoutWithItemManager:(id)arg1;
- (id)initWithItemManager:(id)arg1 collectionViewLayout:(id)arg2;
- (id)initWithTriggerBuilder:(id)arg1 flow:(id)arg2 delegate:(id)arg3;
- (id)initWithTriggerBuilder:(id)arg1 mode:(unsigned long long)arg2 delegate:(id)arg3;
- (void)itemManagerDidUpdate:(id)arg1;
- (id)listContentConfigurationForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (void)nextWithSender:(id)arg1;
- (id)triggerBuilder;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end

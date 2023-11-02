
@interface HUAccessoryEventPickerViewController : HUItemCollectionViewController {
    void accessoryElementModule;
    void delegate;
    void eventBuilderItem;
    void filter;
    void mode;
    void selectionController;
    void source;
    void triggerBuilder;
}

@property (nonatomic) <HUTriggerEditorDelegate> *delegate;
@property (nonatomic, readonly) HFCharacteristicEventBuilderItem *eventBuilderItem;
@property (nonatomic, copy) id /* block */ filter;
@property (nonatomic, readonly) unsigned long long mode;
@property (nonatomic, readonly) unsigned long long source;
@property (nonatomic, readonly) HFEventTriggerBuilder *triggerBuilder;

- (void).cxx_destruct;
- (id)buildItemModuleControllerForModule:(id)arg1;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)delegate;
- (id)eventBuilderItem;
- (id /* block */)filter;
- (id)initUsingCompositionalLayoutWithItemManager:(id)arg1;
- (id)initWithEventBuilderItem:(id)arg1 triggerBuilder:(id)arg2 mode:(unsigned long long)arg3 source:(unsigned long long)arg4 delegate:(id)arg5;
- (id)initWithItemManager:(id)arg1 collectionViewLayout:(id)arg2;
- (id)listContentConfigurationForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2;
- (unsigned long long)mode;
- (void)nextWithSender:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFilter:(id /* block */)arg1;
- (unsigned long long)source;
- (id)triggerBuilder;
- (void)validateNextButton;
- (void)viewDidLoad;

@end

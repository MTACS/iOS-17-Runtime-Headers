
@interface HUFaceRecognitionKnownToHomeViewController : HUItemTableViewController <HUFaceRecognitionPersonEditorViewControllerDelegate> {
    HFItemProvider * _homePersonItemProvider;
    HFItemManager * _knownPersonItemManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) HFItemProvider *homePersonItemProvider;
@property (nonatomic, retain) HFItemManager *knownPersonItemManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)automaticDisablingReasonsForItem:(id)arg1;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)homePersonItemProvider;
- (id)initWithHome:(id)arg1;
- (id)initWithItemManager:(id)arg1 tableViewStyle:(long long)arg2;
- (id)knownPersonItemManager;
- (void)personEditorViewController:(id)arg1 didUpdateItem:(id)arg2;
- (id)presentFaceRecognitionPersonSettingsForPerson:(id)arg1 personManager:(id)arg2 animated:(bool)arg3;
- (void)setHomePersonItemProvider:(id)arg1;
- (void)setKnownPersonItemManager:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;

@end

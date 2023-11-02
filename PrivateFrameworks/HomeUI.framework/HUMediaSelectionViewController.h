
@interface HUMediaSelectionViewController : HUItemTableViewController <HUMediaSourceListDelegate, HUSliderValueTableViewCellDelegate, HUSwitchCellDelegate, MPMediaPickerControllerDelegatePrivate> {
    <HUMediaSelectionViewControllerDelegate> * _delegate;
    unsigned long long  _lastTargetOptions;
    HUMediaSelectionItemManager * _mediaSelectionItemManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <HUMediaSelectionViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long lastTargetOptions;
@property (nonatomic, retain) HUMediaSelectionItemManager *mediaSelectionItemManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)_allowRowInteractionForIndexPath:(id)arg1;
- (void)_presentMediaPickerUnavailablePromptWithReason:(long long)arg1 storeKitErrorObject:(id)arg2;
- (void)_presentMediaPickerWithOptionsShowsLibraryContent:(bool)arg1 pickingForExternalPlayer:(bool)arg2;
- (void)applyAccessory:(long long)arg1 toItem:(id)arg2 onTableView:(id)arg3;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)delegate;
- (id)initWithActionSetBuilder:(id)arg1;
- (void)itemManager:(id)arg1 didUpdateResultsForItem:(id)arg2 atIndexPath:(id)arg3;
- (unsigned long long)lastTargetOptions;
- (void)mediaPicker:(id)arg1 didPickPlaybackArchive:(id)arg2;
- (void)mediaPickerDidCancel:(id)arg1;
- (void)mediaPickerDidPickPlaybackArchive:(id)arg1;
- (id)mediaSelectionItemManager;
- (void)setDelegate:(id)arg1;
- (void)setLastTargetOptions:(unsigned long long)arg1;
- (void)setMediaSelectionItemManager:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (void)sliderValueTableViewCell:(id)arg1 didChangeValue:(double)arg2;
- (void)switchCell:(id)arg1 didTurnOn:(bool)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldHighlightRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(bool)arg4;
- (void)viewDidLoad;

@end

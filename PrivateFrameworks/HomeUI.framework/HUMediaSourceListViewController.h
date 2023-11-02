
@interface HUMediaSourceListViewController : HUItemTableViewController <HUMediaPickerDelegate> {
    MPPlaybackArchive * _currentPlaybackSelection;
    <HUMediaSourceListDelegate> * _delegate;
}

@property (retain) MPPlaybackArchive *currentPlaybackSelection;
@property (nonatomic) <HUMediaSourceListDelegate> *delegate;

- (void).cxx_destruct;
- (Class)cellClassForItem:(id)arg1 indexPath:(id)arg2;
- (id)currentPlaybackSelection;
- (id)delegate;
- (void)dismissViewController;
- (id)errorAlertControllerForResolveError:(id)arg1;
- (id)initForMediaProfileContainers:(id)arg1 forTarget:(unsigned long long)arg2;
- (void)mediaPickerDidCancel;
- (void)mediaPickerDidPickPlaybackArchive:(id)arg1;
- (void)setCurrentPlaybackSelection:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setupCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3;
- (bool)shouldHideHeaderAboveSection:(long long)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (bool)tableView:(id)arg1 shouldDrawBottomSeparatorForSection:(long long)arg2;
- (bool)tableView:(id)arg1 shouldHaveFullLengthBottomSeparatorForSection:(long long)arg2;
- (void)updateCell:(id)arg1 forItem:(id)arg2 indexPath:(id)arg3 animated:(bool)arg4;
- (void)viewWillAppear:(bool)arg1;

@end

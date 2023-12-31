
@interface PUPhotoStreamAlbumsTableViewController : UITableViewController {
    NSOrderedSet * _albumsOrderedSet;
    bool  _allowsMutlipleSelection;
    <PUPhotoStreamsAlbumsTableViewControllerDelegate> * _pickerDelegate;
    NSMutableSet * _selectedAlbumGuids;
}

@property (nonatomic) bool allowsMutlipleSelection;
@property (nonatomic) <PUPhotoStreamsAlbumsTableViewControllerDelegate> *pickerDelegate;

+ (id /* block */)_albumsComparator;
+ (id)albumListForContentMode:(int)arg1;

- (void).cxx_destruct;
- (void)addSelectedCloudGuid:(id)arg1;
- (bool)allowsMutlipleSelection;
- (struct CGSize { double x1; double x2; })contentSizeForViewInPopover;
- (void)didReceiveMemoryWarning;
- (id)initWithStyle:(long long)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)pickerDelegate;
- (id)posterImageForAlbum:(id)arg1 imageView:(id)arg2;
- (void)reloadActions;
- (void)setAllowsMutlipleSelection:(bool)arg1;
- (void)setPickerDelegate:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)traitCollectionDidChange:(id)arg1;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;

@end

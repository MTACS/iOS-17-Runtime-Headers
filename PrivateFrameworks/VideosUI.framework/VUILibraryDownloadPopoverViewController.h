
@interface VUILibraryDownloadPopoverViewController : UIViewController <UIGestureRecognizerDelegate> {
    <VUILibraryDownloadPopoverViewControllerDelegate> * _delegate;
    VUILibraryListItemView * _listView;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <VUILibraryDownloadPopoverViewControllerDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) VUILibraryListItemView *listView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)delegate;
- (id)listView;
- (void)loadView;
- (void)popoverPressed:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setListView:(id)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end

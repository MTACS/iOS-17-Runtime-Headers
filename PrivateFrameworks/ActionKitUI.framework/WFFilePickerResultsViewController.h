
@interface WFFilePickerResultsViewController : UIViewController {
    <WFRemoteFileListViewDelegate> * _delegate;
    WFRemoteFileListView * _fileListView;
    NSArray * _files;
}

@property (nonatomic, readonly) <WFRemoteFileListViewDelegate> *delegate;
@property (nonatomic, readonly) WFRemoteFileListView *fileListView;
@property (nonatomic, copy) NSArray *files;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)fileListView;
- (id)files;
- (id)initWithFileListDelegate:(id)arg1;
- (void)loadView;
- (void)setFiles:(id)arg1;
- (void)updateContentInset;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillLayoutSubviews;

@end

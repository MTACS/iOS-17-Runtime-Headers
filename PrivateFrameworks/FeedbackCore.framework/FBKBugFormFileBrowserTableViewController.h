
@interface FBKBugFormFileBrowserTableViewController : UITableViewController <UIDocumentInteractionControllerDelegate> {
    NSArray * _directoryList;
    DEDAttachmentGroup * _group;
    NSURL * _url;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSArray *directoryList;
@property (nonatomic, retain) DEDAttachmentGroup *group;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSURL *url;

- (void).cxx_destruct;
- (id)directoryList;
- (void)documentInteractionControllerDidEndPreview:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })documentInteractionControllerRectForPreview:(id)arg1;
- (id)documentInteractionControllerViewControllerForPreview:(id)arg1;
- (id)documentInteractionControllerViewForPreview:(id)arg1;
- (id)group;
- (id)initWithGroup:(id)arg1;
- (id)initWithUrl:(id)arg1;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)setDirectoryList:(id)arg1;
- (void)setGroup:(id)arg1;
- (void)setUrl:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)url;
- (void)viewDidLoad;

@end


@interface FBKSqliteIndexViewController : UITableViewController <UIDocumentInteractionControllerDelegate, UITableViewDataSource, UITableViewDelegate> {
    NSURL * _dbUrl;
    FBKSqliteReader * _reader;
    NSArray * _tableNames;
}

@property (nonatomic, retain) NSURL *dbUrl;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (retain) FBKSqliteReader *reader;
@property (readonly) Class superclass;
@property (retain) NSArray *tableNames;

+ (bool)canDisplayExtension:(id)arg1 strict:(bool)arg2;
+ (bool)canDisplayURL:(id)arg1;
+ (id)dbUrlForMetadataUrl:(id)arg1;
+ (id)removeWalShm:(id)arg1;

- (void).cxx_destruct;
- (id)dbUrl;
- (void)didReceiveMemoryWarning;
- (void)documentInteractionControllerDidEndPreview:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })documentInteractionControllerRectForPreview:(id)arg1;
- (id)documentInteractionControllerViewControllerForPreview:(id)arg1;
- (id)documentInteractionControllerViewForPreview:(id)arg1;
- (id)reader;
- (void)setDbUrl:(id)arg1;
- (void)setReader:(id)arg1;
- (void)setTableNames:(id)arg1;
- (id)tableNames;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;

@end

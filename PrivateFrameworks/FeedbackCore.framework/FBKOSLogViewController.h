
@interface FBKOSLogViewController : UITableViewController <UITableViewDataSource, UITableViewDelegate> {
    bool  _loading;
    FBKOSLogViewerDataSource * _logSource;
    NSURL * _logURL;
    bool  _previousToolbarHidden;
    UIActivityIndicatorView * _spinner;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isLoading, readonly) bool loading;
@property (retain) FBKOSLogViewerDataSource *logSource;
@property (retain) NSURL *logURL;
@property bool previousToolbarHidden;
@property UIActivityIndicatorView *spinner;
@property (readonly) Class superclass;

+ (bool)canDisplayURL:(id)arg1;

- (void).cxx_destruct;
- (bool)isLoading;
- (id)logSource;
- (id)logURL;
- (void)nextPage;
- (bool)previousToolbarHidden;
- (void)scrollViewDidScroll:(id)arg1;
- (void)setLoading:(bool)arg1;
- (void)setLogSource:(id)arg1;
- (void)setLogURL:(id)arg1;
- (void)setOSLogURL:(id)arg1;
- (void)setPreviousToolbarHidden:(bool)arg1;
- (void)setSpinner:(id)arg1;
- (void)shareArchive:(id)arg1;
- (id)spinner;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)viewDidAppear:(bool)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(bool)arg1;
- (void)viewWillDisappear:(bool)arg1;

@end

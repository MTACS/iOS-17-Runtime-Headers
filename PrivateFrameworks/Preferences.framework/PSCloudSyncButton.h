
@interface PSCloudSyncButton : UIBarButtonItem <PSCloudSyncPopoverDelegate> {
    PSViewController * _controller;
    <PSCloudSyncDelegate> * _delegate;
    NSDictionary * _options;
    bool  _syncEnabled;
    NSError * _syncError;
}

@property (getter=isCloudSyncEnabled, nonatomic) bool cloudSyncEnabled;
@property (nonatomic, readonly) PSViewController *controller;
@property (nonatomic) <PSCloudSyncDelegate> *delegate;
@property (nonatomic, retain) NSDictionary *options;
@property (nonatomic) bool syncEnabled;
@property (nonatomic, retain) NSError *syncError;
@property (nonatomic, readonly) NSString *syncMessage;
@property (nonatomic, readonly, copy) NSString *syncTitle;

- (void).cxx_destruct;
- (void)cloudSyncAction:(id)arg1;
- (id)controller;
- (id)delegate;
- (bool)hasMergeConflict;
- (id)initWithController:(id)arg1 options:(id)arg2 delegate:(id)arg3;
- (bool)isCloudSyncEnabled;
- (id)mergeConflictMessage;
- (id)options;
- (void)setCloudSyncEnabled:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOptions:(id)arg1;
- (void)setSyncEnabled:(bool)arg1;
- (void)setSyncError:(id)arg1;
- (bool)showRedirectSheet;
- (bool)syncEnabled;
- (id)syncError;
- (id)syncMessage;
- (id)syncTitle;
- (void)update;
- (void)updateIcon;

@end

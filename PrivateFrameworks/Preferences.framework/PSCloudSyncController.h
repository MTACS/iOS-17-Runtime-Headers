
@interface PSCloudSyncController : PSListController {
    <PSCloudSyncPopoverDelegate> * _delegate;
}

@property (nonatomic) <PSCloudSyncPopoverDelegate> *delegate;

- (void).cxx_destruct;
- (id)cloudSyncEnabled;
- (id)delegate;
- (id)initWithDelegate:(id)arg1;
- (void)setCloudSyncEnabled:(id)arg1;
- (void)setDelegate:(id)arg1;
- (id)specifiers;
- (void)viewWillAppear:(bool)arg1;

@end

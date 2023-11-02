
@protocol SHSheetPresenter <SHSheetContentPresenter, SHSheetActivityViewController, SHSheetTestingContent>

@required

- (<UIActivityItemsConfigurationReading> *)createActivityItemsConfiguration;
- (UIActivity *)currentActivity;
- (<SHSheetPresenterDelegate> *)delegate;
- (void)dismiss;
- (bool)isCollaborationSelected;
- (bool)isContentManaged;
- (void)performActivity:(UIActivity *)arg1;
- (void)preheatExtensionDiscovery;
- (void)prepareViewIfNeeded;
- (void)present;
- (void)reloadActivity:(UIActivity *)arg1;
- (<_UIRemoteSheet> *)remoteSheet;
- (NSArray *)selectedAssetIdentifiers;
- (NSString *)sessionIdentifier;
- (void)setDelegate:(id <SHSheetPresenterDelegate>)arg1;
- (void)setIsContentManaged:(bool)arg1;
- (void)setSelectedAssetIdentifiers:(NSArray *)arg1;
- (void)updateCustomView;
- (void)updateWithContext:(SHSheetContext *)arg1;
- (bool)useRemoteUIService;

@end


@interface CACContextCluesPresentationManager : CACSimpleContentViewManager <CACContextCluesDelegate>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)contextCludesDidPressDoneButton;
- (bool)isOverlay;
- (void)showWithCommands:(id)arg1;

@end

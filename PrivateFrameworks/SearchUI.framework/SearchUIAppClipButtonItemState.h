
@interface SearchUIAppClipButtonItemState : SearchUIButtonItemState

@property (nonatomic, retain) SFRequestAppClipInstallCommand *command;

- (id)cachedStateValue;
- (void)checkIfAvailable:(id /* block */)arg1;
- (bool)isPossiblyAvailable;

@end

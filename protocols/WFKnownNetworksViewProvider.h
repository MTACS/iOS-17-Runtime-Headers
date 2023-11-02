
@protocol WFKnownNetworksViewProvider <NSObject>

@required

- (void)cancelEditing;
- (void)editKnownNetworks;
- (void)finishEditing;
- (void)refreshKnownNetworksUpdateTableView:(bool)arg1;

@optional

- (void)knownNetworksDidBecomeActive;
- (void)knownNetworksWillEnterForeground;
- (void)knownNetworksWillResignActive;

@end

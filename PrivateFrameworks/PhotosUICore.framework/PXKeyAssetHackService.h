
@interface PXKeyAssetHackService : PXDiagnosticsService

+ (bool)keyAssetHackServiceIsEnabled;

- (id)asset;
- (bool)canPerformAction;
- (void)performAction;
- (bool)shouldSetKeyAssetForHighlight:(id)arg1;
- (id)title;

@end


@protocol PGControlsViewModelDelegate <NSObject>

@required

- (void)controlsViewModel:(PGControlsViewModel *)arg1 didIssueCommand:(PGCommand *)arg2;
- (void)controlsViewModel:(PGControlsViewModel *)arg1 valuesChangedFromOldValue:(PGControlsViewModelValues *)arg2;

@end


@protocol AKAuthorizationEditableDataSources <NSObject>

@required

- (AKAuthorizationScopeChoices *)editableScopeChoices;
- (bool)editableScopeChoicesChanged;
- (void)setEditableScopeChoicesChanged:(bool)arg1;

@end

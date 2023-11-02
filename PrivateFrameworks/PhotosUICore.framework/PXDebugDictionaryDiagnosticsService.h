
@interface PXDebugDictionaryDiagnosticsService : PXDiagnosticsService

- (id)_debugDictionary;
- (bool)canProvideConsoleDescription;
- (bool)canProvideContextualViewController;
- (id)consoleDescription;
- (id)contextualViewController;
- (id)title;

@end

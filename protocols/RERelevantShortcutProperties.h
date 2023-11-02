
@protocol RERelevantShortcutProperties <REExportedInterface>

@required

- (NSArray *)relevanceProviders;
- (INShortcut *)shortcut;
- (long long)shortcutRole;
- (INDefaultCardTemplate *)watchTemplate;

@end

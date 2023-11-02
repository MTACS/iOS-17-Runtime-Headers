
@protocol LNAutoShortcutsProviderInterface <NSObject>

@required

- (void)autoShortcutsForBundleIdentifier:(void *)arg1 localeIdentifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)autoShortcutsForLocaleIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (NSDictionary *)autoShortcutsForLocaleIdentifier:(NSString *)arg1 error:(id*)arg2;
- (NSDictionary *)propertiesForIdentifiers:(NSArray *)arg1 error:(id*)arg2;

@end

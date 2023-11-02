
@protocol MapsSuggestionsShortcutStorage <MapsSuggestionsObject>

@required

- (bool)addOrUpdateShortcuts:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (bool)loadAllShortcutsWithHandler:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (bool)moveShortcut:(void *)arg1 afterShortcut:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 8: MapsSuggestionsShortcut *, MapsSuggestionsShortcut *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (bool)moveShortcut:(void *)arg1 beforeShortcut:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 8: MapsSuggestionsShortcut *, MapsSuggestionsShortcut *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (bool)moveShortcut:(void *)arg1 toIndex:(void *)arg2 handler:(void *)arg3; // needs 3 arg types, found 8: MapsSuggestionsShortcut *, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (bool)moveShortcutToBack:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 7: MapsSuggestionsShortcut *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (bool)moveShortcutToFront:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 7: MapsSuggestionsShortcut *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (bool)removeShortcuts:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 7: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)setChangeHandler:(void *)arg1; // needs 1 arg types, found 5: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end

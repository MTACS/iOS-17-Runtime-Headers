
@protocol SBFloatingDockSuggestionsModelDelegate <NSObject>

@required

- (void)dockSuggestionsModel:(SBFloatingDockSuggestionsModel *)arg1 didInsertItem:(SBDisplayItem *)arg2 atIndex:(unsigned long long)arg3 involvesContinuity:(bool)arg4;
- (void)dockSuggestionsModel:(SBFloatingDockSuggestionsModel *)arg1 didReloadItems:(NSOrderedSet *)arg2 withItems:(NSOrderedSet *)arg3;
- (void)dockSuggestionsModel:(SBFloatingDockSuggestionsModel *)arg1 didRemoveItem:(SBDisplayItem *)arg2 atIndex:(unsigned long long)arg3 involvesContinuity:(bool)arg4;
- (void)dockSuggestionsModel:(SBFloatingDockSuggestionsModel *)arg1 didReplaceItem:(SBDisplayItem *)arg2 atIndex:(unsigned long long)arg3 withItem:(SBDisplayItem *)arg4 atIndex:(unsigned long long)arg5 involvesContinuity:(bool)arg6;

@end

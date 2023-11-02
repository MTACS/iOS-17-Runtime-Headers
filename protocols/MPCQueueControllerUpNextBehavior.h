
@protocol MPCQueueControllerUpNextBehavior <MPCQueueControllerBehavior>

@required

- (bool)allowsQueueModifications;
- (bool)canRemoveContentItemID:(NSString *)arg1 reason:(id*)arg2;
- (void)clearAllItemsAfterContentItemID:(NSString *)arg1;
- (long long)displayItemCount;
- (bool)hasUserMutations;
- (bool)isSupportedInsertionPosition:(long long)arg1 fromContentItemID:(NSString *)arg2 reason:(id*)arg3;
- (void)moveContentItemID:(void *)arg1 afterContentItemID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)moveContentItemID:(void *)arg1 beforeContentItemID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)performInsertCommand:(void *)arg1 targetContentItemID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: MPInsertIntoPlaybackQueueCommandEvent *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)removeContentItemID:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)setAllowsQueueModifications:(bool)arg1;

@end


@protocol SRFollowUpPosting <NSObject>

@required

- (void)clearPendingFollowUpItemsWithUniqueIdentifiers:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)pendingFollowUpItemsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)postFollowUpItem:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: FLFollowUpItem *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end


@protocol AAFollowUpProtocol

@required

- (void)dismissFollowUpWithIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (bool)dismissFollowUpWithIdentifier:(NSString *)arg1 error:(id*)arg2;
- (void)pendingFollowUpWithIdentifier:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, FLFollowUpItem *, NSError *, void*
- (void)postFollowUpWithIdentifier:(void *)arg1 userInfo:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (bool)postFollowUpWithIdentifier:(NSString *)arg1 userInfo:(NSDictionary *)arg2 error:(id*)arg3;

@end

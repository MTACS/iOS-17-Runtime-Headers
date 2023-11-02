
@protocol DNDSSyncService <NSObject>

@required

- (<DNDSSyncServiceDelegate> *)delegate;
- (void)resume;
- (void)sendMessage:(void *)arg1 withVersionNumber:(void *)arg2 messageType:(void *)arg3 toDestinations:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 11: NSDictionary *, unsigned long long, NSString *, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)sendMessage:(void *)arg1 withVersionNumber:(void *)arg2 messageType:(void *)arg3 toDestinations:(void *)arg4 identifyingCompletionHandler:(void *)arg5; // needs 5 arg types, found 12: NSDictionary *, unsigned long long, NSString *, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSString *, NSError *, void*
- (void)setDelegate:(id <DNDSSyncServiceDelegate>)arg1;

@end

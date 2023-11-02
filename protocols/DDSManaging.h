
@protocol DDSManaging <NSObject>

@required

- (void)addAssertionForQuery:(DDSAssetQuery *)arg1 policy:(DDSAssetPolicy *)arg2 assertionID:(NSString *)arg3 clientID:(NSString *)arg4;
- (void)assertionIDsForClientID:(void *)arg1 reply:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSSet *, void*
- (<DDSManagingDelegate> *)delegate;
- (void)fetchAssetUpdateStatusForQuery:(void *)arg1 callback:(void *)arg2; // needs 2 arg types, found 8: DDSAssetQuery *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSError *, void*
- (void)removeAssertionWithID:(NSString *)arg1;
- (void)setDelegate:(id <DDSManagingDelegate>)arg1;
- (void)triggerDump;
- (void)triggerUpdate;
- (void)updateAssetForQuery:(void *)arg1 callback:(void *)arg2; // needs 2 arg types, found 8: DDSAssetQuery *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSNumber *, NSError *, void*
- (NSString *)xpcServiceName;

@end

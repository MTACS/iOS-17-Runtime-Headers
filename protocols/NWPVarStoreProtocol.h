
@protocol NWPVarStoreProtocol <NSObject>

@required

- (long long)deleteItemsMatchingPredicate:(NSPredicate *)arg1;
- (NWPVar *)fetchItemUnderName:(void *)arg1 verificationBlock:(void *)arg2; // needs 2 arg types, found 7: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, bool, id /* block */, id, void*
- (id)initWithQueue:(NSObject<OS_dispatch_queue> *)arg1;
- (NSArray *)listItemsNameWithPrefix:(NSString *)arg1 sortDescriptor:(NSSortDescriptor *)arg2;
- (bool)storeUnderName:(NSString *)arg1 item:(NWPVar *)arg2;

@end

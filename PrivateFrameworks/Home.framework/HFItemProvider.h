
@interface HFItemProvider : NSObject <NSCopying> {
    NSSet * _clientInvalidationReasons;
}

@property (nonatomic, retain) NSSet *clientInvalidationReasons;
@property (nonatomic, readonly) NSSet *items;

+ (bool)prefersNonBlockingReloads;

- (void).cxx_destruct;
- (id)asGeneric;
- (id)clientInvalidationReasons;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (id)reloadItemsWithHomeKitObjects:(id)arg1 filter:(id /* block */)arg2 itemMap:(id /* block */)arg3;
- (id)reloadItemsWithObjects:(id)arg1 keyAdaptor:(id /* block */)arg2 itemAdaptor:(id /* block */)arg3 filter:(id /* block */)arg4 itemMap:(id /* block */)arg5;
- (void)setClientInvalidationReasons:(id)arg1;

@end

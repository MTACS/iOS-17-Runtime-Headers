
@interface RBStateCaptureManager : NSObject <RBStateCaptureManaging> {
    NSMutableDictionary * _itemsByIdentifier;
    RBSStateCaptureSet * _itemsWithoutIdentifiers;
    NSObject<OS_dispatch_queue> * _queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addItem:(id)arg1;
- (void)addItem:(id)arg1 withIdentifier:(id)arg2;
- (void)addItemWithTitle:(id)arg1 identifier:(id)arg2 block:(id /* block */)arg3;
- (id)identifiers;
- (id)init;
- (void)removeItem:(id)arg1;
- (void)removeItemWithIdentifier:(id)arg1;
- (id)stateForSubsystem:(id)arg1;

@end


@interface PLUpdatedOrderKeys : NSObject {
    bool  _isObservingOrderKeys;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    NSSet * _observedRelationships;
    NSMutableDictionary * _updatedOrderKeyObjectIDs;
}

@property (readonly) bool isObservingOrderKeys;

- (void).cxx_destruct;
- (bool)_inq_registerForStoreOrderKeyUpdateNotificationFromManagedObjectContext:(id)arg1;
- (id)_persistentStoresForContext:(id)arg1;
- (id)getAndClearUpdatedOrderKeys;
- (id)init;
- (bool)isObservingOrderKeys;
- (void)persistentStoreDidUpdateOrderKeys:(id)arg1;
- (bool)registerForStoreOrderKeyUpdateNotificationFromManagedObjectContext:(id)arg1;

@end

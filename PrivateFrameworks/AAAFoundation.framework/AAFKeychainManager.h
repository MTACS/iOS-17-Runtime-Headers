
@interface AAFKeychainManager : NSObject {
    NSObject<OS_dispatch_queue> * _keychainQueue;
}

- (void).cxx_destruct;
- (void)_unsafe_addKeychainItem:(id)arg1 shouldAttemptUpdate:(bool)arg2 error:(id*)arg3;
- (bool)_unsafe_deleteKeychainItemWithDescriptor:(id)arg1 error:(id*)arg2;
- (id)_unsafe_fetchKeychainItemWithDescriptor:(id)arg1 error:(id*)arg2;
- (id)_unsafe_fetchKeychainItemsWithDescriptor:(id)arg1 error:(id*)arg2;
- (bool)_unsafe_updateKeychainItemWithDescriptor:(id)arg1 newItem:(id)arg2 error:(id*)arg3;
- (void)addKeychainItem:(id)arg1 error:(id*)arg2;
- (void)addOrUpdateKeychainItem:(id)arg1 error:(id*)arg2;
- (void)deleteKeychainItemsForDescriptor:(id)arg1 error:(id*)arg2;
- (id)init;
- (id)keychainItemForDescriptor:(id)arg1 error:(id*)arg2;
- (id)keychainItemsForDescriptor:(id)arg1 error:(id*)arg2;
- (void)updateKeychainItem:(id)arg1 error:(id*)arg2;

@end

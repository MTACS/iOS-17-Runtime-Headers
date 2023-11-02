
@interface VCShortcutsObliterator : NSObject {
    NSSet * _syncDataHandlers;
    WFTriggerRegistrar * _triggerRegistrar;
}

@property (nonatomic, readonly) NSSet *syncDataHandlers;
@property (nonatomic, readonly) WFTriggerRegistrar *triggerRegistrar;

- (void).cxx_destruct;
- (bool)deleteAppGroupWithIdentifier:(id)arg1 error:(id*)arg2;
- (bool)deleteDataVaultWithError:(id*)arg1;
- (bool)deleteKeychainItemsWithError:(id*)arg1;
- (id)initWithTriggerRegistrar:(id)arg1 syncDataHandlers:(id)arg2;
- (void)obliterate:(id*)arg1;
- (void)resetWatchSync;
- (id)syncDataHandlers;
- (bool)terminateProcessWithIdentifier:(id)arg1 assertion:(out id*)arg2 error:(out id*)arg3;
- (id)triggerRegistrar;

@end


@interface NPKPassLibrarySyncState : NSObject {
    NSDictionary * _syncStates;
}

+ (bool)_shouldAddPass:(id)arg1 withDeviceIsTinker:(bool)arg2 supportHealthPass:(bool)arg3 stateVersion:(unsigned long long)arg4;

- (void).cxx_destruct;
- (id)initWithPasses:(id)arg1 device:(id)arg2;
- (id)initWithStateVersionSyncStates:(id)arg1;
- (id)mergeWithPassLibrarySyncState:(id)arg1;
- (id)passSyncStateWithVersion:(unsigned long long)arg1;
- (id)updateReconcileState:(id)arg1 expectedVersion:(unsigned long long)arg2;

@end

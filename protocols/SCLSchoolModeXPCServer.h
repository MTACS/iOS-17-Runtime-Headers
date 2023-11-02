
@protocol SCLSchoolModeXPCServer <NSObject>

@required

- (oneway void)addUnlockHistoryItem:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: SCLUnlockHistoryItem *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (oneway void)applySchedule:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: SCLScheduleSettings *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (oneway void)connectWithPairingID:(void *)arg1 identifier:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSUUID *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SCLSchoolModeServerSettings *, NSError *, void*
- (oneway void)deleteHistoryWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (oneway void)dumpState;
- (oneway void)fetchRecentUnlockHistoryItemsWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (oneway void)noteSignificantUserInteraction;
- (oneway void)setActive:(void *)arg1 options:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: bool, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (oneway void)triggerRemoteSync;

@end

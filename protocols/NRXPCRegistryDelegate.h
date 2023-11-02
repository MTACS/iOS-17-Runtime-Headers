
@protocol NRXPCRegistryDelegate

@required

- (void)xpcApplyDiff:(void *)arg1 withSecureProperties:(void *)arg2 block:(void *)arg3; // needs 3 arg types, found 8: NRDeviceCollectionDiff *, NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)xpcClientInfo:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, void*
- (void)xpcDeviceIDAtSwitchIndex:(void *)arg1 withBlock:(void *)arg2; // needs 2 arg types, found 8: unsigned int, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUUID *, NSDate *, void*
- (void)xpcGetChangeHistoryWithBlock:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NRDeviceCollectionHistory *, void*
- (void)xpcGetDeviceCollectionWithBlock:(void *)arg1; // needs 1 arg types, found 9: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NRMutableDeviceCollection *, NRSecureDevicePropertyStore *, unsigned long long, bool, void*
- (void)xpcGetDiffSinceTokenValue:(void *)arg1 getSecureProperties:(void *)arg2 withBlock:(void *)arg3; // needs 3 arg types, found 11: unsigned long long, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NRDeviceCollectionDiff *, NSDictionary *, bool, unsigned long long, void*
- (void)xpcRetrieveSecureProperties:(void *)arg1 block:(void *)arg2; // needs 2 arg types, found 7: NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, void*
- (void)xpcSetMigrationConsented:(void *)arg1 forDeviceID:(void *)arg2 withBlock:(void *)arg3; // needs 3 arg types, found 7: bool, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)xpcSwitchIndex:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned int, void*

@end

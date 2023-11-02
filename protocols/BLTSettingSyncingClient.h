
@protocol BLTSettingSyncingClient <BLTSettingSyncing>

@required

- (void)setNotificationsLevel:(unsigned long long)arg1 sectionID:(NSString *)arg2 mirror:(bool)arg3 fromRemote:(bool)arg4;
- (void)setSectionInfo:(void *)arg1 keypaths:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 7: BLTPBSectionInfo *, NSSet *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (void)transportUpdateRemoteGlobalSpokenSettingEnabled:(bool)arg1 date:(NSDate *)arg2;

@end

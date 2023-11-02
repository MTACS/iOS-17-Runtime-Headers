
@protocol LiveFSVolumeClientUpdate

@required

- (void)deletedItem:(NSString *)arg1 name:(NSString *)arg2 how:(int)arg3 interestedItem:(NSString *)arg4;
- (void)deletedName:(NSString *)arg1 item:(NSString *)arg2 how:(int)arg3 interestedItem:(NSString *)arg4;
- (void)historyResetItem:(NSString *)arg1 interestedItem:(NSString *)arg2;
- (void)historyResetName:(NSString *)arg1 interestedItem:(NSString *)arg2;
- (void)renamedItem:(NSString *)arg1 named:(NSString *)arg2 fromDirectory:(NSString *)arg3 intoDirectory:(NSString *)arg4 newName:(NSString *)arg5 atopItem:(NSString *)arg6;
- (void)updatedItem:(NSString *)arg1 name:(NSString *)arg2 interestedItem:(NSString *)arg3;
- (void)updatedName:(NSString *)arg1 interestedItem:(NSString *)arg2;
- (void)updatesDoneFor:(NSString *)arg1;
- (void)volumeWideDeletedName:(NSString *)arg1 interestedItem:(NSString *)arg2;
- (void)volumeWideUpdatedName:(NSString *)arg1 interestedItem:(NSString *)arg2;

@end

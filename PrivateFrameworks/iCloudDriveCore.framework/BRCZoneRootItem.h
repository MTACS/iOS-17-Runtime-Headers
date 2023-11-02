
@interface BRCZoneRootItem : BRCDirectoryItem <BRCFSRooted>

- (id)asFSRoot;
- (id)extendedAttributes;
- (id)fileID;
- (id)initWithZoneRootItemID:(id)arg1 session:(id)arg2;
- (bool)isDirectoryFault;
- (bool)isFSRoot;
- (bool)isShareableItem;
- (bool)isUserVisible;
- (bool)isZoneRoot;
- (unsigned char)itemScope;
- (id)parentItemID;
- (id)parentItemOnFS;
- (bool)saveToDB;
- (id)st;

@end


@interface WBMutableTab : WBTab <NSCopying>

@property (getter=wasAdded, nonatomic) bool added;
@property (getter=isInUnnamedTabGroup, nonatomic) bool inUnnamedTabGroup;
@property (nonatomic, retain) WBLocalTabAttributes *localAttributes;
@property (nonatomic, copy) NSString *localTitle;
@property (nonatomic, copy) NSURL *localURL;
@property (getter=wasModified, nonatomic) bool modified;
@property (getter=wasMoved, nonatomic) bool moved;
@property (nonatomic) int orderIndex;
@property (getter=isPrivateBrowsing, nonatomic) bool privateBrowsing;
@property (getter=isShared, nonatomic) bool shared;
@property (nonatomic, copy) WBSCRDTPosition *syncPosition;
@property (getter=isSyncable, nonatomic) bool syncable;
@property (nonatomic, copy) NSString *syncableTitle;
@property (nonatomic, copy) NSURL *syncableURL;
@property (nonatomic, copy) NSString *tabGroupUUID;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) NSURL *url;

- (void)_setPropertiesFromTabGroup:(id)arg1;
- (void)adoptAttributesFromTab:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)didInsertIntoTabGroup:(id)arg1;
- (void)didRemoveFromTabGroup;
- (id)localTitle;
- (id)localURL;
- (void)markAsRead;
- (void)markClean;
- (void)mergeWithTab:(id)arg1;
- (void)setAdded:(bool)arg1;
- (void)setInUnnamedTabGroup:(bool)arg1;
- (void)setLocalAttributes:(id)arg1;
- (void)setLocalTitle:(id)arg1;
- (void)setLocalURL:(id)arg1;
- (void)setModified:(bool)arg1;
- (void)setMoved:(bool)arg1;
- (void)setOrderIndex:(int)arg1;
- (void)setPinned:(bool)arg1 title:(id)arg2 url:(id)arg3;
- (void)setPrivateBrowsing:(bool)arg1;
- (void)setShared:(bool)arg1;
- (void)setSyncPosition:(id)arg1;
- (void)setSyncable:(bool)arg1;
- (void)setSyncableTitle:(id)arg1;
- (void)setSyncableURL:(id)arg1;
- (void)setTabGroupUUID:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setURL:(id)arg1 shouldSync:(bool)arg2;
- (void)setUrl:(id)arg1;
- (id)syncableTitle;

@end

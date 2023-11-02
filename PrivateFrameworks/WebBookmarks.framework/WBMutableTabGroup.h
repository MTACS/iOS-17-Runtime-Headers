
@interface WBMutableTabGroup : WBTabGroup {
    NSString * _deviceUUIDString;
}

@property (nonatomic, readonly) NSArray *allTabs;
@property (nonatomic, copy) NSArray *deletedTabs;
@property (nonatomic, copy) NSString *deviceUUIDString;
@property (nonatomic, copy) id /* block */ displayTitleProvider;
@property (getter=isHidden, nonatomic) bool hidden;
@property (nonatomic) int identifier;
@property (nonatomic) long long kind;
@property (nonatomic, copy) NSString *lastSelectedTabUUID;
@property (nonatomic, copy) NSString *profileIdentifier;
@property (nonatomic, copy) WBSCRDTPosition *syncPosition;
@property (getter=isSyncable, nonatomic) bool syncable;
@property (nonatomic, copy) NSArray *tabs;
@property (nonatomic, copy) NSString *title;

+ (id)localTabGroup;
+ (id)localTabGroupWithUUID:(id)arg1;
+ (id)privateTabGroup;
+ (id)unnamedTabGroupWithDeviceIdentifier:(id)arg1;
+ (id)unnamedTabGroupWithUUID:(id)arg1 profileIdentifier:(id)arg2 deviceIdentifier:(id)arg3;

- (void).cxx_destruct;
- (void)_fixLastSelectedTabIfNeeded;
- (void)_performWithMutableTabs:(id /* block */)arg1;
- (void)appendTabs:(id)arg1;
- (void)clearDeletedTabs;
- (void)clearTabs;
- (void)deleteTabs:(id)arg1;
- (id)deletedTabs;
- (id)deviceUUIDString;
- (id)initWithBookmark:(id)arg1 tabs:(id)arg2 lastSelectedTabUUID:(id)arg3;
- (id)initWithTitle:(id)arg1 deviceIdentifier:(id)arg2 profileIdentifier:(id)arg3;
- (void)insertTabs:(id)arg1 afterTab:(id)arg2;
- (void)markBackgroundImageAsModified;
- (void)mergeWithTabGroup:(id)arg1;
- (id)mutableTabWithUUID:(id)arg1;
- (void)removeTab:(id)arg1;
- (void)reorderTab:(id)arg1 afterTab:(id)arg2;
- (void)setDeletedTabs:(id)arg1;
- (void)setDeviceUUIDString:(id)arg1;
- (void)setDisplayTitleProvider:(id /* block */)arg1;
- (void)setHidden:(bool)arg1;
- (void)setIdentifier:(int)arg1;
- (void)setKind:(long long)arg1;
- (void)setLastSelectedTabUUID:(id)arg1;
- (void)setProfileIdentifier:(id)arg1;
- (void)setSyncPosition:(id)arg1;
- (void)setSyncable:(bool)arg1;
- (void)setTabs:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)syncPosition;
- (void)truncateToNumberOfTabs:(unsigned long long)arg1;
- (void)updateLastSelectedTab;

@end

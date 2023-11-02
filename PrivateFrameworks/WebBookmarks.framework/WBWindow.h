
@interface WBWindow : NSObject {
    WBTabGroup * _activeTabGroup;
    WebBookmark * _bookmark;
    NSDate * _dateClosed;
    WBMutableTabGroup * _localTabGroup;
    WBMutableTabGroup * _privateTabGroup;
}

@property (nonatomic, retain) WBTabGroup *activeTabGroup;
@property (nonatomic, readonly) WebBookmark *bookmark;
@property (nonatomic, readonly, copy) NSString *customUnifiedFieldText;
@property (nonatomic, retain) NSDate *dateClosed;
@property (nonatomic, copy) NSDictionary *extraAttributes;
@property (nonatomic, readonly) int identifier;
@property (nonatomic, readonly) bool isFavoritesBarHidden;
@property (nonatomic, readonly) bool isMinimized;
@property (nonatomic, readonly) bool isPopupWindow;
@property (nonatomic, readonly) bool isPrivateWindow;
@property (nonatomic, readonly) bool isTabBarHidden;
@property (nonatomic, readonly) WBMutableTabGroup *localTabGroup;
@property (nonatomic, readonly) bool prefersSidebarVisible;
@property (nonatomic, readonly) WBMutableTabGroup *privateTabGroup;
@property (nonatomic, copy) NSString *sceneID;
@property (nonatomic, readonly, copy) NSDictionary *tabGroupsToActiveTabs;
@property (nonatomic, readonly, copy) NSString *uuid;

- (void).cxx_destruct;
- (void)_updateExtraAttributesUsingBlock:(id /* block */)arg1;
- (id)activeTabGroup;
- (id)activeTabUUIDForTabGroupWithUUID:(id)arg1;
- (id)bookmark;
- (id)customUnifiedFieldText;
- (id)dateClosed;
- (id)description;
- (id)extraAttributes;
- (unsigned long long)hash;
- (int)identifier;
- (id)initWithBookmark:(id)arg1;
- (id)initWithBookmark:(id)arg1 activeTabGroup:(id)arg2 localTabGroup:(id)arg3 privateTabGroup:(id)arg4;
- (id)initWithDictionaryRepresentation:(id)arg1 localTabGroup:(id)arg2 privateTabGroup:(id)arg3;
- (id)initWithUUID:(id)arg1;
- (id)initWithUUID:(id)arg1 activeTabGroup:(id)arg2 localTabGroup:(id)arg3 privateTabGroup:(id)arg4 sceneID:(id)arg5;
- (id)initWithUUID:(id)arg1 sceneID:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isFavoritesBarHidden;
- (bool)isMinimized;
- (bool)isPopupWindow;
- (bool)isPrivateWindow;
- (bool)isTabBarHidden;
- (id)localTabGroup;
- (bool)prefersSidebarVisible;
- (id)privateTabGroup;
- (void)removeActiveTabUUIDForTabGroupWithUUID:(id)arg1;
- (void)removeAllActiveTabUUIDs;
- (id)sceneID;
- (void)setActiveTabGroup:(id)arg1;
- (void)setActiveTabUUID:(id)arg1 forTabGroupWithUUID:(id)arg2;
- (void)setDateClosed:(id)arg1;
- (void)setExtraAttributes:(id)arg1;
- (void)setSceneID:(id)arg1;
- (id)tabGroupsToActiveTabs;
- (void)updateActiveTabGroup;
- (id)uuid;

@end

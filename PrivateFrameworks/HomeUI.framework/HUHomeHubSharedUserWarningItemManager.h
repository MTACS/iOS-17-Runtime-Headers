
@interface HUHomeHubSharedUserWarningItemManager : HFItemManager {
    NSArray * _homes;
    NSMapTable * _homesToUsersMap;
}

@property (nonatomic, retain) NSArray *homes;
@property (nonatomic, retain) NSMapTable *homesToUsersMap;

- (void).cxx_destruct;
- (id)_buildItemProvidersForHome:(id)arg1;
- (id)_buildSectionsWithDisplayedItems:(id)arg1;
- (id)homes;
- (id)homesToUsersMap;
- (id)initWithDelegate:(id)arg1 homesToUsersMap:(id)arg2;
- (id)initWithDelegate:(id)arg1 sourceItem:(id)arg2;
- (void)setHomes:(id)arg1;
- (void)setHomesToUsersMap:(id)arg1;

@end

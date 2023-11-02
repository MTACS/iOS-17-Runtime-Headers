
@interface SHSheetUserDefaultsContext : NSObject {
    NSDictionary * _activitiesByUUID;
    NSArray * _applicationActivityTypes;
    long long  _category;
    NSArray * _excludedActivityTypes;
    NSArray * _favoritesProxies;
    NSArray * _orderedUUIDs;
    NSArray * _suggestionProxies;
}

@property (nonatomic, readonly, copy) NSDictionary *activitiesByUUID;
@property (nonatomic, readonly, copy) NSArray *applicationActivityTypes;
@property (nonatomic, readonly) long long category;
@property (nonatomic, readonly, copy) NSArray *excludedActivityTypes;
@property (nonatomic, readonly, copy) NSArray *favoritesProxies;
@property (nonatomic, readonly, copy) NSArray *orderedUUIDs;
@property (nonatomic, readonly, copy) NSArray *suggestionProxies;

- (void).cxx_destruct;
- (id)activitiesByUUID;
- (id)applicationActivityTypes;
- (long long)category;
- (id)description;
- (id)excludedActivityTypes;
- (id)favoritesProxies;
- (id)initWithApplicationActivityTypes:(id)arg1 activitiesByUUID:(id)arg2 favoritesProxies:(id)arg3 suggestionProxies:(id)arg4 orderedUUIDs:(id)arg5 excludedActivityTypes:(id)arg6 activityCategory:(long long)arg7;
- (id)orderedUUIDs;
- (id)suggestionProxies;

@end

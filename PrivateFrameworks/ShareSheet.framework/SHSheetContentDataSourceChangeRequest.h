
@interface SHSheetContentDataSourceChangeRequest : NSObject {
    NSArray * _actionProxies;
    NSDictionary * _activitiesByUUID;
    bool  _animated;
    long long  _excludeSectionTypes;
    bool  _forceReload;
    unsigned int  _nearbyCountSlotID;
    NSArray * _peopleProxies;
    NSArray * _shareProxies;
    SHSheetContentDataSourceState * _state;
}

@property (nonatomic, copy) NSArray *actionProxies;
@property (nonatomic, copy) NSDictionary *activitiesByUUID;
@property (nonatomic) bool animated;
@property (nonatomic) long long excludeSectionTypes;
@property (nonatomic) bool forceReload;
@property (nonatomic) unsigned int nearbyCountSlotID;
@property (nonatomic, copy) NSArray *peopleProxies;
@property (nonatomic, copy) NSArray *shareProxies;
@property (nonatomic, retain) SHSheetContentDataSourceState *state;

+ (id)changeRequestForPeopleProxies:(id)arg1 shareProxies:(id)arg2 actionProxies:(id)arg3 nearbyCountSlotID:(unsigned int)arg4 activitiesByUUID:(id)arg5;
+ (id)changeRequestFromState:(id)arg1;

- (void).cxx_destruct;
- (id)actionProxies;
- (id)activitiesByUUID;
- (bool)animated;
- (long long)excludeSectionTypes;
- (bool)forceReload;
- (unsigned int)nearbyCountSlotID;
- (id)peopleProxies;
- (void)setActionProxies:(id)arg1;
- (void)setActivitiesByUUID:(id)arg1;
- (void)setAnimated:(bool)arg1;
- (void)setExcludeSectionTypes:(long long)arg1;
- (void)setForceReload:(bool)arg1;
- (void)setNearbyCountSlotID:(unsigned int)arg1;
- (void)setPeopleProxies:(id)arg1;
- (void)setShareProxies:(id)arg1;
- (void)setState:(id)arg1;
- (id)shareProxies;
- (id)state;

@end

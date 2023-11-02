
@interface SHSheetContentDataSource : NSObject {
    NSArray * _actionProxies;
    UIAirDropNode * _airDropProxy;
    NSDiffableDataSourceSnapshot * _diffableSnapshot;
    long long  _excludeSectionTypes;
    unsigned int  _nearbyCountSlotID;
    NSArray * _peopleProxies;
    NSArray * _shareProxies;
    _UIUserDefaultsActivity * _shareUserDefaultsActivity;
    SHSheetContentDataSourceState * _state;
}

@property (nonatomic, readonly, copy) NSArray *actionProxies;
@property (nonatomic, readonly) UIAirDropNode *airDropProxy;
@property (nonatomic, readonly) NSDiffableDataSourceSnapshot *diffableSnapshot;
@property (nonatomic, readonly) long long excludeSectionTypes;
@property (nonatomic, readonly) unsigned int nearbyCountSlotID;
@property (nonatomic, readonly, copy) NSArray *peopleProxies;
@property (nonatomic, readonly, copy) NSArray *shareProxies;
@property (nonatomic, readonly) _UIUserDefaultsActivity *shareUserDefaultsActivity;
@property (nonatomic, readonly) SHSheetContentDataSourceState *state;

- (void).cxx_destruct;
- (id)_createDiffableSnapshotFromCurrentState;
- (id)actionProxies;
- (id)actionProxyForIdentifier:(id)arg1;
- (id)activityForIdentifier:(id)arg1;
- (id)airDropProxy;
- (bool)containsSectionForIdentifier:(id)arg1;
- (id)createChangeRequestFromCurrentState;
- (id)description;
- (id)diffableSnapshot;
- (long long)excludeSectionTypes;
- (id)identifierForActivity:(id)arg1;
- (id)initWithState:(id)arg1 excludeSectionTypes:(long long)arg2;
- (void)logCurrentState;
- (unsigned int)nearbyCountSlotID;
- (id)peopleProxies;
- (id)peopleProxyForIdentifier:(id)arg1;
- (id)shareProxies;
- (id)shareProxyForIdentifier:(id)arg1;
- (id)shareUserDefaultsActivity;
- (id)state;

@end

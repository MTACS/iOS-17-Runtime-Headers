
@interface HFPersonItem : HFFetchedHomeKitObjectItem <HFPersonLikeItem, NSCopying> {
    HMHome * _home;
    HMPersonManager * _personManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) HMHome *home;
@property (nonatomic, readonly, copy) HMPerson *person;
@property (nonatomic, readonly) HMPersonManager *personManager;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_homeKitObjectFetch;
- (id)_subclass_updateWithOptions:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)home;
- (id)initWithPerson:(id)arg1 fromPersonManager:(id)arg2 home:(id)arg3;
- (id)person;
- (id)personManager;

@end

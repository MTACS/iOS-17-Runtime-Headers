
@interface HMMHomeCounterGroup : HMMNamedCounterGroup {
    HMMHomeGroup * _coreDataGroup;
    long long  _coreDataGroupToken;
    NSUUID * _homeUUID;
}

@property (nonatomic, retain) HMMHomeGroup *coreDataGroup;
@property (nonatomic, readonly) NSUUID *homeUUID;

- (void).cxx_destruct;
- (id)coreDataGroup;
- (id)coreDataGroupUsingContext:(id)arg1;
- (id)homeUUID;
- (id)initWithGroupName:(id)arg1 homeUUID:(id)arg2 partitionProvider:(id)arg3 primaryStorage:(id)arg4;
- (void)setCoreDataGroup:(id)arg1;

@end

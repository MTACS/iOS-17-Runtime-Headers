
@interface STUIDataAccessStatusDomainData : NSObject <STStatusDomainData> {
    STListData * _attributionListData;
    NSSet * _userIdentities;
}

@property (nonatomic, readonly, copy) STUIDataAccessStatusDomainData *activeAttributionData;
@property (nonatomic, readonly, copy) NSSet *attributedEntities;
@property (nonatomic, readonly, copy) STListData *attributionListData;
@property (nonatomic, readonly, copy) NSArray *dataAccessAttributions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSSet *executableIdentities;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) STUIDataAccessStatusDomainData *recentAttributionData;
@property (readonly) Class superclass;
@property (nonatomic, readonly, copy) NSSet *userIdentities;

- (void).cxx_destruct;
- (id)_initWithAttributionListData:(id)arg1;
- (id)activeAttributionData;
- (id)attributedEntities;
- (id)attributionListData;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataAccessAttributions;
- (id)dataWithAccessType:(unsigned long long)arg1;
- (id)dataWithAttributedEntity:(id)arg1;
- (id)dataWithEntitiesThatAreSystemServices:(bool)arg1;
- (id)dataWithExecutableIdentity:(id)arg1;
- (id)description;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)executableIdentities;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAttributionListData:(id)arg1;
- (id)initWithData:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)recentAttributionData;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (id)userIdentities;

@end

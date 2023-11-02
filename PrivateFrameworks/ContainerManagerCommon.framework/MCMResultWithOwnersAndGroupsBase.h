
@interface MCMResultWithOwnersAndGroupsBase : MCMResultBase <MCMResultWithOwnersAndGroups> {
    NSMutableSet * _facts;
    NSMutableArray * _mutableGroupIdentifiers;
    NSMutableArray * _mutableOwnerIdentifiers;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) MCMError *error;
@property (nonatomic, readonly) NSArray *groupIdentifiers;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSArray *ownerIdentifiers;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addOwner:(id)arg1 group:(id)arg2;
- (bool)encodeResultOntoReply:(id)arg1;
- (id)groupIdentifiers;
- (id)init;
- (id)ownerIdentifiers;

@end


@interface MCMResultWithOwnersAndGroupsBaseFact : NSObject {
    unsigned long long  _groupIndex;
    unsigned long long  _ownerIndex;
}

@property (nonatomic, readonly) unsigned long long groupIndex;
@property (nonatomic, readonly) unsigned long long ownerIndex;

- (unsigned long long)groupIndex;
- (unsigned long long)hash;
- (id)initWithOwnerIndex:(unsigned long long)arg1 groupIndex:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (unsigned long long)ownerIndex;

@end

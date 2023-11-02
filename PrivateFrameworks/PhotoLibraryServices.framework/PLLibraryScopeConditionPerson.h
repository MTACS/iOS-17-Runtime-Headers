
@interface PLLibraryScopeConditionPerson : PLLibraryScopeCondition {
    NSArray * _personUUIDs;
}

@property (nonatomic, copy) NSArray *personUUIDs;

+ (id)conditionWithSingleQueries:(id)arg1 criteria:(unsigned char)arg2;
+ (bool)supportsQueryKey:(int)arg1;

- (void).cxx_destruct;
- (id)conditionQuery;
- (id)description;
- (id)personUUIDs;
- (bool)removePersonUUID:(id)arg1;
- (bool)replaceTombstonePersonUUID:(id)arg1 withPersonUUID:(id)arg2;
- (void)setPersonUUIDs:(id)arg1;
- (unsigned char)type;

@end

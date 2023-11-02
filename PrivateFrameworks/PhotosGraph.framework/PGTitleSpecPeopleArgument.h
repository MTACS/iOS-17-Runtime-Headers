
@interface PGTitleSpecPeopleArgument : PGTitleSpecArgument {
    NSSet * _personNodes;
    unsigned long long  _type;
}

@property (readonly) NSSet *personNodes;
@property (readonly) unsigned long long type;

+ (id)argumentWithPeopleType:(unsigned long long)arg1;
+ (id)argumentWithPeopleType:(unsigned long long)arg1 personNodes:(id)arg2;

- (void).cxx_destruct;
- (id)_birthdayTitleWithMomentNodes:(id)arg1;
- (id)_groupTitleWithFeature:(id)arg1 graph:(id)arg2 allowedGroupsFormat:(unsigned long long)arg3;
- (id)_groupTitleWithMomentNodes:(id)arg1 allowedGroupsFormat:(unsigned long long)arg2;
- (id)_initWithPeopleType:(unsigned long long)arg1 personNodes:(id)arg2;
- (id)_personNodesWithMomentNodes:(id)arg1;
- (id)_personTitleWithFeature:(id)arg1 graph:(id)arg2;
- (id)_personTitleWithMomentNodes:(id)arg1;
- (id)_resolvedStringWithMomentNodes:(id)arg1 argumentEvaluationContext:(id)arg2;
- (id)_resolvedStringWithMomentNodes:(id)arg1 features:(id)arg2 argumentEvaluationContext:(id)arg3;
- (id)initWithPeopleType:(unsigned long long)arg1;
- (id)personNodes;
- (unsigned long long)type;

@end

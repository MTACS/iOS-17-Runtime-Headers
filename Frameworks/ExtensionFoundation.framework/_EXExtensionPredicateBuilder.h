
@interface _EXExtensionPredicateBuilder : NSObject {
    struct _EXExtensionActivationRules { id x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; } * _activationRules;
    NSDictionary * _predicateDictionary;
    bool  _strictMatchingSpecified;
    bool  _usesStrictMatching;
    unsigned long long  _version;
}

@property (readonly) struct _EXExtensionActivationRules { id x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; }*activationRules;
@property (readonly) NSDictionary *predicateDictionary;
@property (readonly) bool strictMatchingSpecified;
@property (readonly) bool usesStrictMatching;
@property (readonly) unsigned long long version;

- (void).cxx_destruct;
- (struct _EXExtensionActivationRules { id x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; }*)activationRules;
- (id)applyRuleWithRuleName:(id)arg1 acceptRule:(id)arg2 rejectRule:(id)arg3 types:(id)arg4 exceptTypes:(id)arg5 parentType:(id)arg6 children:(id)arg7 parentAccepted:(bool)arg8 accepted:(bool*)arg9 acceptedTypesInSubtree:(id*)arg10 exceptTypesInSubtree:(id*)arg11;
- (id)gatherChildrenPredicateWithRuleDictionary:(id)arg1 parentType:(id)arg2 parentAccepted:(bool)arg3 acceptedChildTypes:(id*)arg4 exceptChildTypes:(id*)arg5;
- (id)initWithActivationRules:(struct _EXExtensionActivationRules { id x1; id x2; id x3; id x4; id x5; id x6; id x7; id x8; }*)arg1 predicateDictionary:(id)arg2;
- (id)makePredicate;
- (id)predicateDictionary;
- (id)predicateForCountingRule:(id)arg1 type:(id)arg2 exceptTypes:(id)arg3 specifiedCount:(int)arg4;
- (id)predicateForRejectExceptOtherTypesRule:(id)arg1 type:(id)arg2 otherTypes:(id)arg3;
- (bool)strictMatchingSpecified;
- (bool)usesStrictMatching;
- (unsigned long long)version;

@end

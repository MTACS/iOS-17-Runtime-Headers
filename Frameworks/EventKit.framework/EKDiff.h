
@interface EKDiff : NSObject {
    NSSet * _differentIdentityKeys;
    NSSet * _differentImmutableKeys;
    NSSet * _differentRelationshipMultiValueKeys;
    NSSet * _differentRelationshipSingleValueKeys;
    NSSet * _differentSingleValueKeys;
    EKObject * _firstObject;
    NSDictionary * _relationshipMultiValueAdds;
    NSDictionary * _relationshipMultiValueModifies;
    NSDictionary * _relationshipMultiValueRemoves;
    NSDictionary * _relationshipSingleValueModifies;
    int  _result;
    EKObject * _secondObject;
}

@property (nonatomic, retain) NSSet *differentIdentityKeys;
@property (nonatomic, retain) NSSet *differentImmutableKeys;
@property (nonatomic, retain) NSSet *differentRelationshipMultiValueKeys;
@property (nonatomic, retain) NSSet *differentRelationshipSingleValueKeys;
@property (nonatomic, retain) NSSet *differentSingleValueKeys;
@property (nonatomic, retain) EKObject *firstObject;
@property (nonatomic, retain) NSDictionary *relationshipMultiValueAdds;
@property (nonatomic, retain) NSDictionary *relationshipMultiValueModifies;
@property (nonatomic, retain) NSDictionary *relationshipMultiValueRemoves;
@property (nonatomic, retain) NSDictionary *relationshipSingleValueModifies;
@property (nonatomic) int result;
@property (nonatomic, retain) EKObject *secondObject;

+ (id)_addChangeStarIfChangedKey:(id)arg1 onObject:(id)arg2;
+ (void)_addObject:(id)arg1 forKey:(id)arg2 toDiff:(id)arg3;
+ (void)_addPaddedHeaderToMutableString:(id)arg1 forKey:(id)arg2 withDepth:(long long)arg3;
+ (void)_addSummaryWithDepth:(long long)arg1 toMutableString:(id)arg2 forRelationshipMultiValueKeys:(id)arg3 firstObject:(id)arg4 secondObject:(id)arg5;
+ (void)_addSummaryWithDepth:(long long)arg1 toMutableString:(id)arg2 forRelationshipSingleValueKeys:(id)arg3 firstObject:(id)arg4 secondObject:(id)arg5;
+ (void)_addSummaryWithDepth:(long long)arg1 toMutableString:(id)arg2 forSingleValueKeys:(id)arg3 firstObject:(id)arg4 secondObject:(id)arg5;
+ (id)_indentStringAtDepth:(long long)arg1;
+ (id)_keysToIgnoreForComputingDiff;
+ (void)_populateIdentityKeysForDiff:(id)arg1;
+ (void)_populateImmutableKeysForDiff:(id)arg1;
+ (void)_populateMultiValueRelationshipKeysForDiff:(id)arg1;
+ (void)_populateSingleValueKeysForDiff:(id)arg1;
+ (void)_populateSingleValueRelationshipKeysForDiff:(id)arg1;
+ (id)_summaryKeyForMultiValueChange:(id)arg1 ofPropertyKey:(id)arg2;
+ (id)diffBetweenObject:(id)arg1 andObject:(id)arg2;
+ (id)summaryKeyForChangedProperty:(id)arg1 subProperty:(id)arg2;
+ (id)summaryKeyForMultiValueAddOfPropertyKey:(id)arg1;
+ (id)summaryKeyForMultiValueModifyOfPropertyKey:(id)arg1;
+ (id)summaryKeyForMultiValueRemoveOfPropertyKey:(id)arg1;

- (void).cxx_destruct;
- (id)_multiValueModifiedObjectsForKey:(id)arg1;
- (id)_nonNilObject;
- (void)_summarizeDiffsBetweenFirstObject:(id)arg1 secondObject:(id)arg2 mutableString:(id)arg3 depth:(long long)arg4;
- (id)changeSetForDiff;
- (id)copyOfObject:(id)arg1 alreadyCopiedObjects:(id)arg2 madeNewCopy:(bool*)arg3;
- (id)differentIdentityKeys;
- (id)differentImmutableKeys;
- (id)differentKeys;
- (id)differentRelationshipMultiValueKeys;
- (id)differentRelationshipSingleValueKeys;
- (id)differentSingleValueKeys;
- (id)firstObject;
- (id)initWithFirstObject:(id)arg1 secondObject:(id)arg2;
- (id)relationshipMultiValueAdds;
- (id)relationshipMultiValueModifies;
- (id)relationshipMultiValueRemoves;
- (id)relationshipSingleValueModifies;
- (int)result;
- (id)secondObject;
- (void)setDifferentIdentityKeys:(id)arg1;
- (void)setDifferentImmutableKeys:(id)arg1;
- (void)setDifferentRelationshipMultiValueKeys:(id)arg1;
- (void)setDifferentRelationshipSingleValueKeys:(id)arg1;
- (void)setDifferentSingleValueKeys:(id)arg1;
- (void)setFirstObject:(id)arg1;
- (void)setRelationshipMultiValueAdds:(id)arg1;
- (void)setRelationshipMultiValueModifies:(id)arg1;
- (void)setRelationshipMultiValueRemoves:(id)arg1;
- (void)setRelationshipSingleValueModifies:(id)arg1;
- (void)setResult:(int)arg1;
- (void)setSecondObject:(id)arg1;
- (id)summaryDictionary;
- (id)summaryString;

@end

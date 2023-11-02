
@interface PLLibraryScopeConditionUnknown : PLLibraryScopeCondition {
    NSArray * _unknownSingleQueries;
}

@property (nonatomic, copy) NSArray *unknownSingleQueries;

+ (id)conditionWithSingleQueries:(id)arg1 criteria:(unsigned char)arg2;
+ (bool)supportsQueryKey:(int)arg1;

- (void).cxx_destruct;
- (id)conditionQuery;
- (void)setUnknownSingleQueries:(id)arg1;
- (unsigned char)type;
- (id)unknownSingleQueries;

@end


@interface FilterElementDefinition : NSObject {
    unsigned long long  _auxValue;
    bool  _hasAuxValue;
    unsigned long long  _mask;
    NSString * _namedLink;
    NSString * _rootName;
    unsigned long long  _rule;
    NSMutableDictionary * _setOfMatches;
    int  _subAuxValueCount;
    unsigned long long  _subMask;
    unsigned long long  _subRule;
    FilterElementDefinition * _superWildCard;
    FilterElementDefinition * _wildCard;
}

- (void)addRuleField:(int)arg1 value:(int)arg2 hasAuxValue:(bool)arg3 auxValue:(unsigned long long)arg4 inside:(bool)arg5 forPathComponents:(id)arg6 permitLink:(bool)arg7 componentIndex:(int)arg8 parentElement:(id)arg9 copyParentWildcardLink:(bool)arg10;
- (void)dealloc;
- (void)dump:(int)arg1;
- (void)dumpAttributesInto:(char *)arg1 forLevel:(int)arg2;
- (struct { unsigned int x1; unsigned char x2; })encodeInto:(struct _MDPlistContainer { }*)arg1 auxArray:(id)arg2 namedRootMap:(id)arg3;
- (id)initAsRoot:(id)arg1;
- (bool)isBottomValue;

@end

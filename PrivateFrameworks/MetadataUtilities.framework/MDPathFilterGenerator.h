
@interface MDPathFilterGenerator : NSObject {
    unsigned long long  _atBundleMask;
    NSMutableArray * _auxValueArray;
    int  _auxValueCount;
    unsigned long long  _defaultMask;
    unsigned long long  _defaultRule;
    unsigned long long  _ignoreMask;
    unsigned long long  _inBundleMask;
    unsigned long long  _inheritMask;
    NSMutableDictionary * _namedLinkExtensionsDictionary;
    NSDictionary * _namedLinkPrefixesDictionary;
    NSMutableArray * _namedRootArray;
    NSMutableDictionary * _namedRootIndexes;
    NSMutableDictionary * _namedRoots;
    int  _nextAuxValueIndex;
    bool  _processExtensions;
}

- (void)addMappedExtensions:(id)arg1;
- (void)addNamed:(id)arg1 auxValue:(unsigned long long)arg2 forPath:(id)arg3;
- (void)addNamed:(id)arg1 field:(int)arg2 value:(int)arg3 forPath:(id)arg4 permitLink:(bool)arg5;
- (void)addNamed:(id)arg1 field:(int)arg2 value:(int)arg3 hasAuxValue:(bool)arg4 auxValue:(unsigned long long)arg5 forPath:(id)arg6 permitLink:(bool)arg7 copyParentWildcardLink:(bool)arg8;
- (void)addRules:(struct { unsigned long long x1[32]; id x2; }*)arg1 withPrefix:(id)arg2;
- (void)addRules:(struct { unsigned long long x1[32]; id x2; }*)arg1 withPrefix:(id)arg2 tableMapping:(id)arg3;
- (struct _MDPlistContainer { }*)copyFilterMDPlistForMountDepth:(int)arg1;
- (void)dealloc;
- (void)dump;
- (id)filterDataForMountDepth:(int)arg1;
- (id)initWithDefaultFieldsAndValues:(int*)arg1 ignoreFields:(int*)arg2 mappedPrefixes:(id)arg3 hiddenExtensions:(id)arg4 mappedExtensions:(id)arg5;
- (void)setAtBundleField:(unsigned int)arg1 inBundleField:(unsigned int)arg2;

@end

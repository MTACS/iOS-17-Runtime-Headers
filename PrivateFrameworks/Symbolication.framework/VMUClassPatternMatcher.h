
@interface VMUClassPatternMatcher : NSObject {
    unsigned long long  _allocationSizeLowerBound;
    unsigned long long  _allocationSizeUpperBound;
    struct { int x1; unsigned long long x2; char *x3; struct re_guts {} *x4; } * _classesRegex;
    bool  _matchingKindOfClass;
    struct __CFDictionary { } * _memoizedRegexResult;
    bool  _patternMatchesNonObjects;
    struct { int x1; unsigned long long x2; char *x3; struct re_guts {} *x4; } * _vmRegionsRegex;
}

@property (getter=isMatchingKindOfClass, nonatomic) bool matchingKindOfClass;

- (bool)_matchesClassInfo:(id)arg1;
- (bool)_parseMallocSizePattern:(id)arg1 error:(id*)arg2;
- (bool)_regex:(struct { int x1; unsigned long long x2; char *x3; struct re_guts {} *x4; }*)arg1 matchesName:(id)arg2;
- (void)dealloc;
- (id)initWithPattern:(id)arg1 forArgument:(id)arg2 error:(id*)arg3;
- (bool)isMatchingKindOfClass;
- (bool)matchesNodeDetails:(struct { unsigned long long x1; unsigned int x2 : 60; unsigned int x3 : 4; id x4; })arg1 orNodeDescription:(id)arg2;
- (void)resetCachedMatches;
- (void)setMatchingKindOfClass:(bool)arg1;

@end

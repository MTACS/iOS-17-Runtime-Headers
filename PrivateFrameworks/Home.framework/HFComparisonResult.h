
@interface HFComparisonResult : NSObject <NSCopying> {
    NSMutableDictionary * _mutableDifferences;
    id  _objectA;
    id  _objectB;
    NSArray * _realDifferences;
}

@property (nonatomic, readonly) NSDictionary *differences;
@property (nonatomic, retain) NSMutableDictionary *mutableDifferences;
@property (nonatomic) id objectA;
@property (nonatomic) id objectB;
@property (nonatomic, readonly) NSArray *realDifferences;

+ (id)resultWithDifference:(id)arg1 priority:(unsigned long long)arg2;

- (void).cxx_destruct;
- (void)add:(id)arg1;
- (void)addAll:(id)arg1;
- (bool)containsCriticalDifference;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptionBuilder;
- (id)differences;
- (id)filteredIgnoringKeys:(id)arg1;
- (bool)hasNoDifferencesHigherThanPriority:(unsigned long long)arg1;
- (id)highestPriorityDifference;
- (id)initWithObjectA:(id)arg1 objectB:(id)arg2;
- (id)mutableDifferences;
- (id)newDifferenceWithKey:(id)arg1 priority:(unsigned long long)arg2 block:(id /* block */)arg3;
- (id)objectA;
- (id)objectB;
- (id)realDifferences;
- (void)setMutableDifferences:(id)arg1;
- (void)setObjectA:(id)arg1;
- (void)setObjectB:(id)arg1;

@end

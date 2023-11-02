
@interface MapsSync.MapsSyncQueryPredicate : NSCompoundPredicate

@property (nonatomic, readonly) Class classForCoder;

+ (Class)classForKeyedUnarchiver;
+ (id)queryPredicateWithFormat:(id)arg1 argumentArray:(id)arg2;

- (Class)classForCoder;
- (id)initWithAnd:(id)arg1;
- (id)initWithCenterLatitude:(double)arg1 centerLongitude:(double)arg2 squareSideLengthMeters:(double)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithFormat:(id)arg1 args:(id)arg2;
- (id)initWithNot:(id)arg1;
- (id)initWithOr:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 subpredicates:(id)arg2;
- (id)not;
- (id)replacementObjectForCoder:(id)arg1;

@end

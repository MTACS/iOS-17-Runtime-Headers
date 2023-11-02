
@interface PPSTimeIntervalSet : NSObject <NSCopying, NSFastEnumeration> {
    PPSTimeIntervalCoalescePolicy * _coalescePolicy;
    double  _maximumValue;
    double  _mean;
    double  _minimumValue;
    double  _sum;
}

@property (readonly) PPSTimeIntervalCoalescePolicy *coalescePolicy;
@property (readonly) unsigned long long count;
@property (readonly, copy) NSDictionary *dictionary;
@property (readonly) double duration;
@property (readonly) double endTimestamp;
@property (readonly) PPSTimeInterval *firstInterval;
@property (readonly) PPSTimeInterval *lastInterval;
@property (readonly) double maximumValue;
@property (readonly) double mean;
@property (readonly) double minimumValue;
@property (readonly) double startTimestamp;
@property (readonly) double sum;
@property (readonly) double timeWeightedMean;
@property (readonly) double timeWeightedSum;

- (void).cxx_destruct;
- (id)JSONRepresentation;
- (void)addTimeInterval:(id)arg1;
- (id)coalescePolicy;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)dictionary;
- (id)differenceFromIntervalSet:(id)arg1;
- (double)duration;
- (double)endTimestamp;
- (id)filteredIntervalSetUsingPredicate:(id)arg1;
- (id)firstInterval;
- (id)initWithCoalescePolicy:(id)arg1;
- (id)initWithTimeInterval:(id)arg1 coalescePolicy:(id)arg2;
- (id)initWithTimeIntervalSet:(id)arg1 coalescePolicy:(id)arg2;
- (id)intersectingIntervalForTimeInterval:(id)arg1;
- (id)intersectingIntervalForTimestamp:(double)arg1;
- (id)intersectionFromIntervalSet:(id)arg1;
- (bool)intersectsIntervalSet:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)lastInterval;
- (double)maximumValue;
- (double)mean;
- (double)minimumValue;
- (void)removeAllIntervals;
- (double)startTimestamp;
- (double)sum;
- (double)timeWeightedMean;
- (double)timeWeightedSum;
- (id)unionWithIntervalSet:(id)arg1;

@end

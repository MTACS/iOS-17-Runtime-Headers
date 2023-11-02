
@interface PPSTimeSeries : NSObject <NSCopying, NSFastEnumeration, NSSecureCoding> {
    NSMutableArray * _events;
    bool  _isSorted;
    NSData * _sortHint;
}

@property (readonly) NSArray *allTimestamps;
@property (readonly) NSArray *array;
@property (readonly) unsigned long long count;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) PPSEvent *firstObject;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) PPSEvent *lastObject;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)JSONRepresentation;
- (void)_guaranteeSortedness;
- (void)addEvent:(id)arg1;
- (id)allTimestamps;
- (id)array;
- (bool)containsEvent:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (id)debugDescription;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (void)enumerateObjectsUsingBlock:(id /* block */)arg1;
- (void)filterUsingPredicate:(id)arg1;
- (id)filteredTimeSeriesUsingPredicate:(id)arg1;
- (id)firstObject;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithEvents:(id)arg1;
- (id)initWithEvents:(id*)arg1 count:(unsigned long long)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTimeSeries:(id)arg1;
- (id)lastObject;
- (void)mergeWithTimeSeries:(id)arg1;
- (id)metricValuesForKey:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)objectEnumerator;
- (void)removeAllEvents;
- (void)removeEvent:(id)arg1;
- (id)reverseObjectEnumerator;
- (id)sortedArrayUsingComparator:(id /* block */)arg1;

@end

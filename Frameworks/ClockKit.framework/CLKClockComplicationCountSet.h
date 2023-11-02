
@interface CLKClockComplicationCountSet : NSObject <NSCopying> {
    NSMutableOrderedSet * _orderedSet;
}

@property (nonatomic, readonly) NSOrderedSet *orderedSet;

- (void).cxx_destruct;
- (void)appendCount:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (void)mergeSet:(id)arg1;
- (id)orderedSet;

@end

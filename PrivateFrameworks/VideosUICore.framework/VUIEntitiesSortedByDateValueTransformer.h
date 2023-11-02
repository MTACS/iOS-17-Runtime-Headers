
@interface VUIEntitiesSortedByDateValueTransformer : NSValueTransformer {
    id /* block */  _dateForEntityBlock;
    NSDate * _earliestDate;
    unsigned long long  _maxEntities;
}

@property (nonatomic, copy) id /* block */ dateForEntityBlock;
@property (nonatomic, copy) NSDate *earliestDate;
@property (nonatomic) unsigned long long maxEntities;

+ (bool)allowsReverseTransformation;
+ (Class)transformedValueClass;

- (void).cxx_destruct;
- (id /* block */)dateForEntityBlock;
- (id)earliestDate;
- (id)init;
- (id)initWithDateForEntityBlock:(id /* block */)arg1;
- (unsigned long long)maxEntities;
- (void)setDateForEntityBlock:(id /* block */)arg1;
- (void)setEarliestDate:(id)arg1;
- (void)setMaxEntities:(unsigned long long)arg1;
- (id)transformedValue:(id)arg1;

@end

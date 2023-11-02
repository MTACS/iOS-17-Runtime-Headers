
@interface PGGraphAddressEdgeCollection : PGGraphEdgeCollection

@property (nonatomic, readonly) unsigned long long numberOfAssets;
@property (nonatomic, readonly) NSSet *universalDateIntervals;
@property (nonatomic, readonly) NSDate *universalStartDate;

+ (Class)edgeClass;

- (unsigned long long)numberOfAssets;
- (id)universalDateIntervals;
- (id)universalStartDate;

@end

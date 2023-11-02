
@interface HMMNamedGroup : NSManagedObject

@property (nonatomic, retain) NSSet *counters;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, retain) NSSet *valueStatistics;

+ (id)fetchRequest;

@end

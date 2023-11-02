
@interface HMMNamedGroupValueStatistics : NSManagedObject

@property (nonatomic) long long count;
@property (nonatomic, copy) NSDate *date;
@property (nonatomic, retain) HMMNamedGroup *group;
@property (nonatomic) long long max;
@property (nonatomic) long long min;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) long long sum;

+ (id)fetchRequest;

@end

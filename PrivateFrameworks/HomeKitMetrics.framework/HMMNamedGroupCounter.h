
@interface HMMNamedGroupCounter : NSManagedObject

@property (nonatomic, copy) NSDate *date;
@property (nonatomic, retain) HMMNamedGroup *group;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) long long value;

+ (id)fetchRequest;

@end

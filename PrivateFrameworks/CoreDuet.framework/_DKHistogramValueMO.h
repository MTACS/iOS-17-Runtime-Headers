
@interface _DKHistogramValueMO : NSManagedObject

@property (nonatomic, copy) NSNumber *count;
@property (nonatomic, retain) _DKHistogramMO *histogram;
@property (nonatomic, copy) NSNumber *integerValue;
@property (nonatomic, copy) NSString *stringValue;

+ (id)fetchRequest;

@end

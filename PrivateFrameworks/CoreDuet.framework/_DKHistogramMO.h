
@interface _DKHistogramMO : NSManagedObject

@property (nonatomic, copy) NSString *customIdentifier;
@property (nonatomic, copy) NSString *deviceIdentifier;
@property (nonatomic, copy) NSDate *endDate;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSDate *startDate;
@property (nonatomic, copy) NSString *streamName;
@property (nonatomic, copy) NSNumber *streamTypeCode;
@property (nonatomic, retain) NSSet *value;

+ (id)fetchRequest;

@end

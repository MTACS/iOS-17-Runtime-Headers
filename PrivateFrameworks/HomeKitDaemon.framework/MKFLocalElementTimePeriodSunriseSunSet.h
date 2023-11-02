
@interface MKFLocalElementTimePeriodSunriseSunSet : MKFLocalElementTimePeriod

@property (nonatomic, retain) NSDateComponents *offset;
@property (nonatomic, copy) NSNumber *offsetSeconds;
@property (nonatomic, copy) NSString *significantEvent;

+ (id)fetchRequest;

@end

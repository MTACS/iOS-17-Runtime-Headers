
@interface MKFLocalElementTimePeriodTimeOfDay : MKFLocalElementTimePeriod

@property (nonatomic, copy) NSNumber *hour;
@property (nonatomic, copy) NSNumber *minute;

+ (id)fetchRequest;

@end

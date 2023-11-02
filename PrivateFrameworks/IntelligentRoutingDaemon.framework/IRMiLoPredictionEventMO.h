
@interface IRMiLoPredictionEventMO : NSManagedObject

@property (nonatomic, retain) IRHistoryEventMO *historyEvent;
@property (nonatomic, retain) NSString *label;
@property (nonatomic, retain) NSString *labelRealTime;
@property (nonatomic, retain) NSString *predictionId;
@property (nonatomic, retain) NSString *predictionIdRealTime;

+ (id)fetchRequest;
+ (id)miloPredictionEventMOWithmiloPredictionEventDO:(id)arg1 historyEventMO:(id)arg2 inManagedObjectContext:(id)arg3;
+ (void)setPropertiesOfMiloPredictionEventMO:(id)arg1 withMiloPredictionEventDO:(id)arg2;

- (id)convert;

@end


@interface IRMiLoLSLPredictionMO : NSManagedObject

@property (nonatomic) long long confidence;
@property (nonatomic) long long confidenceReasonBitmap;
@property (nonatomic) long long miLoServiceQuality;
@property (nonatomic) long long miLoServiceQualityReasonBitmap;
@property (nonatomic, retain) NSSet *nearbyDevices;
@property (nonatomic, copy) NSString *predictionId;
@property (nonatomic, retain) NSDate *predictionTime;
@property (nonatomic, retain) IRReplayEventMO *replayEvent;
@property (nonatomic, retain) NSSet *scores;

+ (id)fetchRequest;
+ (id)miLoLSLPredictionMOWithMiLoLSLPredictionDO:(id)arg1 replayEvent:(id)arg2 inManagedObjectContext:(id)arg3;
+ (void)setPropertiesOfMiLoLSLPredictionMO:(id)arg1 withMiLoLSLPredictionDO:(id)arg2 inManagedObjectContext:(id)arg3;

- (id)convert;

@end

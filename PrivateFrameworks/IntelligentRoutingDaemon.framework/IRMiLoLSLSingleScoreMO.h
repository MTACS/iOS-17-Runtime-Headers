
@interface IRMiLoLSLSingleScoreMO : NSManagedObject

@property (nonatomic, copy) NSString *eventId;
@property (nonatomic, retain) IRMiLoLSLPredictionMO *prediction;
@property (nonatomic) double score;

+ (id)fetchRequest;
+ (id)miLoLSLSingleScoreMOWithMiLoLSLSingleScoreDO:(id)arg1 miloPrediction:(id)arg2 inManagedObjectContext:(id)arg3;
+ (void)setPropertiesOfMiLoLSLSingleScoreMO:(id)arg1 IRMiLoLSLSingleScoreDO:(id)arg2;

- (id)convert;

@end

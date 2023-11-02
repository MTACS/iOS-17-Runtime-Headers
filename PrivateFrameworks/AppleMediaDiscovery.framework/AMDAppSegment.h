
@interface AMDAppSegment : NSManagedObject

@property (nonatomic) long long adamId;
@property (nonatomic, copy) NSString *algoId;
@property (nonatomic, copy) NSString *segment;
@property (nonatomic, copy) NSString *treatmentId;

+ (id)assignSegmentsToApps:(id)arg1 withFeatureDictionary:(id)arg2 predicate:(id)arg3;
+ (id)assignSegmentsWithParameters:(id)arg1 error:(id*)arg2;
+ (id)computeSegmentsForApps:(id)arg1 withRules:(id)arg2 error:(id*)arg3;
+ (id)deleteAllSegments:(id*)arg1;
+ (bool)evaluatePredicate:(id)arg1 withOperands:(id)arg2;
+ (id)fetchRequest;
+ (id)getSegmentsDictForAllTreatments:(id*)arg1;
+ (id)getSegmentsForTreatmentId:(id)arg1 error:(id*)arg2;
+ (id)getSegmentsInfoForTreatment:(id)arg1 error:(id*)arg2;
+ (id)refreshSegments:(id)arg1 error:(id*)arg2;
+ (id)refreshSegmentsForAllTreatmentsForUser:(id)arg1 error:(id*)arg2;
+ (void)saveSegments:(id)arg1 withTreatmentId:(id)arg2 andAlgoId:(id)arg3 error:(id*)arg4;
+ (void)validatePredicate:(id)arg1 withFeatureList:(id)arg2 error:(id*)arg3;

@end

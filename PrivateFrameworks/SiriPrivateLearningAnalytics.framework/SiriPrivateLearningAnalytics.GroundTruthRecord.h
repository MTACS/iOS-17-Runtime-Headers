
@interface SiriPrivateLearningAnalytics.GroundTruthRecord : NSManagedObject

@property (nonatomic, copy) NSUUID *id;
@property (nonatomic, copy) NSData *payload;
@property (nonatomic) double timestamp;
@property (nonatomic, copy) NSString *type;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end

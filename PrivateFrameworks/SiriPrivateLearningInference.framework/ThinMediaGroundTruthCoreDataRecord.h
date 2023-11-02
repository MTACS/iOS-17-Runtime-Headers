
@interface ThinMediaGroundTruthCoreDataRecord : NSManagedObject

@property (nonatomic, copy) NSData *groundTruthSource;
@property (nonatomic, copy) NSString *groundTruthType;
@property (nonatomic, copy) NSUUID *id;
@property (nonatomic, retain) PlusMediaSuggestionCoreDataRecord *plusMediaSuggestion;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end

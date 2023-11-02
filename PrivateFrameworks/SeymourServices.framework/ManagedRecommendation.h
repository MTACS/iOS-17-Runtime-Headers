
@interface ManagedRecommendation : NSManagedObject

@property (nonatomic) int index;
@property (nonatomic, copy) NSString *reason;
@property (nonatomic, copy) NSString *referenceIdentifier;
@property (nonatomic, copy) NSString *referenceType;
@property (nonatomic, copy) NSString *shelfMarker;
@property (nonatomic, copy) NSString *source;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end


@interface ManagedPrivacyAcknowledgement : NSManagedObject

@property (nonatomic, copy) NSString *feature;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end

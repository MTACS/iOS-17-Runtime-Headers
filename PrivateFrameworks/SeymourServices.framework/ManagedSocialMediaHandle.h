
@interface ManagedSocialMediaHandle : NSManagedObject

@property (nonatomic, retain) NSSet *contributor;
@property (nonatomic, copy) NSString *platform;
@property (nonatomic, retain) NSSet *trainerMetadata;
@property (nonatomic, copy) NSString *url;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end

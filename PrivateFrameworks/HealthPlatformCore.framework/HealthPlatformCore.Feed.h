
@interface HealthPlatformCore.Feed : NSManagedObject

@property (nonatomic, retain) _TtC18HealthPlatformCore7Profile *associatedProfile;
@property (nonatomic, copy) NSDate *dateUpdated;
@property (nonatomic, copy) NSString *kindRawValue;
@property (nonatomic, retain) NSOrderedSet *sections;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end


@interface ManagedNoticePrivacyPreference : NSManagedObject

@property (nonatomic) int state;
@property (nonatomic, copy) NSString *version;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end

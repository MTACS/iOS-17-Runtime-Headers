
@interface CNDuplicateSet : NSManagedObject

@property (nonatomic, retain) NSSet *cohorts;
@property (nonatomic) bool isAvailable;
@property (nonatomic) bool isIgnored;
@property (nonatomic, copy) NSString *primaryID;
@property (nonatomic, retain) CNDuplicateSetContactImage *selectedContactImage;
@property (nonatomic, retain) CNDuplicateSetContactPoster *selectedContactPoster;
@property (nonatomic, copy) NSString *signature;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end

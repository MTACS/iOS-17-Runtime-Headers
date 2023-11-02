
@interface ManagedBookmark : NSManagedObject

@property (nonatomic, copy) NSDate *dateBookmarked;
@property (nonatomic, copy) NSString *referenceIdentifier;
@property (nonatomic, copy) NSString *referenceType;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end

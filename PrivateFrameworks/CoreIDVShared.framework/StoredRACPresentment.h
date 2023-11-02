
@interface StoredRACPresentment : NSManagedObject

@property (nonatomic, copy) NSString *analyticsID;
@property (nonatomic, retain) StoredRACCredential *credential;
@property (nonatomic, copy) NSString *presentmentID;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end

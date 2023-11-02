
@interface StoredRACCredential : NSManagedObject

@property (nonatomic, copy) NSString *analyticsID;
@property (nonatomic, copy) NSString *credentialIdentifier;
@property (nonatomic, copy) NSDate *lastReportTime;
@property (nonatomic, retain) NSSet *presentments;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end

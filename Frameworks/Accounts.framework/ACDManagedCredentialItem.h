
@interface ACDManagedCredentialItem : NSManagedObject

@property (nonatomic, retain) NSString *accountIdentifier;
@property (nonatomic, retain) NSDate *expirationDate;
@property (nonatomic, retain) NSNumber *persistent;
@property (nonatomic, retain) NSString *serviceName;

@end

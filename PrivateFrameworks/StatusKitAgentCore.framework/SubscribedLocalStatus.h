
@interface SubscribedLocalStatus : NSManagedObject

@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *idsIdentifier;
@property (nonatomic, copy) NSString *keyDomain;
@property (nonatomic, copy) NSString *keyName;
@property (nonatomic, copy) NSDate *modificationDate;
@property (nonatomic, retain) NSData *payload;

+ (id)fetchRequest;
+ (id)identifierKeyPath;
+ (id)idsIdentifierKeyPath;
+ (id)predicateForSubscribedLocalStatusIDSIdentifier:(id)arg1;
+ (id)predicateForSubscribedLocalStatusIdentifier:(id)arg1;
+ (id)predicateForSubscribedLocalStatusIdentifier:(id)arg1 idsIdentifier:(id)arg2;

@end

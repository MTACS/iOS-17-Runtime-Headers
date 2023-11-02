
@interface PublishedLocalStatus : NSManagedObject

@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic, retain) NSSet *deliveredDevices;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *keyDomain;
@property (nonatomic, copy) NSString *keyName;
@property (nonatomic, copy) NSDate *modificationDate;
@property (nonatomic, retain) NSData *payload;
@property (nonatomic, retain) NSSet *pendingDevices;
@property (nonatomic) long long targetDevicesFlags;

+ (id)fetchRequest;
+ (id)identifierKeyPath;
+ (id)predicateForPublishedLocalStatusIdentifiers:(id)arg1;

@end


@interface PendingPublishRequest : NSManagedObject

@property (nonatomic, copy) NSDate *dateCreated;
@property (nonatomic, retain) NSData *payloadData;
@property (nonatomic) int retryCount;
@property (nonatomic, copy) NSString *statusTypeIdentifier;
@property (nonatomic, copy) NSString *statusUniqueIdentifier;

+ (id)dateCreatedKeyPath;
+ (id)fetchRequest;
+ (id)predicateForStatusTypeIdentifier:(id)arg1;
+ (id)predicateForStatusUniqueIdentifier:(id)arg1;
+ (id)sortDescriptorForDateCreatedAscending:(bool)arg1;
+ (id)statusTypeIdentifierKeyPath;
+ (id)statusUniqueIdentifierKeyPath;

@end

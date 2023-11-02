
@interface PublishedLocalStatusDevice : NSManagedObject

@property (nonatomic, retain) NSSet *deliveredStatuses;
@property (nonatomic, copy) NSString *idsIdentifier;
@property (nonatomic, retain) NSSet *pendingStatuses;

+ (id)fetchRequest;
+ (id)idsIdentifierKeyPath;
+ (id)predicateForPublishedLocalStatusDeviceIdentifiers:(id)arg1;

@end


@interface MTOfflineKeyData : NSManagedObject

@property (nonatomic, retain) NSData *data;
@property (nonatomic) double expirationDate;
@property (nonatomic, retain) NSString *keyUri;
@property (nonatomic) double lastRenewedDate;
@property (nonatomic) bool pendingDeletion;
@property (nonatomic) long long secureInvalidationDsid;
@property (nonatomic) long long storeTrackId;
@property (nonatomic, retain) NSString *uuid;

@end


@interface STCoreTransportPayload : NSManagedObject

@property (nonatomic, copy) NSArray *destinations;
@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSData *payloadData;
@property (nonatomic, retain) STCoreOrganization *sourceOrganizationEnqueued;
@property (nonatomic, retain) STCoreOrganization *sourceOrganizationPending;
@property (nonatomic, retain) STCoreOrganization *sourceOrganizationRecent;
@property (nonatomic, copy) NSString *type;

+ (id)fetchLastTransportPayloadInContext:(id)arg1 ofType:(id)arg2 error:(id*)arg3;
+ (id)fetchRequestForPayloadsOfType:(id)arg1;
+ (id)fetchTransportPayloadContext:(id)arg1 withIdentifier:(id)arg2 error:(id*)arg3;

- (id)description;
- (id)destinations;
- (void)setDestinations:(id)arg1;

@end

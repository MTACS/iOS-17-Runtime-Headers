
@interface STUserDeviceAddress : NSManagedObject

@property (nonatomic, retain) STCoreDevice *device;
@property (nonatomic, retain) NSString *idsURI;
@property (nonatomic, retain) STCoreUser *user;

+ (id)fetchOrCreateUserDeviceAddressWithUser:(id)arg1 device:(id)arg2 context:(id)arg3 error:(id*)arg4;

@end

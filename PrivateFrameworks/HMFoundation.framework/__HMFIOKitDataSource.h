
@interface __HMFIOKitDataSource : HMFObject <HMFSystemInfoProductInfoDataSource, HMFSystemInfoSerialNumberDataSource>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *modelIdentifier;
@property (nonatomic, readonly) long long productClass;
@property (nonatomic, readonly) long long productPlatform;
@property (nonatomic, readonly) long long productVariant;
@property (nonatomic, readonly, copy) NSString *serialNumber;
@property (readonly) Class superclass;

- (id)modelIdentifier;
- (long long)productClass;
- (long long)productPlatform;
- (long long)productVariant;
- (id)serialNumber;

@end

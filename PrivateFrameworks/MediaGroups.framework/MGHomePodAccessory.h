
@interface MGHomePodAccessory : MGSoloDevice <MGAdvertisementInfoProtocol, MGHomeKitAccessoryProtocol>

@property (nonatomic, readonly, copy) NSNumber *HomePodVariant;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSNumber *productColor;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/MediaGroups.framework/MediaGroups

+ (void)HomePodAccessoryWithConnectionProvider:(id)arg1 HomeKitAccessory:(id)arg2 completion:(id /* block */)arg3;
+ (void)HomePodAccessoryWithHomeKitAccessory:(id)arg1 completion:(id /* block */)arg2;
+ (bool)supportsSecureCoding;
+ (id)type;

- (id)HomeKitAccesoryIdentifier;
- (id)HomeKitAccessoryWithHomeManager:(id)arg1;
- (id)HomePodVariant;
- (id)deviceIdentifier;
- (id)productColor;

// Image: /System/Library/PrivateFrameworks/MediaGroupsDaemon.framework/MediaGroupsDaemon

+ (id)rq_decodedProperties:(id)arg1;

- (id)rq_codedProperties;

@end

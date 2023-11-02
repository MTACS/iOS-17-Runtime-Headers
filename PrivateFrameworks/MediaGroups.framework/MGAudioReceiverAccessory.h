
@interface MGAudioReceiverAccessory : MGSoloDevice <MGAdvertisementInfoProtocol, MGHomeKitAccessoryProtocol>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /System/Library/PrivateFrameworks/MediaGroups.framework/MediaGroups

+ (id)type;

- (id)HomeKitAccesoryIdentifier;
- (id)HomeKitAccessoryWithHomeManager:(id)arg1;
- (id)deviceIdentifier;

// Image: /System/Library/PrivateFrameworks/MediaGroupsDaemon.framework/MediaGroupsDaemon

+ (id)rq_decodedProperties:(id)arg1;

- (id)rq_codedProperties;

@end

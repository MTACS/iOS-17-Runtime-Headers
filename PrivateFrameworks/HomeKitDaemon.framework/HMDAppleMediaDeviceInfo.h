
@interface HMDAppleMediaDeviceInfo : HMFObject {
    HMDDeviceCapabilities * _capabilities;
    NSString * _deviceID;
    NSUUID * _mediaRouteUUID;
    NSUUID * _modelID;
}

@property (nonatomic, readonly) HMDDeviceCapabilities *capabilities;
@property (nonatomic, readonly) NSString *deviceID;
@property (nonatomic, readonly) NSUUID *mediaRouteUUID;
@property (nonatomic, retain) NSUUID *modelID;

- (void).cxx_destruct;
- (id)asPayload;
- (id)attributeDescriptions;
- (id)capabilities;
- (id)deviceID;
- (id)init;
- (id)initWithDeviceID:(id)arg1 mediaRouteID:(id)arg2 deviceCapabilities:(id)arg3;
- (id)initWithPayload:(id)arg1;
- (id)mediaRouteUUID;
- (id)modelID;
- (void)setModelID:(id)arg1;

@end

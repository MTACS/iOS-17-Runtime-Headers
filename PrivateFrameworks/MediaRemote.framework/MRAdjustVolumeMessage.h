
@interface MRAdjustVolumeMessage : MRProtocolMessage

@property (nonatomic, readonly) long long adjustment;
@property (nonatomic, readonly) MRRequestDetails *details;
@property (nonatomic, readonly) NSString *outputDeviceUID;

- (long long)adjustment;
- (id)details;
- (id)initWithAdjustment:(long long)arg1 outputDeviceUID:(id)arg2 details:(id)arg3;
- (id)outputDeviceUID;
- (unsigned long long)type;

@end

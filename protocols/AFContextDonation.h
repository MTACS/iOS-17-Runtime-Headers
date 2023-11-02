
@protocol AFContextDonation <NSObject>

@required

- (void)donateContext:(id <AFContextSnapshot>)arg1 withMetadata:(AFDeviceContextMetadata *)arg2 pushToRemote:(bool)arg3;
- (void)registerContextTransformer:(id <AFContextSnapshotTransforming>)arg1 forType:(NSString *)arg2;

@end

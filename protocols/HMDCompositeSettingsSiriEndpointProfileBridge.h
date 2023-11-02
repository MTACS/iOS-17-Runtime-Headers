
@protocol HMDCompositeSettingsSiriEndpointProfileBridge

@required

- (HMImmutableSettingValue *)readValueValueForAccessoryUUID:(NSUUID *)arg1 homeUUID:(NSUUID *)arg2 forKeyPath:(NSString *)arg3;
- (long long)siriEndpointCertificationReasonForAccessoryUUID:(NSUUID *)arg1 homeUUID:(NSUUID *)arg2 error:(id*)arg3;
- (void)writeSettingValue:(void *)arg1 accessoryUUID:(void *)arg2 homeUUID:(void *)arg3 forKeyPath:(void *)arg4 completionHandler:(void *)arg5; // needs 5 arg types, found 10: HMImmutableSettingValue *, NSUUID *, NSUUID *, NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*

@end

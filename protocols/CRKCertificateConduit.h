
@protocol CRKCertificateConduit

@required

- (CATOperation *)operationToFetchCertificateForDestinationAppleID:(NSString *)arg1 sourceAppleID:(NSString *)arg2 destinationDeviceIdentifier:(NSString *)arg3 controlGroupIdentifier:(DMFControlGroupIdentifier *)arg4 sourceRole:(long long)arg5 destinationRole:(long long)arg6 requesterCertificate:(NSData *)arg7 timeout:(double)arg8;

@end

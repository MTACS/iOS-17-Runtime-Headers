
@protocol CODiscoveryRecordProtocol <NSObject, NSCopying>

@required

- (NSUUID *)HomeKitIdentifier;
- (NSString *)IDSIdentifier;
- (bool)hasSameBackingDeviceAs:(id <CODiscoveryRecordProtocol>)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (<COTransportProtocol> *)newTransportWithExecutionContext:(COExecutionContext *)arg1;
- (bool)producesElectionCapableTransport;
- (bool)requiresInquiry;

@end

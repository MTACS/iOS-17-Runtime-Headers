
@interface CORapportDevice : NSObject <CODiscoveryRecordProtocol, CORapportTransportCompatibleProcotol> {
    NSUUID * _HomeKitIdentifier;
    NSString * _IDSIdentifier;
    id /* block */  _companionLinkProvider;
    RPCompanionLinkDevice * _device;
    CORapportTransport * _sourceTransport;
}

@property (nonatomic, retain) NSUUID *HomeKitIdentifier;
@property (nonatomic, readonly, copy) NSString *IDSIdentifier;
@property (nonatomic, copy) id /* block */ companionLinkProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) RPCompanionLinkDevice *device;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, retain) CORapportTransport *sourceTransport;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)HomeKitIdentifier;
- (id)IDSIdentifier;
- (id /* block */)companionLinkProvider;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)device;
- (bool)hasSameBackingDeviceAs:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCompanionLinkDevice:(id)arg1 sourceTransport:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)newTransportWithExecutionContext:(id)arg1;
- (bool)producesElectionCapableTransport;
- (bool)requiresInquiry;
- (void)setCompanionLinkProvider:(id /* block */)arg1;
- (void)setHomeKitIdentifier:(id)arg1;
- (id)sourceTransport;

@end

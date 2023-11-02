
@interface CORapportCurrentDevice : NSObject <CODiscoveryRecordProtocol, CORapportTransportCompatibleProcotol> {
    NSString * _IDSIdentifier;
    CORapportBrowser * _browser;
    <COCompanionLinkClientProtocol> * _client;
    id /* block */  _companionLinkProvider;
}

@property (nonatomic, readonly) NSUUID *HomeKitIdentifier;
@property (nonatomic, readonly, copy) NSString *IDSIdentifier;
@property (nonatomic, readonly) CORapportBrowser *browser;
@property (nonatomic, readonly) <COCompanionLinkClientProtocol> *client;
@property (nonatomic, copy) id /* block */ companionLinkProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)HomeKitIdentifier;
- (id)IDSIdentifier;
- (id)browser;
- (id)client;
- (id /* block */)companionLinkProvider;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (bool)hasSameBackingDeviceAs:(id)arg1;
- (unsigned long long)hash;
- (id)initWithClient:(id)arg1 browser:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)newTransportWithExecutionContext:(id)arg1;
- (bool)producesElectionCapableTransport;
- (bool)requiresInquiry;
- (void)setCompanionLinkProvider:(id /* block */)arg1;

@end

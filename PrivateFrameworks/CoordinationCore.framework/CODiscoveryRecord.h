
@interface CODiscoveryRecord : NSObject <CODiscoveryRecordProtocol, CORapportTransportCompatibleProcotol, NSCopying, NSMutableCopying, NSSecureCoding> {
    NSUUID * _HomeKitIdentifier;
    NSString * _IDSIdentifier;
    RPCompanionLinkDevice * _companionLinkDevice;
    id /* block */  _companionLinkProvider;
    COConstituent * _constituent;
    NSOrderedSet * _destinations;
    NSString * _rapportIdentifier;
    CORapportTransport * _sourceTransport;
    COUnhandledRapportRequest * _unhandledRequest;
}

@property (nonatomic, readonly) NSUUID *HomeKitIdentifier;
@property (nonatomic, readonly, copy) NSString *IDSIdentifier;
@property (nonatomic, readonly) RPCompanionLinkDevice *companionLinkDevice;
@property (nonatomic, copy) id /* block */ companionLinkProvider;
@property (nonatomic, retain) COConstituent *constituent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSOrderedSet *destinations;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *rapportIdentifier;
@property (nonatomic, retain) CORapportTransport *sourceTransport;
@property (readonly) Class superclass;
@property (nonatomic, retain) COUnhandledRapportRequest *unhandledRequest;

+ (id)_destinationForPeerAddress:(id)arg1 listeningPort:(unsigned short)arg2;
+ (id)discoveryRecordWithConstituent:(id)arg1 rapportIdentifier:(id)arg2 IDSIdentifier:(id)arg3 peerAddress:(id)arg4 port:(int)arg5;
+ (id)discoveryRecordWithNode:(id)arg1;
+ (id)discoveryRecordWithNodeController:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)HomeKitIdentifier;
- (id)IDSIdentifier;
- (id)_initWithConstituent:(id)arg1 rapportIdentifier:(id)arg2 IDSIdentifier:(id)arg3 destinations:(id)arg4;
- (id)companionLinkDevice;
- (id /* block */)companionLinkProvider;
- (id)constituent;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)destinations;
- (void)encodeWithCoder:(id)arg1;
- (bool)hasSameBackingDeviceAs:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDiscoveryRecord:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToDiscoveryRecord:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)newTransportWithExecutionContext:(id)arg1;
- (bool)producesElectionCapableTransport;
- (id)rapportIdentifier;
- (bool)requiresInquiry;
- (void)setCompanionLinkProvider:(id /* block */)arg1;
- (void)setConstituent:(id)arg1;
- (void)setDestinations:(id)arg1;
- (void)setSourceTransport:(id)arg1;
- (void)setUnhandledRequest:(id)arg1;
- (bool)shouldAdvertise;
- (id)sourceTransport;
- (id)unhandledRequest;

@end


@interface COIDSDiscoveryRecord : NSObject <CODiscoveryRecordProtocol, COIDSTransportCompatibleProcotol> {
    NSString * _IDSIdentifier;
    NSString * _deviceTokenURI;
    COOnDemandIDSNodeCreationRequest * _onDemandRequest;
    COIDSServiceDirector * _serviceDirector;
}

@property (nonatomic, readonly) NSUUID *HomeKitIdentifier;
@property (nonatomic, readonly, copy) NSString *IDSIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *deviceTokenURI;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) COOnDemandIDSNodeCreationRequest *onDemandRequest;
@property (nonatomic, copy) COIDSServiceDirector *serviceDirector;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)HomeKitIdentifier;
- (id)IDSIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceTokenURI;
- (bool)hasSameBackingDeviceAs:(id)arg1;
- (unsigned long long)hash;
- (id)initWithIdsIdentifier:(id)arg1 deviceTokenURI:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)newTransportWithExecutionContext:(id)arg1;
- (id)onDemandRequest;
- (bool)producesElectionCapableTransport;
- (bool)requiresInquiry;
- (id)serviceDirector;
- (void)setOnDemandRequest:(id)arg1;
- (void)setServiceDirector:(id)arg1;

@end

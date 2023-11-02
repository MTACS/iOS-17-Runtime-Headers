
@interface CRKRequestCertificatesIDSMessage : NSObject <CRKIDSMessage> {
    DMFControlGroupIdentifier * _controlGroupIdentifier;
    NSString * _destinationDeviceIdentifier;
    long long  _destinationRole;
    NSUUID * _requestIdentifier;
    NSData * _requesterCertificate;
    long long  _sourceRole;
}

@property (nonatomic, readonly) DMFControlGroupIdentifier *controlGroupIdentifier;
@property (nonatomic, readonly, copy) NSString *destinationDeviceIdentifier;
@property (nonatomic, readonly) long long destinationRole;
@property (nonatomic, readonly, copy) NSDictionary *dictionaryValue;
@property (nonatomic, readonly) long long messageType;
@property (nonatomic, readonly) NSUUID *requestIdentifier;
@property (nonatomic, readonly, copy) NSData *requesterCertificate;
@property (nonatomic, readonly) long long sourceRole;

+ (id)instanceWithDictionary:(id)arg1;
+ (id)messageWithControlGroupIdentifier:(id)arg1 destinationDeviceIdentifier:(id)arg2 sourceRole:(long long)arg3 destinationRole:(long long)arg4 requesterCertificate:(id)arg5;

- (void).cxx_destruct;
- (id)controlGroupIdentifier;
- (id)destinationDeviceIdentifier;
- (long long)destinationRole;
- (id)dictionaryValue;
- (id)initWithRequestIdentifier:(id)arg1 controlGroupIdentifier:(id)arg2 destinationDeviceIdentifier:(id)arg3 sourceRole:(long long)arg4 destinationRole:(long long)arg5 requesterCertificate:(id)arg6;
- (long long)messageType;
- (id)requestIdentifier;
- (id)requesterCertificate;
- (long long)sourceRole;

@end

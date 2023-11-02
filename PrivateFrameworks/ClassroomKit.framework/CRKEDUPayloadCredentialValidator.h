
@interface CRKEDUPayloadCredentialValidator : NSObject {
    bool  _ephemeralMultiUserDevice;
    CRKEDUPayload * _payload;
    bool  _stub;
}

@property (getter=isEphemeralMultiUserDevice, nonatomic, readonly) bool ephemeralMultiUserDevice;
@property (nonatomic, readonly) CRKEDUPayload *payload;
@property (getter=isStub, nonatomic, readonly) bool stub;

- (void).cxx_destruct;
- (bool)areCredentialsValidForOneToOneDeviceWithError:(id*)arg1;
- (bool)areCredentialsValidForSharediPadDeviceWithError:(id*)arg1;
- (bool)areCredentialsValidWithError:(id*)arg1;
- (bool)hasPayloadCertificate;
- (id)initWithPayload:(id)arg1 isStub:(bool)arg2 isEphemeralMultiUserDevice:(bool)arg3;
- (bool)isEphemeralMultiUserDevice;
- (bool)isInstructor;
- (bool)isStub;
- (bool)isStudent;
- (id)payload;
- (bool)validateAnchorsWithKeyPath:(id)arg1 payloadKey:(id)arg2 error:(id*)arg3;
- (bool)validateLeaderAnchorsWithError:(id*)arg1;
- (bool)validateMemberAnchorsWithError:(id*)arg1;

@end


@interface TransparencyIDSRegistrationData : NSObject <NSSecureCoding> {
    NSString * _altDSID;
    NSString * _application;
    NSDate * _createdAt;
    NSError * _error;
    NSDate * _nextRetryAt;
    NSDate * _orderedTimestamp;
    NSData * _publicKey;
    NSData * _pushToken;
    NSData * _signature;
    NSDate * _signedAt;
    NSString * _state;
    NSData * _tbsKTIDSRegistrationData;
    NSDate * _uploadedAt;
}

@property (retain) NSString *altDSID;
@property (retain) NSString *application;
@property (retain) NSDate *createdAt;
@property (retain) NSError *error;
@property (retain) NSDate *nextRetryAt;
@property (retain) NSDate *orderedTimestamp;
@property (retain) NSData *publicKey;
@property (retain) NSData *pushToken;
@property (retain) NSData *signature;
@property (retain) NSDate *signedAt;
@property (retain) NSString *state;
@property (retain) NSData *tbsKTIDSRegistrationData;
@property (retain) NSDate *uploadedAt;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)altDSID;
- (id)application;
- (id)createdAt;
- (id)diagnosticsJsonDictionary;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)humanDiagnosticsString;
- (id)initWithApplication:(id)arg1 registrationData:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)nextRetryAt;
- (id)orderedTimestamp;
- (id)publicKey;
- (id)pushToken;
- (void)setAltDSID:(id)arg1;
- (void)setApplication:(id)arg1;
- (void)setCreatedAt:(id)arg1;
- (void)setError:(id)arg1;
- (void)setNextRetryAt:(id)arg1;
- (void)setOrderedTimestamp:(id)arg1;
- (void)setPublicKey:(id)arg1;
- (void)setPushToken:(id)arg1;
- (void)setSignature:(id)arg1;
- (void)setSignedAt:(id)arg1;
- (void)setState:(id)arg1;
- (void)setTbsKTIDSRegistrationData:(id)arg1;
- (void)setUploadedAt:(id)arg1;
- (id)signature;
- (id)signedAt;
- (id)state;
- (id)tbsKTIDSRegistrationData;
- (id)uploadedAt;

@end

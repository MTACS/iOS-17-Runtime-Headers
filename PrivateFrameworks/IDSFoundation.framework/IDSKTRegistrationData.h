
@interface IDSKTRegistrationData : NSObject <NSSecureCoding> {
    NSNumber * _ktAccountKeyErrorCode;
    NSDate * _ktAccountKeyTimestamp;
    NSData * _ktDataForRegistration;
    NSData * _ktDataSignature;
    NSNumber * _ktOptInErrorCode;
    unsigned long long  _ktOptInStatus;
    NSDate * _ktOptInTimestamp;
    NSData * _ktPublicAccountKey;
    NSDate * _registeredTime;
    bool  _uploadedToKVS;
}

@property (nonatomic, retain) NSNumber *ktAccountKeyErrorCode;
@property (nonatomic, retain) NSDate *ktAccountKeyTimestamp;
@property (nonatomic, retain) NSData *ktDataForRegistration;
@property (nonatomic, retain) NSData *ktDataSignature;
@property (nonatomic, retain) NSNumber *ktOptInErrorCode;
@property (nonatomic) unsigned long long ktOptInStatus;
@property (nonatomic, retain) NSDate *ktOptInTimestamp;
@property (nonatomic, retain) NSData *ktPublicAccountKey;
@property (nonatomic, retain) NSDate *registeredTime;
@property (nonatomic) bool uploadedToKVS;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)dataRepresentationWithError:(id*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataRepresentation:(id)arg1 error:(id*)arg2;
- (id)ktAccountKeyErrorCode;
- (id)ktAccountKeyTimestamp;
- (id)ktDataForRegistration;
- (id)ktDataSignature;
- (id)ktOptInErrorCode;
- (unsigned long long)ktOptInStatus;
- (id)ktOptInTimestamp;
- (id)ktPublicAccountKey;
- (bool)needsKVSUpload;
- (id)registeredTime;
- (void)setKtAccountKeyErrorCode:(id)arg1;
- (void)setKtAccountKeyTimestamp:(id)arg1;
- (void)setKtDataForRegistration:(id)arg1;
- (void)setKtDataSignature:(id)arg1;
- (void)setKtOptInErrorCode:(id)arg1;
- (void)setKtOptInStatus:(unsigned long long)arg1;
- (void)setKtOptInTimestamp:(id)arg1;
- (void)setKtPublicAccountKey:(id)arg1;
- (void)setRegisteredTime:(id)arg1;
- (void)setUploadedToKVS:(bool)arg1;
- (bool)uploadedToKVS;

@end

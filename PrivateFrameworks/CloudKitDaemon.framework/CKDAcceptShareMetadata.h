
@interface CKDAcceptShareMetadata : NSObject {
    bool  _acceptedInProcess;
    NSString * _anonymousCKUserID;
    NSString * _etag;
    NSString * _participantID;
    NSData * _pppcsProtectionInfo;
    NSData * _publicKey;
    unsigned long long  _publicKeyVersion;
    NSData * _publicPCSData;
    NSString * _publicPCSEtag;
    CKRecordID * _shareRecordID;
    NSURL * _shareURL;
    struct _PCSIdentityData { } * _signingPCSIdentity;
}

@property (nonatomic) bool acceptedInProcess;
@property (nonatomic, retain) NSString *anonymousCKUserID;
@property (nonatomic, retain) NSString *etag;
@property (nonatomic, retain) NSString *participantID;
@property (nonatomic, retain) NSData *pppcsProtectionInfo;
@property (nonatomic, retain) NSData *publicKey;
@property (nonatomic) unsigned long long publicKeyVersion;
@property (nonatomic, retain) NSData *publicPCSData;
@property (nonatomic, retain) NSString *publicPCSEtag;
@property (nonatomic, retain) CKRecordID *shareRecordID;
@property (nonatomic, retain) NSURL *shareURL;
@property (nonatomic) struct _PCSIdentityData { }*signingPCSIdentity;

- (void).cxx_destruct;
- (bool)acceptedInProcess;
- (id)anonymousCKUserID;
- (void)dealloc;
- (id)etag;
- (id)participantID;
- (id)pppcsProtectionInfo;
- (id)publicKey;
- (unsigned long long)publicKeyVersion;
- (id)publicPCSData;
- (id)publicPCSEtag;
- (void)setAcceptedInProcess:(bool)arg1;
- (void)setAnonymousCKUserID:(id)arg1;
- (void)setEtag:(id)arg1;
- (void)setParticipantID:(id)arg1;
- (void)setPppcsProtectionInfo:(id)arg1;
- (void)setPublicKey:(id)arg1;
- (void)setPublicKeyVersion:(unsigned long long)arg1;
- (void)setPublicPCSData:(id)arg1;
- (void)setPublicPCSEtag:(id)arg1;
- (void)setShareRecordID:(id)arg1;
- (void)setShareURL:(id)arg1;
- (void)setSigningPCSIdentity:(struct _PCSIdentityData { }*)arg1;
- (id)shareRecordID;
- (id)shareURL;
- (struct _PCSIdentityData { }*)signingPCSIdentity;

@end


@interface SESWrapper : NSObject {
    struct ckvr_srp_context { struct ccrng_state {} *x1; struct ccdigest_info {} *x2; struct ccmode_cbc {} *x3; struct ccmode_cbc {} *x4; struct ccmode_gcm {} *x5; struct ccmode_gcm {} *x6; struct ccsrp_ctx {} *x7; } * _ckvr;
    NSString * _decodedLabel;
    NSString * _dsid;
    NSData * _escrowBlob;
    NSDate * _escrowDate;
    NSDictionary * _escrowRecord;
    NSString * _label;
    NSString * _recordID;
    NSData * _recoveryBlob;
    NSString * _recoveryPassphrase;
    bool  _recoveryPassphraseMutable;
    int  _reqVersion;
}

@property (nonatomic, readonly) struct ckvr_srp_context { struct ccrng_state {} *x1; struct ccdigest_info {} *x2; struct ccmode_cbc {} *x3; struct ccmode_cbc {} *x4; struct ccmode_gcm {} *x5; struct ccmode_gcm {} *x6; struct ccsrp_ctx {} *x7; }*ckvr;
@property (nonatomic, copy) NSString *decodedLabel;
@property (nonatomic, copy) NSString *dsid;
@property (nonatomic, retain) NSData *escrowBlob;
@property (nonatomic, copy) NSDate *escrowDate;
@property (nonatomic, readonly, copy) NSDictionary *escrowRecord;
@property (nonatomic, readonly, copy) NSString *label;
@property (nonatomic, readonly, copy) NSString *recordID;
@property (retain) NSData *recoveryBlob;
@property (nonatomic, copy) NSString *recoveryPassphrase;
@property (nonatomic) bool recoveryPassphraseMutable;
@property (nonatomic) int reqVersion;

- (void).cxx_destruct;
- (struct ckvr_srp_context { struct ccrng_state {} *x1; struct ccdigest_info {} *x2; struct ccmode_cbc {} *x3; struct ccmode_cbc {} *x4; struct ccmode_gcm {} *x5; struct ccmode_gcm {} *x6; struct ccsrp_ctx {} *x7; }*)ckvr;
- (void)dealloc;
- (id)decodedEscrowRecordFromData:(id)arg1 stingray:(bool)arg2 env:(id)arg3 duplicate:(bool)arg4;
- (id)decodedLabel;
- (id)dsid;
- (id)encodedEscrowRecordWithPublicKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg1 error:(id*)arg2;
- (id)escrowBlob;
- (id)escrowDate;
- (id)escrowRecord;
- (id)initWithDSID:(id)arg1 escrowRecordContents:(id)arg2 recoveryPassphrase:(id)arg3 recordID:(id)arg4 recordLabel:(id)arg5;
- (id)initWithDSID:(id)arg1 escrowRecordContents:(id)arg2 recoveryPassphrase:(id)arg3 recordID:(id)arg4 recordLabel:(id)arg5 reqVersion:(int)arg6;
- (id)initWithRequest:(id)arg1;
- (id)initWithRequest:(id)arg1 reqVersion:(int)arg2;
- (id)label;
- (id)recordID;
- (id)recoveryBlob;
- (id)recoveryPassphrase;
- (bool)recoveryPassphraseMutable;
- (id)recoveryResponseForBlob:(id)arg1;
- (int)reqVersion;
- (void)setDecodedLabel:(id)arg1;
- (void)setDsid:(id)arg1;
- (void)setEscrowBlob:(id)arg1;
- (void)setEscrowDate:(id)arg1;
- (void)setRecoveryBlob:(id)arg1;
- (void)setRecoveryPassphrase:(id)arg1;
- (void)setRecoveryPassphraseMutable:(bool)arg1;
- (void)setReqVersion:(int)arg1;
- (id)srpInitBlob;
- (unsigned long long)srpKeySize;
- (unsigned long long)srpPublicKeySize;
- (id)srpRecoveryBlobFromData:(id)arg1 error:(id*)arg2;
- (void)srpRecoveryUpdateDSID:(id)arg1 recoveryPassphrase:(id)arg2;
- (id)srpResponseForEscrowBlob:(id)arg1 withKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x_1_1_1; _Atomic unsigned long long x_1_1_2; } x1; struct __SecKeyDescriptor {} *x2; void *x3; }*)arg2 withFullCCKey:(struct ccrsa_full_ctx { unsigned long long x1; unsigned long long x2; struct cczp_funcs {} *x3; unsigned long long x4[0]; }*)arg3;

@end

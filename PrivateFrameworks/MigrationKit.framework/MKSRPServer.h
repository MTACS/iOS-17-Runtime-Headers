
@interface MKSRPServer : NSObject {
    NSString * _password;
    NSData * _proofOfMatch;
    NSData * _pubkey;
    NSData * _salt;
    struct srp_st { int x1; int x2; struct cstr_st {} *x3; void *x4; void *x5; struct cstr_st {} *x6; void *x7; void *x8; void *x9; void *x10; void *x11; void *x12; struct cstr_st {} *x13; struct srp_meth_st {} *x14; void *x15; void *x16; void *x17; int (*x18)(); struct srp_server_lu_st {} *x19; } * _session;
    NSData * _sharedKey;
    NSString * _username;
}

@property (nonatomic, copy) NSString *password;
@property (nonatomic, retain) NSData *proofOfMatch;
@property (nonatomic, retain) NSData *pubkey;
@property (nonatomic, retain) NSData *salt;
@property (nonatomic, retain) NSData *sharedKey;
@property (nonatomic, copy) NSString *username;

- (void).cxx_destruct;
- (void)_generateSalt:(id*)arg1 pubkey:(id*)arg2;
- (id)_generateSharedKey:(id)arg1 proofOfMatch:(id)arg2;
- (void)cleanup;
- (void)cleanupSRP;
- (void)dealloc;
- (id)generateRandomPassword;
- (void)generateSalt:(id*)arg1 pubkey:(id*)arg2;
- (id)generateSharedKey:(id)arg1 proofOfMatch:(id)arg2;
- (id)init;
- (id)initWithPassword:(id)arg1;
- (id)password;
- (id)proofOfMatch;
- (id)pubkey;
- (id)salt;
- (void)setPassword:(id)arg1;
- (void)setProofOfMatch:(id)arg1;
- (void)setPubkey:(id)arg1;
- (void)setSalt:(id)arg1;
- (void)setSharedKey:(id)arg1;
- (void)setUsername:(id)arg1;
- (id)sharedKey;
- (id)username;

@end


@interface SPAKE2Common : NSObject <SPAKE2Protocol> {
    NSString * _code;
    struct ccspake_cp { } * _cp;
    struct ccspake_mac { } * _mac;
    unsigned long long  _point_size;
    struct ccrng_state { int (*x1)(); } * _rng;
    NSData * _salt;
    _SFAESKey * _session_key;
    struct ccspake_ctx { struct ccspake_cp {} *x1; struct ccspake_mac {} *x2; struct ccrng_state {} *x3; bool x4; unsigned long long x5; unsigned char x6[20]; unsigned char x7; struct ccdigest_ctx { unsigned char x_8_1_1[1]; } x8[26]; unsigned char x9[64]; unsigned long long x10[0]; } * _spake_ctx;
    bool  _verified;
    NSData * _w0;
    NSData * _w1;
    unsigned long long  _w_size;
}

@property (retain) NSString *code;
@property struct ccspake_cp { }*cp;
@property struct ccspake_mac { }*mac;
@property unsigned long long point_size;
@property struct ccrng_state { int (*x1)(); }*rng;
@property (retain) NSData *salt;
@property (retain) _SFAESKey *session_key;
@property struct ccspake_ctx { struct ccspake_cp {} *x1; struct ccspake_mac {} *x2; struct ccrng_state {} *x3; bool x4; unsigned long long x5; unsigned char x6[20]; unsigned char x7; struct ccdigest_ctx { unsigned char x_8_1_1[1]; } x8[26]; unsigned char x9[64]; unsigned long long x10[0]; }*spake_ctx;
@property bool verified;
@property (retain) NSData *w0;
@property (retain) NSData *w1;
@property unsigned long long w_size;

- (void).cxx_destruct;
- (id)code;
- (struct ccspake_cp { }*)cp;
- (void)dealloc;
- (id)decryptMessage:(id)arg1 error:(id*)arg2;
- (id)encryptMessage:(id)arg1 error:(id*)arg2;
- (bool)generateStateWithError:(id*)arg1;
- (id)getKey;
- (id)getMsg1WithError:(id*)arg1;
- (id)getMsg2WithError:(id*)arg1;
- (id)initWithSalt:(id)arg1 code:(id)arg2;
- (bool)isVerified;
- (struct ccspake_mac { }*)mac;
- (unsigned long long)point_size;
- (bool)processMsg1:(id)arg1 error:(id*)arg2;
- (bool)processMsg2:(id)arg1 error:(id*)arg2;
- (struct ccrng_state { int (*x1)(); }*)rng;
- (id)salt;
- (id)session_key;
- (void)setCode:(id)arg1;
- (void)setCp:(struct ccspake_cp { }*)arg1;
- (void)setMac:(struct ccspake_mac { }*)arg1;
- (void)setPoint_size:(unsigned long long)arg1;
- (void)setRng:(struct ccrng_state { int (*x1)(); }*)arg1;
- (void)setSalt:(id)arg1;
- (void)setSession_key:(id)arg1;
- (void)setSpake_ctx:(struct ccspake_ctx { struct ccspake_cp {} *x1; struct ccspake_mac {} *x2; struct ccrng_state {} *x3; bool x4; unsigned long long x5; unsigned char x6[20]; unsigned char x7; struct ccdigest_ctx { unsigned char x_8_1_1[1]; } x8[26]; unsigned char x9[64]; unsigned long long x10[0]; }*)arg1;
- (void)setVerified:(bool)arg1;
- (void)setW0:(id)arg1;
- (void)setW1:(id)arg1;
- (void)setW_size:(unsigned long long)arg1;
- (bool)setupProver:(id*)arg1;
- (bool)setupVerifier:(id*)arg1;
- (struct ccspake_ctx { struct ccspake_cp {} *x1; struct ccspake_mac {} *x2; struct ccrng_state {} *x3; bool x4; unsigned long long x5; unsigned char x6[20]; unsigned char x7; struct ccdigest_ctx { unsigned char x_8_1_1[1]; } x8[26]; unsigned char x9[64]; unsigned long long x10[0]; }*)spake_ctx;
- (bool)verified;
- (id)w0;
- (id)w1;
- (unsigned long long)w_size;

@end

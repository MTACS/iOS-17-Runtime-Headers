
@interface KCAESGCMDuplexSession : NSObject <NSSecureCoding> {
    NSString * _altDSID;
    bool  _asSender;
    unsigned long long  _context;
    unsigned long long  _epoch;
    NSString * _pairingUUID;
    unsigned long long  _piggybackingVersion;
    struct { unsigned char x1[16]; } * _receive;
    NSData * _secret;
    struct { unsigned char x1[16]; } * _send;
}

@property (retain) NSString *altDSID;
@property bool asSender;
@property unsigned long long context;
@property unsigned long long epoch;
@property (retain) NSString *pairingUUID;
@property unsigned long long piggybackingVersion;
@property struct { unsigned char x1[16]; }*receive;
@property (retain) NSData *secret;
@property struct { unsigned char x1[16]; }*send;

+ (id)sessionAsReceiver:(id)arg1 context:(unsigned long long)arg2;
+ (id)sessionAsSender:(id)arg1 context:(unsigned long long)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)GCM:(const struct ccmode_gcm { unsigned long long x1; int x2; unsigned long long x3; int (*x4)(); int (*x5)(); int (*x6)(); int (*x7)(); int (*x8)(); int (*x9)(); void *x10; }*)arg1 context:(struct { unsigned char x1[16]; }*)arg2 iv:(id)arg3 size:(unsigned long long)arg4 data:(const char *)arg5 processed:(char *)arg6 tag:(char *)arg7 error:(id*)arg8;
- (id)altDSID;
- (bool)asSender;
- (unsigned long long)context;
- (void)dealloc;
- (id)decryptAndVerify:(id)arg1 error:(id*)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)encrypt:(id)arg1 error:(id*)arg2;
- (unsigned long long)encryptCapsuleSize:(id)arg1 IV:(id)arg2;
- (unsigned long long)epoch;
- (id)initAsReceiver:(id)arg1 context:(unsigned long long)arg2;
- (id)initAsSender:(id)arg1 context:(unsigned long long)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithSecret:(id)arg1 context:(unsigned long long)arg2 as:(bool)arg3;
- (id)initWithSecret:(id)arg1 context:(unsigned long long)arg2 as:(bool)arg3 altDSID:(id)arg4 pairingUUID:(id)arg5 piggybackingVersion:(unsigned long long)arg6 epoch:(unsigned long long)arg7;
- (id)pairingUUID;
- (unsigned long long)piggybackingVersion;
- (struct { unsigned char x1[16]; }*)receive;
- (id)secret;
- (struct { unsigned char x1[16]; }*)send;
- (void)setAltDSID:(id)arg1;
- (void)setAsSender:(bool)arg1;
- (void)setContext:(unsigned long long)arg1;
- (void)setEpoch:(unsigned long long)arg1;
- (void)setPairingUUID:(id)arg1;
- (void)setPiggybackingVersion:(unsigned long long)arg1;
- (void)setReceive:(struct { unsigned char x1[16]; }*)arg1;
- (void)setSecret:(id)arg1;
- (void)setSend:(struct { unsigned char x1[16]; }*)arg1;

@end

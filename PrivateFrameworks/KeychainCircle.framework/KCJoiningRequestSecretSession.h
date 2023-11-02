
@interface KCJoiningRequestSecretSession : NSObject {
    NSString * _altDSID;
    NSData * _challenge;
    KCSRPClientContext * _context;
    NSMutableDictionary * _defaults;
    unsigned long long  _dsid;
    unsigned long long  _epoch;
    NSString * _piggy_uuid;
    unsigned long long  _piggy_version;
    NSData * _salt;
    <KCJoiningRequestSecretDelegate> * _secretDelegate;
    KCAESGCMDuplexSession * _session;
    NSString * _sessionUUID;
    int  _state;
}

@property (retain) NSString *altDSID;
@property (retain) NSData *challenge;
@property (readonly) KCSRPClientContext *context;
@property (nonatomic, retain) NSMutableDictionary *defaults;
@property (readonly) unsigned long long dsid;
@property unsigned long long epoch;
@property (retain) NSString *piggy_uuid;
@property unsigned long long piggy_version;
@property (retain) NSData *salt;
@property <KCJoiningRequestSecretDelegate> *secretDelegate;
@property (readonly) KCAESGCMDuplexSession *session;
@property (retain) NSString *sessionUUID;
@property (readonly) int state;

+ (id)sessionWithSecretDelegate:(id)arg1 dsid:(unsigned long long)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)altDSID;
- (id)challenge;
- (id)context;
- (id)copyResponseForChallenge:(id)arg1 salt:(id)arg2 secret:(id)arg3 error:(id*)arg4;
- (id)copyResponseForSecret:(id)arg1 error:(id*)arg2;
- (id)createUUID;
- (id)defaults;
- (id)description;
- (unsigned long long)dsid;
- (unsigned long long)epoch;
- (id)handleChallenge:(id)arg1 error:(id*)arg2;
- (id)handleChallenge:(id)arg1 secret:(id)arg2 error:(id*)arg3;
- (id)handleChallengeData:(id)arg1 secret:(id)arg2 error:(id*)arg3;
- (id)handleVerification:(id)arg1 error:(id*)arg2;
- (id)initWithSecretDelegate:(id)arg1 dsid:(unsigned long long)arg2 error:(id*)arg3;
- (id)initWithSecretDelegate:(id)arg1 dsid:(unsigned long long)arg2 rng:(struct ccrng_state { int (*x1)(); }*)arg3 error:(id*)arg4;
- (id)initialMessage:(id*)arg1;
- (bool)isDone;
- (id)piggy_uuid;
- (unsigned long long)piggy_version;
- (id)processMessage:(id)arg1 error:(id*)arg2;
- (id)salt;
- (id)secretDelegate;
- (id)session;
- (id)sessionUUID;
- (void)setAltDSID:(id)arg1;
- (void)setChallenge:(id)arg1;
- (void)setDefaults:(id)arg1;
- (void)setEpoch:(unsigned long long)arg1;
- (void)setPiggy_uuid:(id)arg1;
- (void)setPiggy_version:(unsigned long long)arg1;
- (void)setSalt:(id)arg1;
- (void)setSecretDelegate:(id)arg1;
- (void)setSessionUUID:(id)arg1;
- (bool)setupSession:(id*)arg1;
- (int)state;
- (id)stateString;

@end

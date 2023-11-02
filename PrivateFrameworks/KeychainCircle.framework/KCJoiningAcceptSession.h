
@interface KCJoiningAcceptSession : NSObject {
    <KCJoiningAcceptCircleDelegate> * _circleDelegate;
    KCSRPServerContext * _context;
    OTControlArguments * _controlArguments;
    NSMutableDictionary * _defaults;
    unsigned long long  _dsid;
    OTJoiningConfiguration * _joiningConfiguration;
    NSData * _octagon;
    OTControl * _otControl;
    NSString * _piggy_uuid;
    int  _piggy_version;
    <KCJoiningAcceptSecretDelegate> * _secretDelegate;
    KCAESGCMDuplexSession * _session;
    NSData * _startMessage;
    int  _state;
}

@property <KCJoiningAcceptCircleDelegate> *circleDelegate;
@property (readonly) KCSRPServerContext *context;
@property (nonatomic, retain) OTControlArguments *controlArguments;
@property (nonatomic, retain) NSMutableDictionary *defaults;
@property (readonly) unsigned long long dsid;
@property (nonatomic, retain) OTJoiningConfiguration *joiningConfiguration;
@property (retain) NSData *octagon;
@property (nonatomic, retain) OTControl *otControl;
@property (retain) NSString *piggy_uuid;
@property int piggy_version;
@property <KCJoiningAcceptSecretDelegate> *secretDelegate;
@property (readonly) KCAESGCMDuplexSession *session;
@property (retain) NSData *startMessage;
@property (readonly) int state;

+ (id)sessionWithInitialMessage:(id)arg1 secretDelegate:(id)arg2 circleDelegate:(id)arg3 dsid:(unsigned long long)arg4 error:(id*)arg5;

- (void).cxx_destruct;
- (id)accessSession;
- (id)circleDelegate;
- (id)context;
- (id)controlArguments;
- (id)copyChallengeMessage:(id*)arg1;
- (id)createPairingMessageFromJoiningMessage:(id)arg1 error:(id*)arg2;
- (id)createTLKRequestResponse:(id*)arg1;
- (id)defaults;
- (id)description;
- (unsigned long long)dsid;
- (id)initWithSecretDelegate:(id)arg1 circleDelegate:(id)arg2 dsid:(unsigned long long)arg3 rng:(struct ccrng_state { int (*x1)(); }*)arg4 error:(id*)arg5;
- (bool)isDone;
- (id)joiningConfiguration;
- (id)octagon;
- (id)otControl;
- (id)piggy_uuid;
- (int)piggy_version;
- (id)processApplication:(id)arg1 error:(id*)arg2;
- (id)processInitialMessage:(id)arg1 error:(id*)arg2;
- (id)processMessage:(id)arg1 error:(id*)arg2;
- (id)processResponse:(id)arg1 error:(id*)arg2;
- (id)processSOSApplication:(id)arg1 error:(id*)arg2;
- (id)secretDelegate;
- (id)session;
- (void)setCircleDelegate:(id)arg1;
- (void)setConfiguration:(id)arg1;
- (void)setControlArguments:(id)arg1;
- (void)setControlObject:(id)arg1;
- (void)setDefaults:(id)arg1;
- (void)setJoiningConfiguration:(id)arg1;
- (void)setOctagon:(id)arg1;
- (void)setOtControl:(id)arg1;
- (void)setPiggy_uuid:(id)arg1;
- (void)setPiggy_version:(int)arg1;
- (void)setSecretDelegate:(id)arg1;
- (void)setSessionControlArguments:(id)arg1;
- (void)setStartMessage:(id)arg1;
- (bool)setupSession:(id*)arg1;
- (bool)shouldAcceptOctagonRequests;
- (bool)shouldProcessSOSApplication:(id)arg1 pairingMessage:(id)arg2;
- (id)startMessage;
- (int)state;
- (id)stateString;

@end

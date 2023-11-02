
@interface KCJoiningRequestCircleSession : NSObject {
    NSObject<KCJoiningRequestCircleDelegate> * _circleDelegate;
    OTControlArguments * _controlArguments;
    OTJoiningConfiguration * _joiningConfiguration;
    OTControl * _otControl;
    unsigned long long  _piggy_version;
    KCAESGCMDuplexSession * _session;
    int  _state;
}

@property (readonly) NSObject<KCJoiningRequestCircleDelegate> *circleDelegate;
@property (nonatomic, retain) OTControlArguments *controlArguments;
@property (nonatomic, retain) OTJoiningConfiguration *joiningConfiguration;
@property (nonatomic, retain) OTControl *otControl;
@property (nonatomic) unsigned long long piggy_version;
@property (readonly) KCAESGCMDuplexSession *session;
@property int state;

+ (id)sessionWithCircleDelegate:(id)arg1 session:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)accessSession;
- (id)circleDelegate;
- (id)controlArguments;
- (id)encryptedInitialMessage:(id)arg1 error:(id*)arg2;
- (id)encryptedPeerInfo:(id*)arg1;
- (id)handleCircleBlob:(id)arg1 error:(id*)arg2;
- (id)initWithCircleDelegate:(id)arg1 session:(id)arg2 error:(id*)arg3;
- (id)initWithCircleDelegate:(id)arg1 session:(id)arg2 otcontrol:(id)arg3 error:(id*)arg4;
- (id)initialMessage:(id*)arg1;
- (bool)isDone;
- (id)joiningConfiguration;
- (id)otControl;
- (unsigned long long)piggy_version;
- (id)processMessage:(id)arg1 error:(id*)arg2;
- (id)session;
- (void)setContextIDForSession:(id)arg1;
- (void)setControlArguments:(id)arg1;
- (void)setControlObject:(id)arg1;
- (void)setJoiningConfiguration:(id)arg1;
- (void)setOtControl:(id)arg1;
- (void)setPiggy_version:(unsigned long long)arg1;
- (void)setState:(int)arg1;
- (bool)shouldJoinSOS:(id)arg1 pairingMessage:(id)arg2;
- (int)state;
- (void)waitForOctagonUpgrade;

@end

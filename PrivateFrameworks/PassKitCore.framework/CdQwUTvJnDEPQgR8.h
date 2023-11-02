
@interface CdQwUTvJnDEPQgR8 : NSObject {
    bool  _callbackDone;
    NSObject<OS_dispatch_queue> * _callback_queue;
    jprL7AuZZkLkFoBK * _context;
    DIVerificationSession * _diSession;
    id /* block */  _handler;
    NSMutableDictionary * _identifier2UUID;
    NSString * _lastScoreIdentifier;
    NSObject<OS_os_log> * _logger;
    NSError * _prepareError;
    bool  _prepared;
    NSData * _preparedBlob;
    NSObject<OS_dispatch_queue> * _score_id_queue;
}

@property (nonatomic, retain) NSObject<OS_dispatch_queue> *callback_queue;
@property (nonatomic, retain) jprL7AuZZkLkFoBK *context;
@property (nonatomic, retain) DIVerificationSession *diSession;
@property (nonatomic, copy) id /* block */ handler;
@property (nonatomic, retain) NSString *lastScoreIdentifier;
@property (nonatomic, retain) NSError *prepareError;
@property (nonatomic, retain) NSData *preparedBlob;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *score_id_queue;

+ (id)scorerWithContext:(id)arg1;

- (void).cxx_destruct;
- (void)MHcqy8dNQyXvA5JC:(id)arg1;
- (id)VkBISyFszEu5z9lr:(id)arg1 error:(id*)arg2;
- (void)_safeCallbackWithMessage:(id)arg1 uuid:(id)arg2 error:(id)arg3;
- (id)callback_queue;
- (id)context;
- (id)diSession;
- (id /* block */)handler;
- (id)initWithContext:(id)arg1;
- (id)lastScoreIdentifier;
- (id)prepareError;
- (void)prepareScoreMessage;
- (id)preparedBlob;
- (void)scoreWithScoreRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)score_id_queue;
- (void)setCallback_queue:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setDiSession:(id)arg1;
- (void)setHandler:(id /* block */)arg1;
- (void)setLastScoreIdentifier:(id)arg1;
- (void)setPrepareError:(id)arg1;
- (void)setPreparedBlob:(id)arg1;
- (void)setScore_id_queue:(id)arg1;
- (id)settingsFromContext:(id)arg1;
- (void)stop;

@end

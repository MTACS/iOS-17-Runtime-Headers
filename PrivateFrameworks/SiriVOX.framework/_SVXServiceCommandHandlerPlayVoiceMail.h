
@interface _SVXServiceCommandHandlerPlayVoiceMail : NSObject <SVXServiceCommandHandling> {
    NSString * _identifier;
    SVXModule * _module;
    SVXSessionManager * _sessionManager;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSString *identifier;
@property (readonly) Class superclass;

+ (Class)supportedCommandClass;

- (void).cxx_destruct;
- (double)_audioPlaybackDuration:(id)arg1;
- (void)_markVoiceMailAsRead:(id)arg1 forRemoteDevice:(id)arg2;
- (void)handleCommand:(id)arg1 withContext:(id)arg2 taskTracker:(id)arg3 completion:(id /* block */)arg4;
- (id)identifier;
- (id)initWithSessionManager:(id)arg1 module:(id)arg2;
- (bool)isCommandUUFR:(id)arg1;

@end


@protocol SVXClientService <NSObject>

@required

- (oneway void)activateWithContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SVXActivationContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)cancelPendingSpeechSynthesisRequest:(SVXSpeechSynthesisRequest *)arg1;
- (oneway void)deactivateWithContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: SVXDeactivationContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (oneway void)enqueueSpeechSynthesisRequest:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: SVXSpeechSynthesisRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SVXSpeechSynthesisResult *, void*
- (oneway void)fetchAlarmAndTimerFiringContextWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SVXAlarmAndTimerFiringContext *, NSError *, void*
- (oneway void)fetchAudioPowerWithType:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, AFXPCWrapper *, NSError *, void*
- (oneway void)fetchSessionActivityStateWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (oneway void)fetchSessionStateWithCompletion:(void *)arg1; // needs 1 arg types, found 7: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, long long, NSError *, void*
- (oneway void)performManualEndpointing;
- (oneway void)pingWithReply:(void *)arg1; // needs 1 arg types, found 6: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (oneway void)preheatWithActivationSource:(long long)arg1;
- (oneway void)prepareForDeviceSetupWithContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: SVXDeviceSetupContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SVXDeviceSetupFlow *, NSError *, void*
- (oneway void)prewarmRequest:(SVXSpeechSynthesisRequest *)arg1;
- (oneway void)prewarmWithContext:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 6: SVXActivationContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*
- (oneway void)setDeviceSetupContext:(SVXDeviceSetupContext *)arg1;
- (oneway void)stopSpeechSynthesisRequest:(SVXSpeechSynthesisRequest *)arg1;
- (oneway void)synthesizeRequest:(void *)arg1 handlerUUID:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 8: SVXSpeechSynthesisRequest *, NSUUID *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, SVXSpeechSynthesisResult *, void*
- (oneway void)transitToAutomaticEndpointingWithTimestamp:(unsigned long long)arg1;

@end

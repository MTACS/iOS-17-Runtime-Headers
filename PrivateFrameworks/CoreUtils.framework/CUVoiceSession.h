
@interface CUVoiceSession : NSObject <VSSpeechSynthesizerDelegate> {
    CUVoiceRequest * _currentRequest;
    NSObject<OS_dispatch_queue> * _dispatchQueue;
    bool  _invalidateCalled;
    bool  _invalidateDone;
    unsigned int  _invalidateFlags;
    id /* block */  _invalidationHandler;
    NSString * _label;
    NSMutableArray * _requests;
    VSSpeechSynthesizer * _speechSynthesizer;
    struct LogCategory { int x1; int x2; char *x3; unsigned int x4; char *x5; char *x6; int x7; struct LogCategory {} *x8; struct LogOutput {} *x9; struct LogOutput {} *x10; unsigned long long x11; unsigned long long x12; unsigned int x13; unsigned int x14; char *x15; struct LogCategoryPrivate {} *x16; } * _ucat;
    NSMutableArray * _voiceRequests;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (nonatomic, copy) NSString *label;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_completeAllRequestsWithError:(id)arg1;
- (void)_completeRequest:(id)arg1 error:(id)arg2;
- (void)_invalidate;
- (void)_invalidated;
- (void)_processQueuedRequests;
- (void)_speakText:(id)arg1 flags:(unsigned int)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (id)dispatchQueue;
- (id)init;
- (void)invalidate;
- (void)invalidateWithFlags:(unsigned int)arg1;
- (id /* block */)invalidationHandler;
- (id)label;
- (void)setDispatchQueue:(id)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setLabel:(id)arg1;
- (void)speakText:(id)arg1 flags:(unsigned int)arg2 completion:(id /* block */)arg3;
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(bool)arg3 phonemesSpoken:(id)arg4 withError:(id)arg5;
- (void)speechSynthesizer:(id)arg1 didFinishSpeakingRequest:(id)arg2 successfully:(bool)arg3 withError2:(id)arg4;
- (void)speechSynthesizer:(id)arg1 didStartSpeakingRequest:(id)arg2;
- (void)stopSpeaking;

@end

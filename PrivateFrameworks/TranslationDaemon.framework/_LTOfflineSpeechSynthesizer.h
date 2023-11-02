
@interface _LTOfflineSpeechSynthesizer : NSObject {
    id /* block */  _completion;
    SiriTTSSpeechRequest * _currentRequest;
    SiriTTSDaemonSession * _session;
}

- (void).cxx_destruct;
- (void)cancel;
- (id)initWithCompletion:(id /* block */)arg1;
- (void)speak:(id)arg1 withContext:(id)arg2;

@end

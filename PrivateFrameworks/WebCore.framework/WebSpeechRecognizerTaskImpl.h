
@interface WebSpeechRecognizerTaskImpl : NSObject <SFSpeechRecognitionTaskDelegate, SFSpeechRecognizerDelegate> {
    struct BlockPtr<void (const WebCore::SpeechRecognitionUpdate &)>="m_block"@? {}  _delegateCallback;
    bool  _doMultipleRecognitions;
    bool  _hasSentEnd;
    bool  _hasSentSpeechEnd;
    bool  _hasSentSpeechStart;
    struct ObjectIdentifierGeneric<WebCore::SpeechRecognitionConnectionClientIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { 
        unsigned long long m_identifier; 
    }  _identifier;
    unsigned long long  _maxAlternatives;
    struct RetainPtr<SFSpeechRecognizer> { 
        void *m_ptr; 
    }  _recognizer;
    struct RetainPtr<SFSpeechAudioBufferRecognitionRequest> { 
        void *m_ptr; 
    }  _request;
    struct WeakObjCPtr<SFSpeechRecognitionTask> { 
        id m_weakReference; 
    }  _task;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)abort;
- (void)audioSamplesAvailable:(struct opaqueCMSampleBuffer { }*)arg1;
- (void)callbackWithTranscriptions:(id)arg1 isFinal:(bool)arg2;
- (id)initWithIdentifier:(struct ObjectIdentifierGeneric<WebCore::SpeechRecognitionConnectionClientIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { unsigned long long x1; })arg1 locale:(id)arg2 doMultipleRecognitions:(bool)arg3 reportInterimResults:(bool)arg4 maxAlternatives:(unsigned long long)arg5 delegateCallback:(id /* block */)arg6;
- (void)sendEndIfNeeded;
- (void)sendSpeechEndIfNeeded;
- (void)sendSpeechStartIfNeeded;
- (void)speechRecognitionTask:(id)arg1 didFinishRecognition:(id)arg2;
- (void)speechRecognitionTask:(id)arg1 didFinishSuccessfully:(bool)arg2;
- (void)speechRecognitionTask:(id)arg1 didHypothesizeTranscription:(id)arg2;
- (void)speechRecognitionTaskWasCancelled:(id)arg1;
- (void)speechRecognizer:(id)arg1 availabilityDidChange:(bool)arg2;
- (void)stop;

@end

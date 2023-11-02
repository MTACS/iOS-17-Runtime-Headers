
@interface WebSpeechRecognizerTask : NSObject {
    struct RetainPtr<WebSpeechRecognizerTaskImpl> { 
        void *m_ptr; 
    }  _impl;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)abort;
- (void)audioSamplesAvailable:(struct opaqueCMSampleBuffer { }*)arg1;
- (id)initWithIdentifier:(struct ObjectIdentifierGeneric<WebCore::SpeechRecognitionConnectionClientIdentifierType, WTF::ObjectIdentifierMainThreadAccessTraits> { unsigned long long x1; })arg1 locale:(id)arg2 doMultipleRecognitions:(bool)arg3 reportInterimResults:(bool)arg4 maxAlternatives:(unsigned long long)arg5 delegateCallback:(id /* block */)arg6;
- (void)stop;

@end

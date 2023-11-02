
@interface WebSpeechSynthesisWrapper : NSObject <AVSpeechSynthesizerDelegate> {
    struct RetainPtr<AVSpeechSynthesizer> { 
        void *m_ptr; 
    }  m_synthesizer;
    void * m_synthesizerObject;
    struct RefPtr<WebCore::PlatformSpeechSynthesisUtterance, WTF::RawPtrTraits<WebCore::PlatformSpeechSynthesisUtterance>, WTF::DefaultRefDerefTraits<WebCore::PlatformSpeechSynthesisUtterance>> { 
        struct PlatformSpeechSynthesisUtterance {} *m_ptr; 
    }  m_utterance;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)cancel;
- (id)initWithSpeechSynthesizer:(void*)arg1;
- (float)mapSpeechRateToPlatformRate:(float)arg1;
- (void)pause;
- (void)resetState;
- (void)resume;
- (void)speakUtterance:(void*)arg1;
- (void)speechSynthesizer:(id)arg1 didCancelSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didContinueSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didFinishSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didPauseSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 didStartSpeechUtterance:(id)arg2;
- (void)speechSynthesizer:(id)arg1 willSpeakRangeOfSpeechString:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 utterance:(id)arg3;

@end

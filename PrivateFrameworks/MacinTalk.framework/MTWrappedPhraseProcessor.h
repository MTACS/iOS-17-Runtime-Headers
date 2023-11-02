
@interface MTWrappedPhraseProcessor : NSObject {
    long long  _currentSampleCount;
    NSNumber * _defaultModulation;
    <MacinTalkPhraseProcessorDelegate> * _delegate;
    struct MTBEPersistentParam { float x1; float x2; float x3[4]; BOOL x4[4]; int x5; float x6; struct __CFDictionary {} *x7; short x8; short x9; struct SLLexer {} *x10; struct __CFArray {} *x11; struct MTMBDiphoneStatistics {} *x12; struct __CFDictionary {} *x13; struct SLDictLookup {} *x14; struct _opaque_pthread_mutex_t { long long x_15_1_1; BOOL x_15_1_2[56]; } x15; struct _opaque_pthread_cond_t { long long x_16_1_1; BOOL x_16_1_2[40]; } x16; struct MTMBSelectUnits {} *x17; } * _fPParams;
    AVAudioFormat * _format;
    MTFrontendSimple * _frontend;
    struct MTBENotifier { int (**x1)(); int x2; int x3; int x4; int x5; struct SpeechErrorInfo { short x_6_1_1; short x_6_1_2; long long x_6_1_3; short x_6_1_4; long long x_6_1_5; } x6; short x7; unsigned int x8; unsigned short x9[4]; } * _notifier;
    NSNumber * _pitchModulation;
    void * _processor;
    struct MTBENotifier { int (**x1)(); int x2; int x3; int x4; int x5; struct SpeechErrorInfo { short x_6_1_1; short x_6_1_2; long long x_6_1_3; short x_6_1_4; long long x_6_1_5; } x6; short x7; unsigned int x8; unsigned short x9[4]; } * _resetState;
    struct MTBENotifier { int (**x1)(); int x2; int x3; int x4; int x5; struct SpeechErrorInfo { short x_6_1_1; short x_6_1_2; long long x_6_1_3; short x_6_1_4; long long x_6_1_5; } x6; short x7; unsigned int x8; unsigned short x9[4]; } * _saveState;
    MTFVoice * _voice;
}

@property long long currentSampleCount;
@property (nonatomic, retain) NSNumber *defaultModulation;
@property (nonatomic) <MacinTalkPhraseProcessorDelegate> *delegate;
@property struct MTBEPersistentParam { float x1; float x2; float x3[4]; BOOL x4[4]; int x5; float x6; struct __CFDictionary {} *x7; short x8; short x9; struct SLLexer {} *x10; struct __CFArray {} *x11; struct MTMBDiphoneStatistics {} *x12; struct __CFDictionary {} *x13; struct SLDictLookup {} *x14; struct _opaque_pthread_mutex_t { long long x_15_1_1; BOOL x_15_1_2[56]; } x15; struct _opaque_pthread_cond_t { long long x_16_1_1; BOOL x_16_1_2[40]; } x16; struct MTMBSelectUnits {} *x17; }*fPParams;
@property (nonatomic, retain) AVAudioFormat *format;
@property (nonatomic, retain) MTFrontendSimple *frontend;
@property struct MTBENotifier { int (**x1)(); int x2; int x3; int x4; int x5; struct SpeechErrorInfo { short x_6_1_1; short x_6_1_2; long long x_6_1_3; short x_6_1_4; long long x_6_1_5; } x6; short x7; unsigned int x8; unsigned short x9[4]; }*notifier;
@property (nonatomic, retain) NSNumber *pitchModulation;
@property void*processor;
@property struct MTBENotifier { int (**x1)(); int x2; int x3; int x4; int x5; struct SpeechErrorInfo { short x_6_1_1; short x_6_1_2; long long x_6_1_3; short x_6_1_4; long long x_6_1_5; } x6; short x7; unsigned int x8; unsigned short x9[4]; }*resetState;
@property struct MTBENotifier { int (**x1)(); int x2; int x3; int x4; int x5; struct SpeechErrorInfo { short x_6_1_1; short x_6_1_2; long long x_6_1_3; short x_6_1_4; long long x_6_1_5; } x6; short x7; unsigned int x8; unsigned short x9[4]; }*saveState;
@property (nonatomic) MTFVoice *voice;

- (void).cxx_destruct;
- (long long)currentSampleCount;
- (void)dealloc;
- (id)defaultModulation;
- (id)delegate;
- (struct MTBEPersistentParam { float x1; float x2; float x3[4]; BOOL x4[4]; int x5; float x6; struct __CFDictionary {} *x7; short x8; short x9; struct SLLexer {} *x10; struct __CFArray {} *x11; struct MTMBDiphoneStatistics {} *x12; struct __CFDictionary {} *x13; struct SLDictLookup {} *x14; struct _opaque_pthread_mutex_t { long long x_15_1_1; BOOL x_15_1_2[56]; } x15; struct _opaque_pthread_cond_t { long long x_16_1_1; BOOL x_16_1_2[40]; } x16; struct MTMBSelectUnits {} *x17; }*)fPParams;
- (void)finishedSampleGeneration;
- (id)format;
- (id)frontend;
- (void)generatedSampleForPhoneme:(short)arg1;
- (void)generatedSampleForSync:(unsigned int)arg1;
- (void)generatedSampleForWord:(unsigned long long)arg1 length:(unsigned short)arg2;
- (id)initWithVoice:(id)arg1 frontend:(id)arg2;
- (id)nextBuffer;
- (struct MTBENotifier { int (**x1)(); int x2; int x3; int x4; int x5; struct SpeechErrorInfo { short x_6_1_1; short x_6_1_2; long long x_6_1_3; short x_6_1_4; long long x_6_1_5; } x6; short x7; unsigned int x8; unsigned short x9[4]; }*)notifier;
- (id)pitchModulation;
- (bool)processNextPhrase;
- (void*)processor;
- (struct MTBENotifier { int (**x1)(); int x2; int x3; int x4; int x5; struct SpeechErrorInfo { short x_6_1_1; short x_6_1_2; long long x_6_1_3; short x_6_1_4; long long x_6_1_5; } x6; short x7; unsigned int x8; unsigned short x9[4]; }*)resetState;
- (struct MTBENotifier { int (**x1)(); int x2; int x3; int x4; int x5; struct SpeechErrorInfo { short x_6_1_1; short x_6_1_2; long long x_6_1_3; short x_6_1_4; long long x_6_1_5; } x6; short x7; unsigned int x8; unsigned short x9[4]; }*)saveState;
- (void)setCurrentSampleCount:(long long)arg1;
- (void)setDefaultModulation:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setFPParams:(struct MTBEPersistentParam { float x1; float x2; float x3[4]; BOOL x4[4]; int x5; float x6; struct __CFDictionary {} *x7; short x8; short x9; struct SLLexer {} *x10; struct __CFArray {} *x11; struct MTMBDiphoneStatistics {} *x12; struct __CFDictionary {} *x13; struct SLDictLookup {} *x14; struct _opaque_pthread_mutex_t { long long x_15_1_1; BOOL x_15_1_2[56]; } x15; struct _opaque_pthread_cond_t { long long x_16_1_1; BOOL x_16_1_2[40]; } x16; struct MTMBSelectUnits {} *x17; }*)arg1;
- (void)setFormat:(id)arg1;
- (void)setFrontend:(id)arg1;
- (void)setNotifier:(struct MTBENotifier { int (**x1)(); int x2; int x3; int x4; int x5; struct SpeechErrorInfo { short x_6_1_1; short x_6_1_2; long long x_6_1_3; short x_6_1_4; long long x_6_1_5; } x6; short x7; unsigned int x8; unsigned short x9[4]; }*)arg1;
- (void)setPitchModulation:(id)arg1;
- (void)setProcessor:(void*)arg1;
- (void)setResetState:(struct MTBENotifier { int (**x1)(); int x2; int x3; int x4; int x5; struct SpeechErrorInfo { short x_6_1_1; short x_6_1_2; long long x_6_1_3; short x_6_1_4; long long x_6_1_5; } x6; short x7; unsigned int x8; unsigned short x9[4]; }*)arg1;
- (void)setSaveState:(struct MTBENotifier { int (**x1)(); int x2; int x3; int x4; int x5; struct SpeechErrorInfo { short x_6_1_1; short x_6_1_2; long long x_6_1_3; short x_6_1_4; long long x_6_1_5; } x6; short x7; unsigned int x8; unsigned short x9[4]; }*)arg1;
- (void)setVoice:(id)arg1;
- (id)voice;

@end

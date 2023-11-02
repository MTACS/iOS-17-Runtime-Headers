
@interface MTFVoice : NSObject {
    void * __pcmData;
    NSDictionary * _pitchCoeff;
    void * _voiceData;
    struct WrappedMTVoice { union MTBEVoiceContents { void *x_1_1_1; struct MEOWReader {} *x_1_1_2; struct PROWReader {} *x_1_1_3; } x1; } * _wrapped;
}

@property (nonatomic) void*_pcmData;
@property (nonatomic, readonly) struct VoiceDescription { int x1; struct VoiceSpec { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; int x3; unsigned char x4[64]; unsigned char x5[256]; short x6; short x7; short x8; short x9; short x10; int x11[4]; }*description;
@property (nonatomic, retain) NSDictionary *pitchCoeff;
@property (nonatomic, readonly) void*privateData;
@property (nonatomic) void*voiceData;
@property (nonatomic) struct WrappedMTVoice { union MTBEVoiceContents { void *x_1_1_1; struct MEOWReader {} *x_1_1_2; struct PROWReader {} *x_1_1_3; } x1; }*wrapped;

- (void).cxx_destruct;
- (void*)_pcmData;
- (void)dealloc;
- (struct VoiceDescription { int x1; struct VoiceSpec { unsigned int x_2_1_1; unsigned int x_2_1_2; } x2; int x3; unsigned char x4[64]; unsigned char x5[256]; short x6; short x7; short x8; short x9; short x10; int x11[4]; }*)description;
- (id)pitchCoeff;
- (void*)privateData;
- (void)setPitchCoeff:(id)arg1;
- (void)setVoiceData:(void*)arg1;
- (void)setWrapped:(struct WrappedMTVoice { union MTBEVoiceContents { void *x_1_1_1; struct MEOWReader {} *x_1_1_2; struct PROWReader {} *x_1_1_3; } x1; }*)arg1;
- (void)set_pcmData:(void*)arg1;
- (void*)voiceData;
- (struct WrappedMTVoice { union MTBEVoiceContents { void *x_1_1_1; struct MEOWReader {} *x_1_1_2; struct PROWReader {} *x_1_1_3; } x1; }*)wrapped;

@end

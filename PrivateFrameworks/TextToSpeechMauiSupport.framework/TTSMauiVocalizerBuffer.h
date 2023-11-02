
@interface TTSMauiVocalizerBuffer : NSObject <NSCopying> {
    AVAudioPCMBuffer * _audioBuffer;
    NSArray * _markers;
    struct { 
        int eMrkType; 
        unsigned long long cntSrcPos; 
        unsigned long long cntSrcTextLen; 
        unsigned long long cntDestPos; 
        unsigned long long cntDestLen; 
        unsigned short usValue; 
        unsigned int ulValue; 
        char *szValue; 
    }  markerBuffer;
    unsigned long long  markerCount;
}

@property (nonatomic, retain) AVAudioPCMBuffer *audioBuffer;
@property (nonatomic, retain) NSArray *markers;

- (void).cxx_destruct;
- (id)audioBuffer;
- (void)computeMarkers:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)fillInOutDataForBuffer:(struct { int x1; unsigned long long x2; void *x3; unsigned long long x4; struct { /* ? */ } *x5; }*)arg1;
- (id)init;
- (id)markers;
- (void*)rawAudioBufferPointer;
- (void)reset;
- (void)setAudioBuffer:(id)arg1;
- (void)setMarkers:(id)arg1;

@end

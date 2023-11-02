
@interface BWRefinedCinematographyNode : BWNode {
    BWNodeInput * _audioInput;
    BWNodeOutput * _audioOutput;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _firstAudioPTS;
    bool  _isRefinementSessionActive;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  _lastAudioPTS;
    int  _numEODMessagesReceived;
    PTCinematographyRefinement * _refinementSession;
    BWNodeInput * _videoInput;
    BWNodeOutput * _videoOutput;
}

@property (nonatomic, readonly) BWNodeInput *audioInput;
@property (nonatomic, readonly) BWNodeOutput *audioOutput;
@property (nonatomic, readonly) BWNodeInput *videoInput;
@property (nonatomic, readonly) BWNodeOutput *videoOutput;

+ (void)initialize;

- (id)audioInput;
- (id)audioOutput;
- (void)configurationWithID:(long long)arg1 updatedFormat:(id)arg2 didBecomeLiveForInput:(id)arg3;
- (void)dealloc;
- (void)didReachEndOfDataForInput:(id)arg1;
- (void)didSelectFormat:(id)arg1 forInput:(id)arg2;
- (id)initWithAudioEnabled:(bool)arg1;
- (id)nodeSubType;
- (id)nodeType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg1 forInput:(id)arg2;
- (id)videoInput;
- (id)videoOutput;

@end


@interface AVVCStartRecordSettings : NSObject {
    bool  _skipAlert;
    long long  _startAlert;
    unsigned int  _startAnchorPoint;
    unsigned long long  _startHostTime;
    long long  _stopAlert;
    long long  _stopOnErrorAlert;
    unsigned long long  _streamID;
}

@property (nonatomic) bool skipAlert;
@property (nonatomic) long long startAlert;
@property (nonatomic) unsigned int startAnchorPoint;
@property (nonatomic) unsigned long long startHostTime;
@property (nonatomic) long long stopAlert;
@property (nonatomic) long long stopOnErrorAlert;
@property (nonatomic) unsigned long long streamID;

// Image: /System/Library/Frameworks/AVFAudio.framework/AVFAudio

- (id)initWithStreamID:(unsigned long long)arg1 atStartHostTime:(unsigned long long)arg2;
- (void)setSkipAlert:(bool)arg1;
- (void)setStartAlert:(long long)arg1;
- (void)setStartAnchorPoint:(unsigned int)arg1;
- (void)setStartHostTime:(unsigned long long)arg1;
- (void)setStopAlert:(long long)arg1;
- (void)setStopOnErrorAlert:(long long)arg1;
- (void)setStreamID:(unsigned long long)arg1;
- (bool)skipAlert;
- (long long)startAlert;
- (unsigned int)startAnchorPoint;
- (unsigned long long)startHostTime;
- (long long)stopAlert;
- (long long)stopOnErrorAlert;
- (unsigned long long)streamID;

// Image: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech

- (id)debugDescription;

// Image: /System/Library/PrivateFrameworks/SpeakerRecognition.framework/SpeakerRecognition

- (id)debugDescription;

@end


@interface SXMediaEngageEvent : SXMediaEvent {
    NSError * _error;
    double  _mediaDuration;
    double  _mediaFrameRate;
    NSString * _mediaPauseMethod;
    unsigned long long  _mediaPausePosition;
    unsigned long long  _mediaPlayMethod;
    NSString * _mediaResumeMethod;
    unsigned long long  _mediaResumePosition;
    double  _mediaTimePlayed;
    bool  _muted;
    unsigned long long  _userAction;
    double  _volume;
}

@property (nonatomic, retain) NSError *error;
@property (nonatomic) double mediaDuration;
@property (nonatomic) double mediaFrameRate;
@property (nonatomic, retain) NSString *mediaPauseMethod;
@property (nonatomic) unsigned long long mediaPausePosition;
@property (nonatomic) unsigned long long mediaPlayMethod;
@property (nonatomic, retain) NSString *mediaResumeMethod;
@property (nonatomic) unsigned long long mediaResumePosition;
@property (nonatomic) double mediaTimePlayed;
@property (nonatomic) bool muted;
@property (nonatomic) unsigned long long userAction;
@property (nonatomic) double volume;

- (void).cxx_destruct;
- (id)error;
- (double)mediaDuration;
- (double)mediaFrameRate;
- (id)mediaPauseMethod;
- (unsigned long long)mediaPausePosition;
- (unsigned long long)mediaPlayMethod;
- (id)mediaResumeMethod;
- (unsigned long long)mediaResumePosition;
- (double)mediaTimePlayed;
- (bool)muted;
- (void)setError:(id)arg1;
- (void)setMediaDuration:(double)arg1;
- (void)setMediaFrameRate:(double)arg1;
- (void)setMediaPauseMethod:(id)arg1;
- (void)setMediaPausePosition:(unsigned long long)arg1;
- (void)setMediaPlayMethod:(unsigned long long)arg1;
- (void)setMediaResumeMethod:(id)arg1;
- (void)setMediaResumePosition:(unsigned long long)arg1;
- (void)setMediaTimePlayed:(double)arg1;
- (void)setMuted:(bool)arg1;
- (void)setUserAction:(unsigned long long)arg1;
- (void)setVolume:(double)arg1;
- (unsigned long long)userAction;
- (double)volume;

@end

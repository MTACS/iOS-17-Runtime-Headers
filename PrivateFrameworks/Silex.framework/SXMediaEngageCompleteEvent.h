
@interface SXMediaEngageCompleteEvent : SXMediaEvent {
    double  _mediaDuration;
    double  _mediaFrameRate;
    double  _mediaTimePlayed;
}

@property (nonatomic) double mediaDuration;
@property (nonatomic) double mediaFrameRate;
@property (nonatomic) double mediaTimePlayed;

- (double)mediaDuration;
- (double)mediaFrameRate;
- (double)mediaTimePlayed;
- (void)setMediaDuration:(double)arg1;
- (void)setMediaFrameRate:(double)arg1;
- (void)setMediaTimePlayed:(double)arg1;

@end

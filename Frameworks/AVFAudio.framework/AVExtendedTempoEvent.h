
@interface AVExtendedTempoEvent : AVMusicEvent {
    double  _bpm;
}

@property double tempo;

- (id)initWithTempo:(double)arg1;
- (void)setTempo:(double)arg1;
- (double)tempo;

@end

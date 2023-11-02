
@interface CBDigitizerHotspotTTF : CBDigitizerHotspot {
    NSMutableArray * _buffer;
    unsigned long long  _touchBufferWindowS;
}

@property unsigned long long touchBufferWindowS;

- (float)computeBackoff:(float)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)setTouchBufferWindowS:(unsigned long long)arg1;
- (void)setTouchReleaseTime:(float)arg1;
- (unsigned long long)touchBufferWindowS;

@end

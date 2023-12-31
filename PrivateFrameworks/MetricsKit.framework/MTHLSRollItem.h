
@interface MTHLSRollItem : MTHLSItem {
    unsigned long long  _duration;
}

@property (nonatomic) unsigned long long duration;

- (bool)containsOverallPosition:(unsigned long long)arg1;
- (unsigned long long)duration;
- (unsigned long long)endOverallPosition;
- (id)initWithStartOverallPosition:(unsigned long long)arg1 duration:(unsigned long long)arg2 metricsData:(id)arg3;
- (void)setDuration:(unsigned long long)arg1;

@end

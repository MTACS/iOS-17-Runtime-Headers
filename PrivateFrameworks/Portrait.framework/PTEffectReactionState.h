
@interface PTEffectReactionState : NSObject {
    unsigned long long  _effectType;
    double  _startTime;
}

@property unsigned long long effectType;
@property double startTime;

- (unsigned long long)effectType;
- (void)setEffectType:(unsigned long long)arg1;
- (void)setStartTime:(double)arg1;
- (double)startTime;

@end

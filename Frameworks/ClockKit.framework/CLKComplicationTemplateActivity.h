
@interface CLKComplicationTemplateActivity : CLKComplicationTemplate {
    double  _exercisePercentComplete;
    long long  _family;
    bool  _hideDots;
    double  _movePercentComplete;
    double  _standPercentComplete;
}

@property (nonatomic) double exercisePercentComplete;
@property (getter=dotsAreHidden, nonatomic) bool hideDots;
@property (nonatomic) double movePercentComplete;
@property (nonatomic) double standPercentComplete;

+ (id)activityTemplateWithFamily:(long long)arg1;

- (void)_enumerateBOOLKeysWithBlock:(id /* block */)arg1;
- (void)_enumerateFloatKeysWithBlock:(id /* block */)arg1;
- (long long)compatibleFamily;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (bool)dotsAreHidden;
- (double)exercisePercentComplete;
- (id)initWithFamily:(long long)arg1;
- (double)movePercentComplete;
- (void)setExercisePercentComplete:(double)arg1;
- (void)setHideDots:(bool)arg1;
- (void)setMovePercentComplete:(double)arg1;
- (void)setStandPercentComplete:(double)arg1;
- (double)standPercentComplete;

@end

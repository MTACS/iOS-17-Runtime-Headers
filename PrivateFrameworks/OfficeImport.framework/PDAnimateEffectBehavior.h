
@interface PDAnimateEffectBehavior : PDAnimateBehavior {
    bool  mHasTransition;
    NSMutableDictionary * mPropertyMap;
    int  mTransition;
}

@property (nonatomic, retain) NSMutableDictionary *propertyMap;

- (void).cxx_destruct;
- (bool)hasProperties;
- (bool)hasTransition;
- (id)init;
- (id)propertyMap;
- (void)setPropertyMap:(id)arg1;
- (void)setTransition:(int)arg1;
- (int)transition;

@end

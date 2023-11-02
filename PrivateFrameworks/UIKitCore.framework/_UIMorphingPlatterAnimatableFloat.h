
@interface _UIMorphingPlatterAnimatableFloat : UIViewFloatAnimatableProperty {
    bool  _lastModelValueChangeWasPositive;
}

@property (nonatomic, readonly) bool lastModelValueChangeWasPositive;

- (bool)lastModelValueChangeWasPositive;
- (void)setValue:(double)arg1;

@end

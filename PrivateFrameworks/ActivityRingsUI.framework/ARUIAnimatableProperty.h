
@interface ARUIAnimatableProperty : NSObject {
    NSMutableArray * _animations;
    id  _currentValue;
    id  _endValue;
    id /* block */  _getter;
    id /* block */  _setter;
    id  _startValue;
}

@property (nonatomic, retain) id currentValue;
@property (nonatomic, retain) id endValue;
@property (nonatomic, retain) id startValue;

- (void).cxx_destruct;
- (void)addPropertyAnimation:(id)arg1;
- (id)currentValue;
- (id)endValue;
- (id)initWithGetter:(id /* block */)arg1 setter:(id /* block */)arg2;
- (bool)isFinishedAnimating;
- (void)removeAllPropertyAnimations;
- (void)setCurrentValue:(id)arg1;
- (void)setEndValue:(id)arg1;
- (void)setStartValue:(id)arg1;
- (void)setValueImmediate:(id)arg1;
- (id)startValue;
- (void)update:(double)arg1;

@end

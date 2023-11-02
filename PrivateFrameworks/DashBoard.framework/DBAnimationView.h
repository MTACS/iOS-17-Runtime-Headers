
@interface DBAnimationView : UIView {
    NSArray * _keysToAnimate;
}

@property (nonatomic, copy) NSArray *keysToAnimate;

- (void).cxx_destruct;
- (bool)_shouldAnimatePropertyWithKey:(id)arg1;
- (id)keysToAnimate;
- (void)setKeysToAnimate:(id)arg1;

@end

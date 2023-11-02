
@interface JFXTextEffectTransforms : NSObject {
    PVMatrix44Double * _transform;
}

@property (nonatomic, copy) PVMatrix44Double *transform;

+ (id)transformsWithEffect:(id)arg1;
+ (id)transformsWithTransform:(id)arg1;

- (void).cxx_destruct;
- (void)applyToEffect:(id)arg1;
- (id)initWithEffect:(id)arg1;
- (id)initWithTransform:(id)arg1;
- (void)setTransform:(id)arg1;
- (id)transform;

@end

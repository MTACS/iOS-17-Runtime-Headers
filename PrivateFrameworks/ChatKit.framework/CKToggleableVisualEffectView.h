
@interface CKToggleableVisualEffectView : UIVisualEffectView {
    void isEffectActive;
    void toggleableEffect;
}

@property (nonatomic) bool isEffectActive;

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (id)initWithEffect:(id)arg1;
- (bool)isEffectActive;
- (void)setIsEffectActive:(bool)arg1;

@end

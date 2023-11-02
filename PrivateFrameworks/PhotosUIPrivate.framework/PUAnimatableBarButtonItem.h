
@interface PUAnimatableBarButtonItem : UIBarButtonItem {
    void animationButton;
    void currentButton;
    void currentImageName;
    void propertyAnimator;
}

@property (nonatomic, copy) NSString *currentImageName;

+ (id)barButtonItemWithSystemImageName:(id)arg1;

- (void).cxx_destruct;
- (void)addTarget:(id)arg1 action:(SEL)arg2 for:(unsigned long long)arg3;
- (id)currentImageName;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)setCurrentImageName:(id)arg1;
- (void)setImageNamed:(id)arg1 animation:(long long)arg2;

@end

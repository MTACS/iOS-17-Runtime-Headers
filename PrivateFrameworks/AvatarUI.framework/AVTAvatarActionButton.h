
@interface AVTAvatarActionButton : UIButton {
    bool  _isDestructive;
}

@property (nonatomic) bool isDestructive;

+ (id)buttonWithAction:(id)arg1;
+ (id)defaultButtonWithAction:(id)arg1;
+ (id)destructiveButtonWithAction:(id)arg1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDestructive;
- (void)setHighlighted:(bool)arg1;
- (void)setIsDestructive:(bool)arg1;

@end

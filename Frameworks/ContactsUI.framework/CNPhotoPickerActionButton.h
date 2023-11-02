
@interface CNPhotoPickerActionButton : UIButton {
    CNPhotoPickerActionButtonBlockHandler * _blockHandler;
    bool  _isDestructive;
}

@property (nonatomic, retain) CNPhotoPickerActionButtonBlockHandler *blockHandler;
@property (nonatomic) bool isDestructive;

+ (id)buttonWithTitle:(id)arg1 actionBlock:(id /* block */)arg2;
+ (id)defaultActionButtonTextColor;
+ (id)defaultButtonWithTitle:(id)arg1 actionBlock:(id /* block */)arg2;
+ (id)destructiveButtonWithTitle:(id)arg1 actionBlock:(id /* block */)arg2;

- (void).cxx_destruct;
- (id)blockHandler;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (bool)isDestructive;
- (void)performActionBlock;
- (void)setBlockHandler:(id)arg1;
- (void)setIsDestructive:(bool)arg1;

@end


@interface CNGroupIdentityActionItem : NSObject {
    id /* block */  _actionBlock;
    NSString * _actionType;
    <CNGroupIdentityActionItemDelegate> * _delegate;
    UIImage * _image;
    bool  _overrideEnabledState;
    bool  _shouldOverrideEnabledState;
    bool  _shouldPresentDisambiguationUI;
    NSString * _title;
}

@property (nonatomic, copy) id /* block */ actionBlock;
@property (nonatomic, readonly) NSString *actionType;
@property (nonatomic) <CNGroupIdentityActionItemDelegate> *delegate;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic) bool overrideEnabledState;
@property (nonatomic) bool shouldOverrideEnabledState;
@property (nonatomic) bool shouldPresentDisambiguationUI;
@property (nonatomic, readonly) NSString *title;

+ (id)imageForSystemImageNamed:(id)arg1;
+ (id)imageForSystemImageNamed:(id)arg1 withPointSize:(double)arg2;
+ (id)imageForSystemImageNamed:(id)arg1 withTextStyle:(id)arg2;

- (void).cxx_destruct;
- (id /* block */)actionBlock;
- (id)actionType;
- (id)delegate;
- (id)image;
- (id)initWithTitle:(id)arg1 actionType:(id)arg2 actionBlock:(id /* block */)arg3;
- (id)initWithTitle:(id)arg1 actionType:(id)arg2 image:(id)arg3 actionBlock:(id /* block */)arg4;
- (id)initWithTitle:(id)arg1 actionType:(id)arg2 systemImageName:(id)arg3 actionBlock:(id /* block */)arg4;
- (id)initWithTitle:(id)arg1 actionType:(id)arg2 systemImageName:(id)arg3 overrideEnabledState:(bool)arg4 actionBlock:(id /* block */)arg5;
- (bool)overrideEnabledState;
- (void)setActionBlock:(id /* block */)arg1;
- (void)setDelegate:(id)arg1;
- (void)setOverrideEnabledState:(bool)arg1;
- (void)setShouldOverrideEnabledState:(bool)arg1;
- (void)setShouldPresentDisambiguationUI:(bool)arg1;
- (bool)shouldOverrideEnabledState;
- (bool)shouldPresentDisambiguationUI;
- (id)title;

@end

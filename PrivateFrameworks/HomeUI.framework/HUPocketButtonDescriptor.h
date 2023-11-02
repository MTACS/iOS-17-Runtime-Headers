
@interface HUPocketButtonDescriptor : NSObject {
    SEL  _action;
    id /* block */  _block;
    unsigned long long  _style;
    id  _target;
    NSString * _title;
    <NSCopying> * _userInfo;
}

@property (nonatomic) SEL action;
@property (nonatomic, readonly) UIColor *backgroundColor;
@property (nonatomic, copy) id /* block */ block;
@property (nonatomic) unsigned long long style;
@property (nonatomic) id target;
@property (nonatomic, readonly) UIColor *textColor;
@property (nonatomic, copy) NSString *title;
@property (nonatomic, copy) <NSCopying> *userInfo;

+ (id)descriptorWithTitle:(id)arg1 style:(unsigned long long)arg2 target:(id)arg3 action:(SEL)arg4 userInfo:(id)arg5;
+ (id)descriptorWithTitle:(id)arg1 style:(unsigned long long)arg2 userInfo:(id)arg3 block:(id /* block */)arg4;

- (void).cxx_destruct;
- (SEL)action;
- (id)backgroundColor;
- (id /* block */)block;
- (void)execute;
- (void)setAction:(SEL)arg1;
- (void)setBlock:(id /* block */)arg1;
- (void)setStyle:(unsigned long long)arg1;
- (void)setTarget:(id)arg1;
- (void)setTitle:(id)arg1;
- (void)setUserInfo:(id)arg1;
- (unsigned long long)style;
- (id)target;
- (id)textColor;
- (id)title;
- (id)userInfo;

@end

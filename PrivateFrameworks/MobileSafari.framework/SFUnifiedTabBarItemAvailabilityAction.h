
@interface SFUnifiedTabBarItemAvailabilityAction : NSObject {
    id /* block */  _action;
    long long  _buttonType;
    UIImage * _image;
    NSString * _title;
}

@property (nonatomic, readonly, copy) id /* block */ action;
@property (nonatomic, readonly) long long buttonType;
@property (nonatomic, readonly) UIImage *image;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (id /* block */)action;
- (long long)buttonType;
- (id)image;
- (id)initWithTitle:(id)arg1 image:(id)arg2 buttonType:(long long)arg3 action:(id /* block */)arg4;
- (void)performAction;
- (id)title;

@end

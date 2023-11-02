
@interface LAPasscodeChangeEnvironmentConfig : NSObject {
    NSString * _oldPasscodePrompt;
    UIViewController * _parentVC;
    NSString * _passcodePrompt;
    NSString * _title;
}

@property (nonatomic, retain) NSString *oldPasscodePrompt;
@property (nonatomic, readonly) UIViewController *parentVC;
@property (nonatomic, retain) NSString *passcodePrompt;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)initWithParentVC:(id)arg1;
- (id)oldPasscodePrompt;
- (id)parentVC;
- (id)passcodePrompt;
- (void)setOldPasscodePrompt:(id)arg1;
- (void)setPasscodePrompt:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end

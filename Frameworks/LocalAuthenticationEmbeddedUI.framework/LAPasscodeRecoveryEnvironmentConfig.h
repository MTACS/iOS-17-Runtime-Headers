
@interface LAPasscodeRecoveryEnvironmentConfig : NSObject {
    NSString * _oldPasscodePrompt;
    UIViewController * _parentVC;
    NSString * _title;
}

@property (nonatomic, retain) NSString *oldPasscodePrompt;
@property (nonatomic, readonly) UIViewController *parentVC;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)initWithParentVC:(id)arg1;
- (id)oldPasscodePrompt;
- (id)parentVC;
- (void)setOldPasscodePrompt:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end

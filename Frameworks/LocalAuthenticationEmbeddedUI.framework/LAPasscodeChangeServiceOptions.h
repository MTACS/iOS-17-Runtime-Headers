
@interface LAPasscodeChangeServiceOptions : NSObject {
    NSString * _passcodePrompt;
    NSString * _title;
}

@property (nonatomic, retain) NSString *passcodePrompt;
@property (nonatomic, retain) NSString *title;

- (void).cxx_destruct;
- (id)passcodePrompt;
- (void)setPasscodePrompt:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end


@interface AUPasscodeCodecCommandLineOption : NSObject {
    NSString * _optionDescription;
    NSString * _optionSyntax;
}

@property (nonatomic, readonly) NSString *optionDescription;
@property (nonatomic, readonly) NSString *optionSyntax;

+ (id)optionWithSyntax:(id)arg1 description:(id)arg2;

- (void).cxx_destruct;
- (id)initWithSyntax:(id)arg1 description:(id)arg2;
- (id)optionDescription;
- (id)optionSyntax;

@end

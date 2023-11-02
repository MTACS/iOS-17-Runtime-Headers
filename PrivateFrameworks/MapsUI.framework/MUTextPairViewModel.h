
@interface MUTextPairViewModel : NSObject {
    NSString * _leftText;
    NSString * _rightText;
}

@property (nonatomic, retain) NSString *leftText;
@property (nonatomic, retain) NSString *rightText;

+ (id)textPairViewModelsFromStrings:(id)arg1;

- (void).cxx_destruct;
- (id)leftText;
- (id)rightText;
- (void)setLeftText:(id)arg1;
- (void)setRightText:(id)arg1;

@end

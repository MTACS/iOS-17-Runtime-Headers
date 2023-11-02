
@interface MULabeledTokenViewModel : NSObject {
    NSString * _labelValue;
    NSString * _tokenValue;
}

@property (nonatomic, readonly) NSString *labelValue;
@property (nonatomic, readonly) NSString *tokenValue;

- (void).cxx_destruct;
- (id)initWithLabelValue:(id)arg1 tokenValue:(id)arg2;
- (id)labelValue;
- (id)tokenValue;

@end

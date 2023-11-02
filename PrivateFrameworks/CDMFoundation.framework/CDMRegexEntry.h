
@interface CDMRegexEntry : NSObject {
    NSString * _label;
    NSRegularExpression * _regularExpression;
}

@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSRegularExpression *regularExpression;

- (void).cxx_destruct;
- (id)initWithRegex:(id)arg1 label:(id)arg2;
- (id)label;
- (id)regularExpression;

@end

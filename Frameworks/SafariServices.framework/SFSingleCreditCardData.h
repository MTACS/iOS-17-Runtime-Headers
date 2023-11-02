
@interface SFSingleCreditCardData : WBSSingleCreditCardData <NSSecureCoding> {
    NSString * _displayText;
    NSString * _headerText;
}

@property (nonatomic, readonly, copy) NSString *displayText;
@property (nonatomic, readonly, copy) NSString *headerText;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)displayText;
- (void)encodeWithCoder:(id)arg1;
- (id)headerText;
- (id)initWithCoder:(id)arg1;
- (id)initWithHeaderText:(id)arg1 displayText:(id)arg2 type:(long long)arg3 value:(id)arg4;

@end

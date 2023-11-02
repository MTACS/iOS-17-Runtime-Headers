
@interface WBSSingleCreditCardData : NSObject <NSSecureCoding> {
    bool  _isCardFromWallet;
    long long  _type;
    id  _value;
}

@property (nonatomic) bool isCardFromWallet;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly) id value;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithValue:(id)arg1 type:(long long)arg2;
- (bool)isCardFromWallet;
- (void)setIsCardFromWallet:(bool)arg1;
- (long long)type;
- (id)value;

@end

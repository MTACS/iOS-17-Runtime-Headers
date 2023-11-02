
@interface PKSearchQuery : NSObject <NSSecureCoding> {
    unsigned long long  _domain;
    NSString * _identifier;
    NSString * _keyboardLanguage;
    NSString * _text;
    NSArray * _tokens;
    unsigned long long  _type;
}

@property (nonatomic, readonly) unsigned long long domain;
@property (nonatomic, retain) NSString *identifier;
@property (nonatomic, retain) NSString *keyboardLanguage;
@property (nonatomic, copy) NSString *text;
@property (nonatomic, copy) NSArray *tokens;
@property (nonatomic) unsigned long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_groupTokenOfType:(unsigned long long)arg1;
- (id)accountUserToken;
- (id)amountToken;
- (id)categoryToken;
- (id)dateToken;
- (id)description;
- (unsigned long long)domain;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 keyboardLanguage:(id)arg2;
- (bool)isEmpty;
- (bool)isEqual:(id)arg1;
- (id)keyboardLanguage;
- (id)locationTokens;
- (id)merchantToken;
- (id)peerPaymentSubTypeToken;
- (id)peerPaymentToken;
- (id)rewardsToken;
- (void)setIdentifier:(id)arg1;
- (void)setKeyboardLanguage:(id)arg1;
- (void)setText:(id)arg1;
- (void)setTokens:(id)arg1;
- (void)setType:(unsigned long long)arg1;
- (id)tags;
- (id)text;
- (id)tokens;
- (id)transactionSources;
- (id)transactionStatuses;
- (id)transactionTypes;
- (unsigned long long)type;

@end

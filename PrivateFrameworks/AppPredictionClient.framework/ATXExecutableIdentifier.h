
@interface ATXExecutableIdentifier : NSObject <NSSecureCoding> {
    <ATXSuggestionExecutableProtocol> * _object;
    unsigned long long  _type;
}

@property (nonatomic, readonly) NSString *debugTitle;
@property (nonatomic, readonly) <ATXSuggestionExecutableProtocol> *object;
@property (nonatomic, readonly) unsigned long long type;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)debugTitle;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithAction:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHeroAppPrediction:(id)arg1;
- (id)initWithInfoSuggestion:(id)arg1;
- (id)initWithLinkAction:(id)arg1;
- (id)initWithString:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)object;
- (unsigned long long)type;

@end

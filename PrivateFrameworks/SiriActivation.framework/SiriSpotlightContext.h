
@interface SiriSpotlightContext : SiriContext {
    long long  _source;
    NSString * _utteranceText;
}

@property (nonatomic) long long source;
@property (nonatomic, copy) NSString *utteranceText;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setSource:(long long)arg1;
- (void)setUtteranceText:(id)arg1;
- (long long)source;
- (id)utteranceText;

@end

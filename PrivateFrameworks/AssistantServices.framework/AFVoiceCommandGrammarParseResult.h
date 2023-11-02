
@interface AFVoiceCommandGrammarParseResult : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _parseCandidates;
    NSString * _utterance;
}

@property (nonatomic, readonly, copy) NSArray *parseCandidates;
@property (nonatomic, readonly, copy) NSString *utterance;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithUtterance:(id)arg1 parseCandidates:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)parseCandidates;
- (id)utterance;

@end

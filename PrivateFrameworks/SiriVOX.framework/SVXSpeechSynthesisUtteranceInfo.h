
@interface SVXSpeechSynthesisUtteranceInfo : NSObject <NSCopying, NSSecureCoding> {
    NSString * _utterance;
    NSArray * _wordTimings;
}

@property (nonatomic, readonly, copy) NSString *utterance;
@property (nonatomic, readonly, copy) NSArray *wordTimings;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithUtterance:(id)arg1 wordTimings:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (id)utterance;
- (id)wordTimings;

@end

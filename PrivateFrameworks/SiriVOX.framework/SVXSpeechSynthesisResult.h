
@interface SVXSpeechSynthesisResult : NSObject <NSCopying, NSSecureCoding> {
    NSError * _error;
    long long  _type;
    SVXSpeechSynthesisUtteranceInfo * _utteranceInfo;
}

@property (nonatomic, readonly, copy) NSError *error;
@property (nonatomic, readonly) long long type;
@property (nonatomic, readonly, copy) SVXSpeechSynthesisUtteranceInfo *utteranceInfo;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(long long)arg1 utteranceInfo:(id)arg2 error:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)mutatedCopyWithMutator:(id /* block */)arg1;
- (long long)type;
- (id)utteranceInfo;

@end

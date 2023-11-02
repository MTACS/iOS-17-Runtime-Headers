
@interface TIPinyinDisambiguationCandidate : TIKeyboardCandidateSingle {
    bool  _generatedByChoosePinyin;
    NSString * _label;
}

@property (getter=isGeneratedByChoosePinyin, nonatomic) bool generatedByChoosePinyin;

+ (id)candidateWithPinyinSyllable:(id)arg1;
+ (bool)supportsSecureCoding;
+ (int)type;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCandidateResultSetCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCandidateResultSetCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPinyinSyllable:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isGeneratedByChoosePinyin;
- (id)label;
- (void)setGeneratedByChoosePinyin:(bool)arg1;
- (void)setLabel:(id)arg1;

@end

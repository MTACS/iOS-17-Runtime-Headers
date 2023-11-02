
@interface SFEndLocalSearchFeedback : SFEndSearchFeedback {
    SFQueryUnderstandingParse * _quParse;
}

@property (nonatomic, retain) SFQueryUnderstandingParse *quParse;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithStartSearch:(id)arg1;
- (id)initWithStartSearch:(id)arg1 queryUnderstandingParse:(id)arg2;
- (id)quParse;
- (void)setQuParse:(id)arg1;

@end

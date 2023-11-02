
@interface AFSpeechToken : NSObject <NSSecureCoding> {
    NSNumber * _acousticCost;
    long long  _confidenceScore;
    double  _endTime;
    NSNumber * _graphCost;
    NSString * _ipaPhoneSequence;
    NSString * _phoneSequence;
    bool  _removeSpaceAfter;
    bool  _removeSpaceBefore;
    double  _silenceStartTime;
    double  _startTime;
    NSString * _text;
}

@property (nonatomic, copy) NSNumber *acousticCost;
@property (nonatomic) long long confidenceScore;
@property (nonatomic) double endTime;
@property (nonatomic, copy) NSNumber *graphCost;
@property (nonatomic, copy) NSString *ipaPhoneSequence;
@property (nonatomic, copy) NSString *phoneSequence;
@property (nonatomic) bool removeSpaceAfter;
@property (nonatomic) bool removeSpaceBefore;
@property (nonatomic) double silenceStartTime;
@property (nonatomic) double startTime;
@property (nonatomic, copy) NSString *text;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)aceToken;
- (id)acousticCost;
- (long long)confidenceScore;
- (id)description;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (double)endTime;
- (id)graphCost;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)ipaPhoneSequence;
- (bool)isEqual:(id)arg1;
- (id)phoneSequence;
- (bool)removeSpaceAfter;
- (bool)removeSpaceBefore;
- (void)setAcousticCost:(id)arg1;
- (void)setConfidenceScore:(long long)arg1;
- (void)setEndTime:(double)arg1;
- (void)setGraphCost:(id)arg1;
- (void)setIpaPhoneSequence:(id)arg1;
- (void)setPhoneSequence:(id)arg1;
- (void)setRemoveSpaceAfter:(bool)arg1;
- (void)setRemoveSpaceBefore:(bool)arg1;
- (void)setSilenceStartTime:(double)arg1;
- (void)setStartTime:(double)arg1;
- (void)setText:(id)arg1;
- (double)silenceStartTime;
- (double)startTime;
- (id)text;

@end


@interface SIRINLUAsrTokenInformation : NSObject <NSSecureCoding> {
    bool  _addSpaceAfter;
    unsigned int  _beginIndex;
    double  _confidenceScore;
    unsigned int  _endIndex;
    int  _endMilliSeconds;
    NSString * _ipaPhoneSequence;
    NSString * _phoneSequence;
    NSString * _postITNText;
    bool  _removeSpaceAfter;
    bool  _removeSpaceBefore;
    int  _startMilliSeconds;
}

@property (nonatomic) bool addSpaceAfter;
@property (nonatomic) unsigned int beginIndex;
@property (nonatomic) double confidenceScore;
@property (nonatomic) unsigned int endIndex;
@property (nonatomic) int endMilliSeconds;
@property (nonatomic, retain) NSString *ipaPhoneSequence;
@property (nonatomic, retain) NSString *phoneSequence;
@property (nonatomic, retain) NSString *postITNText;
@property (nonatomic) bool removeSpaceAfter;
@property (nonatomic) bool removeSpaceBefore;
@property (nonatomic) int startMilliSeconds;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)addSpaceAfter;
- (unsigned int)beginIndex;
- (double)confidenceScore;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)endIndex;
- (int)endMilliSeconds;
- (id)initWithCoder:(id)arg1;
- (id)initWithPostITNText:(id)arg1 phoneSequence:(id)arg2 ipaPhoneSequence:(id)arg3 addSpaceAfter:(bool)arg4 removeSpaceAfter:(bool)arg5 removeSpaceBefore:(bool)arg6 confidenceScore:(double)arg7 beginIndex:(unsigned int)arg8 endIndex:(unsigned int)arg9;
- (id)initWithPostITNText:(id)arg1 phoneSequence:(id)arg2 ipaPhoneSequence:(id)arg3 addSpaceAfter:(bool)arg4 removeSpaceAfter:(bool)arg5 removeSpaceBefore:(bool)arg6 confidenceScore:(double)arg7 beginIndex:(unsigned int)arg8 endIndex:(unsigned int)arg9 startMilliSeconds:(int)arg10 endMilliSeconds:(int)arg11;
- (id)ipaPhoneSequence;
- (id)phoneSequence;
- (id)postITNText;
- (bool)removeSpaceAfter;
- (bool)removeSpaceBefore;
- (void)setAddSpaceAfter:(bool)arg1;
- (void)setBeginIndex:(unsigned int)arg1;
- (void)setConfidenceScore:(double)arg1;
- (void)setEndIndex:(unsigned int)arg1;
- (void)setEndMilliSeconds:(int)arg1;
- (void)setIpaPhoneSequence:(id)arg1;
- (void)setPhoneSequence:(id)arg1;
- (void)setPostITNText:(id)arg1;
- (void)setRemoveSpaceAfter:(bool)arg1;
- (void)setRemoveSpaceBefore:(bool)arg1;
- (void)setStartMilliSeconds:(int)arg1;
- (int)startMilliSeconds;

@end

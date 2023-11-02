
@interface EARSpeechRecognitionToken : NSObject <NSCopying, NSSecureCoding> {
    bool  _appendedAutoPunctuation;
    double  _confidence;
    double  _end;
    bool  _hasSpaceAfter;
    bool  _hasSpaceBefore;
    NSString * _ipaPhoneSequence;
    bool  _isModifiedByAutoPunctuation;
    NSString * _phoneSequence;
    bool  _prependedAutoPunctuation;
    double  _silenceStart;
    double  _start;
    NSString * _tokenName;
}

@property (nonatomic, readonly) bool appendedAutoPunctuation;
@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly) double end;
@property (nonatomic, readonly) bool hasSpaceAfter;
@property (nonatomic, readonly) bool hasSpaceBefore;
@property (nonatomic, readonly) NSString *ipaPhoneSequence;
@property (nonatomic, readonly) bool isModifiedByAutoPunctuation;
@property (nonatomic, readonly) NSString *phoneSequence;
@property (nonatomic, readonly) bool prependedAutoPunctuation;
@property (nonatomic, readonly) double silenceStart;
@property (nonatomic, readonly) double start;
@property (nonatomic, readonly, copy) NSString *tokenName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)appendedAutoPunctuation;
- (double)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (double)end;
- (bool)hasSpaceAfter;
- (bool)hasSpaceBefore;
- (id)initWithCoder:(id)arg1;
- (id)initWithToken:(id)arg1;
- (id)ipaPhoneSequence;
- (bool)isModifiedByAutoPunctuation;
- (id)phoneSequence;
- (bool)prependedAutoPunctuation;
- (double)silenceStart;
- (double)start;
- (id)tokenName;

@end

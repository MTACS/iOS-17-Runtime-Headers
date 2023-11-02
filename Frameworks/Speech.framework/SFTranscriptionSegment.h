
@interface SFTranscriptionSegment : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _alternativeConfidences;
    NSArray * _alternativeSubstrings;
    float  _confidence;
    double  _duration;
    NSString * _ipaPhoneSequence;
    NSString * _phoneSequence;
    NSString * _substring;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _substringRange;
    double  _timestamp;
    SFVoiceAnalytics * _voiceAnalytics;
}

@property (nonatomic, readonly) NSArray *alternativeConfidences;
@property (nonatomic, readonly) NSArray *alternativeSubstrings;
@property (nonatomic, readonly) float confidence;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) NSString *ipaPhoneSequence;
@property (nonatomic, readonly) NSString *phoneSequence;
@property (nonatomic, readonly, copy) NSString *substring;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } substringRange;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) SFVoiceAnalytics *voiceAnalytics;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithSubstring:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 timestamp:(double)arg3 duration:(double)arg4 confidence:(float)arg5 alternativeSubstrings:(id)arg6 alternativeConfidences:(id)arg7 phoneSequence:(id)arg8 ipaPhoneSequence:(id)arg9 voiceAnalytics:(id)arg10;
- (id)alternativeConfidences;
- (id)alternativeSubstrings;
- (float)confidence;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)ipaPhoneSequence;
- (bool)isEqual:(id)arg1;
- (id)phoneSequence;
- (id)substring;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })substringRange;
- (double)timestamp;
- (id)voiceAnalytics;

@end

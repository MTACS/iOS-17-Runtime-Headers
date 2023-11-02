
@interface _LTSpeechTranscription : NSObject <NSSecureCoding> {
    double  _confidence;
    NSString * _formattedString;
    NSLocale * _locale;
    bool  _lowConfidence;
    double  _maxConfidence;
    double  _minConfidence;
    NSString * _sanitizedFormattedString;
}

@property (nonatomic) double confidence;
@property (nonatomic, copy) NSString *formattedString;
@property (nonatomic, copy) NSLocale *locale;
@property (getter=isLowConfidence, nonatomic) bool lowConfidence;
@property (nonatomic) double maxConfidence;
@property (nonatomic) double minConfidence;
@property (nonatomic, copy) NSString *sanitizedFormattedString;

// Image: /System/Library/PrivateFrameworks/Translation.framework/Translation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)confidence;
- (void)encodeWithCoder:(id)arg1;
- (id)formattedString;
- (id)initWithCoder:(id)arg1;
- (id)initWithFormattedString:(id)arg1 locale:(id)arg2 confidence:(double)arg3 minConfidence:(double)arg4 maxConfidence:(double)arg5;
- (bool)isLowConfidence;
- (id)locale;
- (double)maxConfidence;
- (double)minConfidence;
- (id)sanitizedFormattedString;
- (void)setConfidence:(double)arg1;
- (void)setFormattedString:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setLowConfidence:(bool)arg1;
- (void)setMaxConfidence:(double)arg1;
- (void)setMinConfidence:(double)arg1;
- (void)setSanitizedFormattedString:(id)arg1;

// Image: /System/Library/PrivateFrameworks/TranslationDaemon.framework/TranslationDaemon

- (id)initWithRecognitionChoice:(id)arg1 inSausage:(id)arg2;

@end

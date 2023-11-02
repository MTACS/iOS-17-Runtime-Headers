
@interface VATSpeechTranscription : NSObject {
    double  _confidence;
    NSString * _formattedString;
    NSLocale * _locale;
    bool  _lowConfidence;
    double  _maxConfidence;
    double  _minConfidence;
    NSString * _sanitizedFormattedString;
}

@property (nonatomic, readonly) double confidence;
@property (nonatomic, readonly, copy) NSString *formattedString;
@property (nonatomic, readonly) NSLocale *locale;
@property (getter=isLowConfidence, nonatomic, readonly) bool lowConfidence;
@property (nonatomic, readonly) double maxConfidence;
@property (nonatomic, readonly) double minConfidence;
@property (nonatomic, readonly, copy) NSString *sanitizedFormattedString;

- (void).cxx_destruct;
- (double)confidence;
- (id)formattedString;
- (id)initWithFormattedString:(id)arg1 locale:(id)arg2 confidence:(double)arg3 minConfidence:(double)arg4 maxConfidence:(double)arg5;
- (bool)isLowConfidence;
- (id)locale;
- (double)maxConfidence;
- (double)minConfidence;
- (id)sanitizedFormattedString;

@end

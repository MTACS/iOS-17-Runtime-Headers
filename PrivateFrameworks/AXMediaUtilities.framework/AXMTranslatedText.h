
@interface AXMTranslatedText : NSObject <NSSecureCoding> {
    double  _confidence;
    bool  _lowConfidence;
    NSLocale * _targetLocale;
    NSString * _text;
}

@property (nonatomic) double confidence;
@property (getter=isLowConfidence, nonatomic) bool lowConfidence;
@property (nonatomic, retain) NSLocale *targetLocale;
@property (nonatomic, retain) NSString *text;

+ (bool)supportsSecureCoding;
+ (id)text:(id)arg1 confidence:(double)arg2 isLowConfidence:(bool)arg3 targetLocale:(id)arg4;

- (void).cxx_destruct;
- (double)confidence;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isLowConfidence;
- (void)setConfidence:(double)arg1;
- (void)setLowConfidence:(bool)arg1;
- (void)setTargetLocale:(id)arg1;
- (void)setText:(id)arg1;
- (id)targetLocale;
- (id)text;

@end

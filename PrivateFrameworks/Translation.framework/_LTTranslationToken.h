
@interface _LTTranslationToken : NSObject <NSSecureCoding> {
    double  _confidence;
    NSString * _text;
}

@property (nonatomic) double confidence;
@property (nonatomic, copy) NSString *text;

// Image: /System/Library/PrivateFrameworks/Translation.framework/Translation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (double)confidence;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithText:(id)arg1 confidence:(double)arg2;
- (void)setConfidence:(double)arg1;
- (void)setText:(id)arg1;
- (id)text;

// Image: /System/Library/PrivateFrameworks/TranslationDaemon.framework/TranslationDaemon

- (id)initWithOspreyToken:(id)arg1;

@end

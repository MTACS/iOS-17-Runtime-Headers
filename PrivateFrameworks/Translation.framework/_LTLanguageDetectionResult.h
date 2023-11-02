
@interface _LTLanguageDetectionResult : NSObject <NSSecureCoding> {
    NSDictionary * _confidences;
    NSLocale * _dominantLanguage;
    bool  _isConfident;
    bool  _isFinal;
}

@property (nonatomic, copy) NSDictionary *confidences;
@property (nonatomic, copy) NSLocale *dominantLanguage;
@property (nonatomic) bool isConfident;
@property (nonatomic) bool isFinal;

// Image: /System/Library/PrivateFrameworks/Translation.framework/Translation

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)confidences;
- (id)dominantLanguage;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isConfident;
- (bool)isFinal;
- (void)setConfidences:(id)arg1;
- (void)setDominantLanguage:(id)arg1;
- (void)setIsConfident:(bool)arg1;
- (void)setIsFinal:(bool)arg1;

// Image: /System/Library/PrivateFrameworks/TranslationDaemon.framework/TranslationDaemon

- (id)initWithConfidences:(id)arg1 isConfident:(bool)arg2 dominantLanguage:(id)arg3 isFinal:(bool)arg4;

@end

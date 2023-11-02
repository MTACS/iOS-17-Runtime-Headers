
@interface _LTTranslationStatistics : NSObject <NSCopying, NSSecureCoding> {
    long long  _inputSubtokenCount;
    long long  _inputTokenCount;
}

@property (nonatomic) long long inputSubtokenCount;
@property (nonatomic) long long inputTokenCount;

// Image: /System/Library/PrivateFrameworks/Translation.framework/Translation

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (long long)inputSubtokenCount;
- (long long)inputTokenCount;
- (void)setInputSubtokenCount:(long long)arg1;
- (void)setInputTokenCount:(long long)arg1;

// Image: /System/Library/PrivateFrameworks/TranslationDaemon.framework/TranslationDaemon

+ (long long)_countWithTokenString:(id)arg1 countCharacters:(bool)arg2;
+ (id)statisticsWithEngineMeta:(id)arg1 locale:(id)arg2;

- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end

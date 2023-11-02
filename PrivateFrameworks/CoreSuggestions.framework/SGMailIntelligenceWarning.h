
@interface SGMailIntelligenceWarning : NSObject <NSSecureCoding> {
    NSString * _core;
    NSString * _detectedLanguage;
    bool  _isIncomingMessage;
    NSNumber * _score;
    NSString * _signature;
    NSString * _snippet;
}

@property (nonatomic, readonly) NSString *core;
@property (nonatomic, readonly) NSString *detectedLanguage;
@property (nonatomic, readonly) bool isIncomingMessage;
@property (nonatomic, readonly) NSNumber *score;
@property (nonatomic, readonly) NSString *signature;
@property (nonatomic, readonly) NSString *snippet;

+ (id)snippetFromString:(id)arg1 coreRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 withMaxWindowSizeAroundCore:(unsigned long long)arg3;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)core;
- (id)description;
- (id)detectedLanguage;
- (void)encodeWithCoder:(id)arg1;
- (id)initFromString:(id)arg1 coreRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 signature:(id)arg3 maxWindowSizeAroundCore:(unsigned long long)arg4 detectedLanguage:(id)arg5 isIncomingMessage:(bool)arg6 score:(id)arg7;
- (id)initWithCoder:(id)arg1;
- (id)initWithSnippet:(id)arg1 core:(id)arg2 signature:(id)arg3 detectedLanguage:(id)arg4 isIncomingMessage:(bool)arg5 score:(id)arg6;
- (bool)isIncomingMessage;
- (id)score;
- (id)signature;
- (id)snippet;

@end


@interface CHTextCorrectionResult : NSObject <NSSecureCoding> {
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _affectedRange;
    bool  _characterLevel;
    NSError * _error;
    CHTextInputTarget * _inputTarget;
    long long  _resultType;
    CHTokenizedTextResult * _textResult;
}

@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } affectedRange;
@property (getter=isCharacterLevel, nonatomic, readonly) bool characterLevel;
@property (nonatomic, readonly) NSError *error;
@property (nonatomic, readonly) CHTextInputTarget *inputTarget;
@property (nonatomic, readonly) long long resultType;
@property (nonatomic, readonly) CHTokenizedTextResult *textResult;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })affectedRange;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)initWithInputTarget:(id)arg1 affectedRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 textResult:(id)arg3 resultType:(long long)arg4 isCharacterLevel:(bool)arg5 error:(id)arg6;
- (id)inputTarget;
- (bool)isCharacterLevel;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToTextCorrectionResult:(id)arg1;
- (long long)resultType;
- (id)textResult;

@end


@interface _LTAlignment : NSObject <NSSecureCoding> {
    NSString * _identifier;
    bool  _shouldTranslate;
    NSDictionary * _sourceAttributes;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _sourceRange;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _targetRange;
    NSString * _text;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic) bool shouldTranslate;
@property (nonatomic, copy) NSDictionary *sourceAttributes;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } sourceRange;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } targetRange;
@property (nonatomic, copy) NSString *text;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)setIdentifier:(id)arg1;
- (void)setShouldTranslate:(bool)arg1;
- (void)setSourceAttributes:(id)arg1;
- (void)setSourceRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setTargetRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)setText:(id)arg1;
- (bool)shouldTranslate;
- (id)sourceAttributes;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })sourceRange;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })targetRange;
- (id)text;

@end

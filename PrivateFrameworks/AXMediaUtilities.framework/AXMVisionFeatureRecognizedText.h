
@interface AXMVisionFeatureRecognizedText : NSObject <NSSecureCoding> {
    VNRecognizedText * _text;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _textRange;
}

@property (nonatomic, readonly) VNRecognizedText *text;
@property (nonatomic, readonly) struct _NSRange { unsigned long long x1; unsigned long long x2; } textRange;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRecognizedText:(id)arg1 range:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2;
- (id)text;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })textRange;

@end

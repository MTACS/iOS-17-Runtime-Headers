
@interface WKSecureCodingCGColorWrapper : NSObject <NSSecureCoding> {
    struct RetainPtr<CGColor *> { 
        void *m_ptr; 
    }  m_wrappedColor;
}

@property (nonatomic, readonly) struct CGColor { }*wrappedColor;

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCGColor:(struct CGColor { }*)arg1;
- (id)initWithCoder:(id)arg1;
- (struct CGColor { }*)wrappedColor;

@end

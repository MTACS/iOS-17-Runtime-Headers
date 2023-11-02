
@interface WKSecureCodingURLWrapper : NSURL <NSSecureCoding> {
    struct RetainPtr<NSURL> { 
        void *m_ptr; 
    }  m_wrappedURL;
}

@property (nonatomic, readonly) NSURL *wrappedURL;

+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)wrappedURL;

@end

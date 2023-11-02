
@interface SYDocument : NSObject <NSCopying, NSSecureCoding> {
    FPSandboxingURLWrapper * _urlWrapper;
}

@property (nonatomic, readonly) NSURL *fileURL;

+ (id)documentFromData:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dataRepresentationWithError:(id*)arg1;
- (id)documentAttributesWithError:(id*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)fileURL;
- (id)initWithCoder:(id)arg1;
- (id)initWithFileURL:(id)arg1;
- (id)initWithFileURL:(id)arg1 error:(id*)arg2;
- (id)initWithURLWrapper:(id)arg1;
- (bool)setDocumentAttributes:(id)arg1 withError:(id*)arg2;

@end

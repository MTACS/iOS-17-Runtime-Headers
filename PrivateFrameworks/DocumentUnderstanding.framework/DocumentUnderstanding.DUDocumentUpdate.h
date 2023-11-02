
@interface DocumentUnderstanding.DUDocumentUpdate : NSObject <NSCoding, NSCopying, NSSecureCoding> {
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  associatedFileURL;
    void document;
    void documentAttributes;
    void documentBody;
    void documentID;
    void documentType;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  updateTimestamp;
}

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(void*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

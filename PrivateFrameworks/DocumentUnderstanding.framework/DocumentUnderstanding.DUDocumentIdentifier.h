
@interface DocumentUnderstanding.DUDocumentIdentifier : NSObject <NSCoding, NSCopying, NSSecureCoding> {
    void documentID;
    void documentNamespace;
    void spotlightBundleID;
    void spotlightDomainIdentifier;
    void spotlightUniqueIdentifier;
}

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(void*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

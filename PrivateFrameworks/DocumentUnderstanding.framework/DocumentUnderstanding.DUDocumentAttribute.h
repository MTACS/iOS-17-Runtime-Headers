
@interface DocumentUnderstanding.DUDocumentAttribute : NSObject <NSCoding, NSCopying, NSSecureCoding> {
    void attributeID;
    void attributeNamespace;
    void attributeType;
    void displayName;
}

+ (void)setSupportsSecureCoding:(bool)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(void*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

@end

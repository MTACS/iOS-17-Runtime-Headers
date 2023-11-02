
@interface WFFontDescriptor : NSObject <NSSecureCoding> {
    NSDictionary * _attributes;
}

@property (nonatomic, readonly) NSDictionary *attributes;

+ (id)descriptorWithSerializedRepresentation:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)attributes;
- (id)displayName;
- (void)encodeWithCoder:(id)arg1;
- (id)face;
- (id)family;
- (id)fontWithSize:(double)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFontAttributes:(id)arg1;
- (id)initWithPrivateRepresentation:(id)arg1;
- (id)name;
- (id)serializedRepresentation;
- (id)visibleName;

@end


@interface RMDeclarationManifestItem : NSObject <NSSecureCoding> {
    NSString * _identifier;
    NSString * _version;
}

@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *version;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)identifier;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 version:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToManifestItem:(id)arg1;
- (id)version;

@end

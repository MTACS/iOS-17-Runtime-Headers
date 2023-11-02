
@interface AXSBQuickSettingsData : NSObject <NSSecureCoding> {
    NSString * _frontmostAppIdentifier;
}

@property (nonatomic, retain) NSString *frontmostAppIdentifier;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)frontmostAppIdentifier;
- (id)initWithCoder:(id)arg1;
- (void)setFrontmostAppIdentifier:(id)arg1;

@end

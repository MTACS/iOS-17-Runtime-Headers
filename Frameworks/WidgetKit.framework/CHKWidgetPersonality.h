
@interface CHKWidgetPersonality : NSObject <CHSWidgetPersonality, NSSecureCoding> {
    void extensionBundleIdentifier;
    void kind;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *extensionBundleIdentifier;
@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) NSString *kind;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionBundleIdentifier;
- (long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)kind;
- (bool)matchesPersonality:(id)arg1;

@end

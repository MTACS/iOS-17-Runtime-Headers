
@interface WFDisclosureWarning : NSObject <NSSecureCoding>

@property (nonatomic, readonly) NSString *localizedMessage;

+ (id)allDisclosureWarningClasses;
+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)localizedMessage;

@end

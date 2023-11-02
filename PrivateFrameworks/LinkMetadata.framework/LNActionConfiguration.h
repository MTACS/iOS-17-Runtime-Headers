
@interface LNActionConfiguration : NSObject <NSCopying, NSSecureCoding>

// Image: /System/Library/PrivateFrameworks/LinkMetadata.framework/LinkMetadata

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

// Image: /System/Library/PrivateFrameworks/LinkServices.framework/LinkServices

- (id)actionConfigurationByEvaluatingAction:(id)arg1;
- (id)actionConfigurationByEvaluatingAction:(id)arg1 context:(id)arg2;

@end

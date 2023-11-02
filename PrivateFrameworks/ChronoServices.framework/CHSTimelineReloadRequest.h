
@interface CHSTimelineReloadRequest : NSObject <NSCopying, NSSecureCoding> {
    bool  _allowCostOverride;
    NSString * _extensionBundleIdentifier;
    NSString * _kind;
    NSString * _reason;
}

@property (nonatomic, readonly) bool allowCostOverride;
@property (nonatomic, readonly, copy) NSString *extensionBundleIdentifier;
@property (nonatomic, readonly, copy) NSString *kind;
@property (nonatomic, readonly, copy) NSString *reason;

+ (id)new;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)allowCostOverride;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionBundleIdentifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithKind:(id)arg1 extensionBundleIdentifier:(id)arg2 reason:(id)arg3 allowCostOverride:(bool)arg4;
- (id)kind;
- (id)reason;

@end

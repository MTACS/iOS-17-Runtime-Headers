
@interface ATXWidgetPersonality : NSObject <NSCopying, NSSecureCoding> {
    NSString * _extensionBundleId;
    NSString * _kind;
}

@property (nonatomic, readonly) NSString *extensionBundleId;
@property (nonatomic, readonly) NSString *kind;

+ (id)stringRepresentationForATXHomeScreenWidgetDescriptor:(id)arg1;
+ (id)stringRepresentationForExtensionBundleId:(id)arg1 kind:(id)arg2;
+ (bool)supportsSecureCoding;
+ (id)widgetBundleIdForWidgetPersonalityStringRepresentation:(id)arg1;
+ (id)widgetKindForWidgetPersonalityStringRepresentation:(id)arg1;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionBundleId;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithDescriptor:(id)arg1;
- (id)initWithExtensionBundleId:(id)arg1 kind:(id)arg2;
- (id)initWithStringRepresentation:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)kind;
- (id)personality;
- (id)stringRepresentation;

@end

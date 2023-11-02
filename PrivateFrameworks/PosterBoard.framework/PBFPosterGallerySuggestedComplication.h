
@interface PBFPosterGallerySuggestedComplication : NSObject <CHSWidgetPersonality, NSCopying, NSSecureCoding> {
    NSString * _containerBundleIdentifier;
    NSString * _extensionBundleIdentifier;
    INIntent * _intent;
    NSString * _kind;
    long long  _source;
    long long  _widgetFamily;
}

@property (nonatomic, readonly, copy) NSString *containerBundleIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *extensionBundleIdentifier;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) INIntent *intent;
@property (nonatomic, readonly, copy) NSString *kind;
@property (nonatomic, readonly) long long source;
@property (readonly) Class superclass;
@property (nonatomic, readonly) long long widgetFamily;

+ (id)suggestedComplicationWithDictionaryRepresentation:(id)arg1 error:(id*)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)containerBundleIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)extensionBundleIdentifier;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithExtensionBundleIdentifier:(id)arg1 kind:(id)arg2 containerBundleIdentifier:(id)arg3 widgetFamily:(long long)arg4 intent:(id)arg5 source:(long long)arg6;
- (id)initWithProactiveRepresentation:(id)arg1;
- (id)intent;
- (bool)isEqual:(id)arg1;
- (id)kind;
- (bool)matchesPersonality:(id)arg1;
- (id)proactiveRepresentation;
- (long long)source;
- (long long)widgetFamily;

@end

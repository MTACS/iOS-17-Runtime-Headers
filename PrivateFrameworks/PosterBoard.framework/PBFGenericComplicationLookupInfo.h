
@interface PBFGenericComplicationLookupInfo : NSObject <NSCopying, PBFComplicationLookupInfo> {
    NSString * _complicationContainingBundleIdentifier;
    NSString * _complicationExtensionBundleIdentifier;
    INIntent * _complicationIntent;
    NSNumber * _complicationWidgetFamily;
    NSString * _complicationWidgetKind;
    unsigned long long  _hash;
    ATXComplication * _suggestedComplication;
}

@property (nonatomic, readonly, copy) NSString *complicationContainingBundleIdentifier;
@property (nonatomic, readonly, copy) NSString *complicationExtensionBundleIdentifier;
@property (nonatomic, readonly, copy) INIntent *complicationIntent;
@property (nonatomic, readonly, copy) NSNumber *complicationWidgetFamily;
@property (nonatomic, readonly, copy) NSString *complicationWidgetKind;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) ATXComplication *suggestedComplication;
@property (readonly) Class superclass;

+ (id)complicationLookupForWidgetFamily:(id)arg1 extensionBundleIdentifier:(id)arg2 containingBundleIdentifier:(id)arg3 kind:(id)arg4 intent:(id)arg5 suggestedComplication:(id)arg6;

- (void).cxx_destruct;
- (id)complicationContainingBundleIdentifier;
- (id)complicationExtensionBundleIdentifier;
- (id)complicationIntent;
- (id)complicationWidgetFamily;
- (id)complicationWidgetKind;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)suggestedComplication;

@end

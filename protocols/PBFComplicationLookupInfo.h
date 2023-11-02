
@protocol PBFComplicationLookupInfo <NSObject>

@required

- (NSString *)complicationContainingBundleIdentifier;
- (NSString *)complicationExtensionBundleIdentifier;
- (INIntent *)complicationIntent;
- (NSNumber *)complicationWidgetFamily;
- (NSString *)complicationWidgetKind;
- (ATXComplication *)suggestedComplication;

@end

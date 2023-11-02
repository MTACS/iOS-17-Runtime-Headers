
@protocol CHSWidgetIdentifiable <CHSExtensionIdentifiable>

@required

- (CHSExtensionIdentity *)extensionIdentity;
- (NSString *)kind;
- (bool)matches:(id <CHSWidgetIdentifiable>)arg1;

@end


@protocol SFAppAutoShortcutsItem <NSObject>

@required

- (NSString *)bundleIdentifier;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (void)setBundleIdentifier:(NSString *)arg1;

@end

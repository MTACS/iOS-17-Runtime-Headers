
@protocol SFCATModel <NSObject>

@required

- (NSString *)bundleIdentifier;
- (NSString *)catIdentifier;
- (NSDictionary *)dictionaryRepresentation;
- (NSData *)jsonData;
- (NSData *)params;
- (void)setBundleIdentifier:(NSString *)arg1;
- (void)setCatIdentifier:(NSString *)arg1;
- (void)setParams:(NSData *)arg1;

@end

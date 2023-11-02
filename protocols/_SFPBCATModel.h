
@protocol _SFPBCATModel <NSObject>

@required

- (NSString *)bundleIdentifier;
- (NSString *)catIdentifier;
- (id)initWithDictionary:(NSDictionary *)arg1;
- (id)initWithJSON:(NSData *)arg1;
- (NSData *)jsonData;
- (NSData *)params;
- (void)setBundleIdentifier:(NSString *)arg1;
- (void)setCatIdentifier:(NSString *)arg1;
- (void)setParams:(NSData *)arg1;

@end

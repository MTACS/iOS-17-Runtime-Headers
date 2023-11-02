
@protocol _INPBMediaSubItem <NSObject>

@required

- (NSString *)assetInfo;
- (bool)hasAssetInfo;
- (bool)hasIdentifier;
- (NSString *)identifier;
- (void)setAssetInfo:(NSString *)arg1;
- (void)setIdentifier:(NSString *)arg1;

@end

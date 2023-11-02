
@protocol SHJSONLCustomCatalogTransformerDelegate <NSObject>

@required

- (void)producedMediaItem:(SHMediaItem *)arg1 forID:(NSString *)arg2;
- (void)producedSignature:(SHSignature *)arg1 forID:(NSString *)arg2;

@end

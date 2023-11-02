
@protocol FCAssetDataProvider

@required

- (NSData *)data;
- (NSString *)filePath;
- (bool)isRawFileConsumable;

@end

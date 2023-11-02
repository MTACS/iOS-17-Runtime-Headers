
@protocol MSStickerPrivate <NSObject>

@required

- (NSURL *)animatedImageCacheURL;
- (NSDictionary *)attributionInfo;
- (NSData *)data;
- (NSString *)externalURI;
- (NSURL *)imageFileURL;
- (NSString *)localizedDescription;
- (NSData *)metadata;
- (NSArray *)representations;
- (void)setStickerPackGUID:(NSString *)arg1;
- (unsigned long long)stickerEffectType;
- (NSUUID *)stickerIdentifier;
- (NSString *)stickerName;
- (NSString *)stickerPackGUID;

@end

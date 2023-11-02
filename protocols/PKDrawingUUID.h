
@protocol PKDrawingUUID <NSObject>

@required

- (NSData *)AES128Key;
- (NSString *)uniqueCacheFilePath;

@end

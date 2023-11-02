
@protocol TSPDecoderDataInfo <NSObject>

@required

- (TSPDataMetadata *)dataMetadata;
- (TSPDigest *)digest;
- (NSString *)documentResourceLocator;
- (NSString *)externalFilePath;
- (long long)identifier;
- (unsigned long long)length;
- (NSString *)preferredFilename;

@end

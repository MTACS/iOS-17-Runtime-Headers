
@protocol CAMMetadataObjectResult <NSObject>

@required

- (NSString *)metadataType;
- (AVMetadataObject *)underlyingMetadataObject;
- (NSString *)uniqueIdentifier;

@optional

- (unsigned long long)syntheticFocusMode;

@end

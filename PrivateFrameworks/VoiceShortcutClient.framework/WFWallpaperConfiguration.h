
@interface WFWallpaperConfiguration : NSObject <NSSecureCoding> {
    NSString * _assetIdentifier;
    NSSecurityScopedURLWrapper * _assetURLWrapper;
    NSNumber * _legibilityBlur;
    long long  _location;
    NSNumber * _smartCrop;
    NSNumber * _usePreview;
}

@property (nonatomic, readonly, copy) NSString *assetIdentifier;
@property (nonatomic, readonly) NSURL *assetURL;
@property (nonatomic, readonly) NSSecurityScopedURLWrapper *assetURLWrapper;
@property (nonatomic, readonly) NSNumber *legibilityBlur;
@property (nonatomic, readonly) long long location;
@property (nonatomic, readonly) NSNumber *smartCrop;
@property (nonatomic, readonly) NSNumber *usePreview;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assetIdentifier;
- (id)assetURL;
- (id)assetURLWrapper;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithAssetURL:(id)arg1 localIdentifier:(id)arg2 location:(long long)arg3 legibilityBlur:(id)arg4 smartCrop:(id)arg5 usePreview:(id)arg6;
- (id)initWithCoder:(id)arg1;
- (id)initWithLocalIdentifier:(id)arg1 location:(long long)arg2 legibilityBlur:(id)arg3 smartCrop:(id)arg4 usePreview:(id)arg5;
- (id)initWithURL:(id)arg1 location:(long long)arg2 legibilityBlur:(id)arg3 smartCrop:(id)arg4 usePreview:(id)arg5;
- (id)initWithUserInfo:(id)arg1;
- (id)legibilityBlur;
- (long long)location;
- (id)smartCrop;
- (id)usePreview;
- (id)userInfoRepresentation;

@end

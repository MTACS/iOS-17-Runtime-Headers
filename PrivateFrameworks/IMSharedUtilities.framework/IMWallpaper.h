
@interface IMWallpaper : NSObject <NSSecureCoding> {
    IMWallpaper_SwiftImpl * swiftImpl;
}

@property (nonatomic, readonly) bool contentIsSensitive;
@property (nonatomic, readonly) long long dataVersion;
@property (nonatomic, readonly, copy) NSString *fileName;
@property (nonatomic, readonly, copy) NSString *filePath;
@property (nonatomic, readonly, copy) NSString *lowResFileName;
@property (nonatomic, readonly, copy) NSString *lowResFilePath;
@property (nonatomic, readonly) bool lowResWallpaperExists;
@property (nonatomic, readonly) IMWallpaperMetadata *metadata;
@property (nonatomic, readonly) bool wallpaperExists;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)contentIsSensitive;
- (long long)dataVersion;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)fileName;
- (id)filePath;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithFileName:(id)arg1 filePath:(id)arg2 data:(id)arg3 lowResFileName:(id)arg4 lowResFilePath:(id)arg5 lowResData:(id)arg6 metadata:(id)arg7 contentIsSensitive:(bool)arg8 error:(id*)arg9;
- (id)initWithFileName:(id)arg1 filePath:(id)arg2 lowResFileName:(id)arg3 lowResFilePath:(id)arg4 metadata:(id)arg5 contentIsSensitive:(bool)arg6;
- (bool)isEqual:(id)arg1;
- (id)lowResFileName;
- (id)lowResFilePath;
- (id)lowResWallpaperData;
- (bool)lowResWallpaperExists;
- (id)metadata;
- (id)publicDictionaryRepresentation;
- (id)wallpaperData;
- (bool)wallpaperExists;

@end

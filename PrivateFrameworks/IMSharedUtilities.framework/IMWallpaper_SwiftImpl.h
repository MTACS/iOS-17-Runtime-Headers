
@interface IMWallpaper_SwiftImpl : NSObject <NSSecureCoding> {
    void contentIsSensitive;
    void contentIsSensitiveKey;
    void dataVersion;
    void dataVersionKey;
    void fileName;
    void fileNameKey;
    void filePath;
    void filePathKey;
    void highResKey;
    void lowResFileName;
    void lowResFileNameKey;
    void lowResFilePath;
    void lowResFilePathKey;
    void metadata;
    void metadataKey;
}

@property (nonatomic, readonly) bool contentIsSensitive;
@property (nonatomic, readonly) long long dataVersion;
@property (nonatomic, readonly) NSDictionary *dictionaryRepresentation;
@property (nonatomic, readonly) NSString *fileName;
@property (nonatomic, readonly) NSString *filePath;
@property (nonatomic, readonly) NSString *lowResFileName;
@property (nonatomic, readonly) NSString *lowResFilePath;
@property (nonatomic, readonly) bool lowResWallpaperExists;
@property (nonatomic, readonly) IMWallpaperMetadata *metadata;
@property (nonatomic, readonly) NSDictionary *publicDictionaryRepresentation;
@property (nonatomic, readonly) bool wallpaperExists;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (bool)contentIsSensitive;
- (long long)dataVersion;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)fetchLowResWallpaperDataAndReturnError:(id*)arg1;
- (id)fetchWallpaperDataAndReturnError:(id*)arg1;
- (id)fileName;
- (id)filePath;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (id)initWithFileName:(id)arg1 filePath:(id)arg2 data:(id)arg3 lowResFileName:(id)arg4 lowResFilePath:(id)arg5 lowResData:(id)arg6 metadata:(id)arg7 contentIsSensitive:(bool)arg8 error:(id*)arg9;
- (id)initWithFileName:(id)arg1 filePath:(id)arg2 lowResFileName:(id)arg3 lowResFilePath:(id)arg4 metadata:(id)arg5 contentIsSensitive:(bool)arg6;
- (bool)isEqual:(id)arg1;
- (id)lowResFileName;
- (id)lowResFilePath;
- (bool)lowResWallpaperExists;
- (id)metadata;
- (id)publicDictionaryRepresentation;
- (bool)wallpaperExists;

@end

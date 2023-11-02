
@interface PHAssetPhotoAnalysisWallpaperProperties : PHAssetPropertySet {
    NSData * _wallpaperPropertiesData;
    NSDate * _wallpaperPropertiesTimestamp;
    unsigned long long  _wallpaperPropertiesVersion;
}

@property (nonatomic, readonly) NSData *wallpaperPropertiesData;
@property (nonatomic, readonly) NSDate *wallpaperPropertiesTimestamp;
@property (nonatomic, readonly) unsigned long long wallpaperPropertiesVersion;

+ (id)entityName;
+ (id)keyPathFromPrimaryObject;
+ (id)keyPathToPrimaryObject;
+ (id)propertiesToFetch;
+ (id)propertySetName;

- (void).cxx_destruct;
- (id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(bool)arg3;
- (id)wallpaperPropertiesData;
- (id)wallpaperPropertiesTimestamp;
- (unsigned long long)wallpaperPropertiesVersion;

@end


@interface PLPhotoAnalysisAssetAttributes : PLManagedObject

@property (nonatomic, retain) PLManagedAsset *asset;
@property (nonatomic, retain) NSData *wallpaperPropertiesData;
@property (nonatomic, retain) NSDate *wallpaperPropertiesTimestamp;
@property (nonatomic) unsigned long long wallpaperPropertiesVersion;

+ (id)entityName;
+ (id)fetchRequest;

@end

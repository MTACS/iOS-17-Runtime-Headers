
@protocol MPArtworkDataSourceIdentifiable <MPArtworkDataSource>

@required

+ (NSString *)artworkDataSourceShortDescription;
+ (id)artworkDataSourceWithIdentifier:(NSString *)arg1;

- (NSString *)artworkDataSourceIdentifier;

@end


@protocol PPRecord

@required

- (unsigned int)extractionAssetVersion;
- (NSString *)extractionOsBuild;
- (NSString *)identifier;
- (double)initialScore;
- (PPSource *)source;

@end

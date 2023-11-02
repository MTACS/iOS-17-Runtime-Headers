
@protocol PLDuplicateDetector <NSObject>

@required

- (NSSet *)detectDuplicatesWithPhotoLibrary:(PLPhotoLibrary *)arg1 error:(id*)arg2;
- (id)initWithSourceAssetOIDs:(NSArray *)arg1;

@end

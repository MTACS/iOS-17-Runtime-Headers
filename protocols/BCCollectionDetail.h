
@protocol BCCollectionDetail <BCCloudData>

@required

- (NSString *)collectionDescription;
- (NSString *)collectionID;
- (bool)hidden;
- (NSString *)name;
- (int)sortMode;
- (int)sortOrder;

@end

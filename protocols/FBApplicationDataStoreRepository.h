
@protocol FBApplicationDataStoreRepository <FBApplicationDataStoreRepositoryReading, FBApplicationDataStoreRepositoryWriting>

@required

- (<FBApplicationDataStoreRepositoryDelegate> *)delegate;
- (void)setDelegate:(id <FBApplicationDataStoreRepositoryDelegate>)arg1;

@end

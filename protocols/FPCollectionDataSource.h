
@protocol FPCollectionDataSource

@required

- (<FPCollectionDataSourceDelegate> *)delegate;
- (void)enumerationMightHaveResumed;
- (bool)hasMoreIncoming;
- (void)invalidate;
- (void)setDelegate:(id <FPCollectionDataSourceDelegate>)arg1;
- (void)start;

@end

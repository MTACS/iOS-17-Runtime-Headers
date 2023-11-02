
@interface PUAssetsDataSourceManager : NSObject {
    PUAssetsDataSource * _assetsDataSource;
    <PUAssetsDataSourceManagerDelegate> * _delegate;
}

@property (nonatomic, retain) PUAssetsDataSource *assetsDataSource;
@property (nonatomic) <PUAssetsDataSourceManagerDelegate> *delegate;

- (void).cxx_destruct;
- (id)assetsDataSource;
- (id)delegate;
- (void)setAssetsDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;

@end


@interface CRKScreenshotServiceProxy : NSObject <CRKScreenshotServiceInterface> {
    CRKValidXPCConnectionProvider * _connectionProvider;
}

@property (nonatomic, readonly) CRKValidXPCConnectionProvider *connectionProvider;

- (void).cxx_destruct;
- (void)_fetchScreenshotDataWithMaximumSizeInPixels:(struct CGSize { double x1; double x2; })arg1 completion:(id /* block */)arg2;
- (id)connectionProvider;
- (void)fetchScreenshotDataWithMaximumSizeInPixels:(struct CGSize { double x1; double x2; })arg1 completion:(id /* block */)arg2;
- (id)init;

@end


@protocol PUImageRequesterObserver <NSObject>

@required

- (void)imageRequester:(PUImageRequester *)arg1 didProduceResult:(id <PUImageRequesterResult>)arg2;
- (void)imageRequesterDidUpdateFullSizeImageData:(PUImageRequester *)arg1;

@end

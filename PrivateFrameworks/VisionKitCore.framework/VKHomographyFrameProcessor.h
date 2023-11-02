
@interface VKHomographyFrameProcessor : VKFrameProcessor {
    VNTrackHomographyRequest * _homographyRequest;
    id /* block */  _resultHandler;
}

@property (nonatomic, copy) id /* block */ resultHandler;

- (void).cxx_destruct;
- (void)processFrame:(id)arg1;
- (id /* block */)resultHandler;
- (void)sendResult:(id)arg1;
- (void)setResultHandler:(id /* block */)arg1;

@end

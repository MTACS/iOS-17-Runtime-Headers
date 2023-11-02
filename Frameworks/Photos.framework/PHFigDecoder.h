
@interface PHFigDecoder : PHImageDecoder

+ (id)sharedDecoder;

- (void)cancelInFlightAsyncDecodeForRequestHandle:(id)arg1;
- (id)decodeImageFromData:(id)arg1 orFileURL:(id)arg2 options:(id)arg3 completion:(id /* block */)arg4;

@end

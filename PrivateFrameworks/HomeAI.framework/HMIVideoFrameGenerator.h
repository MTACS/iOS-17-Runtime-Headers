
@interface HMIVideoFrameGenerator : HMFObject {
    HMIVideoAssetReader * _reader;
}

@property (readonly) HMIVideoAssetReader *reader;

- (void).cxx_destruct;
- (void)generateVideoFramesForTimes:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)initWithVideoFragment:(id)arg1;
- (id)reader;

@end

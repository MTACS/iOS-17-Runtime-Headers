
@interface PADAVSerialAssetReader : NSObject {
    AVAssetReader * _assetReader;
    bool  _isReading;
    AVAssetReaderTrackOutput * _output;
}

- (void).cxx_destruct;
- (bool)_setupAssetReaderWithVideoURL:(id)arg1 error:(id*)arg2;
- (void)close;
- (id)initWithVideoURL:(id)arg1 error:(id*)arg2;
- (id)retrieveNextFrame;

@end

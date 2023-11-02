
@interface LPAnimatedImageTranscoder : NSObject {
    AVAssetWriterInputPixelBufferAdaptor * _adaptor;
    id /* block */  _completionHandler;
    unsigned long long  _currentFrame;
    unsigned long long  _frameCount;
    bool  _hasReadyForDataObserver;
    struct CGImageSource { } * _imageSource;
    AVAssetWriterInput * _input;
    unsigned int  _loggingID;
    double  _nextFrameTime;
    NSURL * _outputURL;
    LPImage * _sourceImage;
    bool  _stopEncoding;
    AVAssetWriter * _writer;
}

+ (id)encodeQueue;

- (void).cxx_destruct;
- (void)_transcodeWithCompletionHandler:(id /* block */)arg1;
- (void)cancel;
- (void)encodeNextFrame;
- (void)encodeUntilNotReadyForMoreMediaData;
- (void)failed;
- (id)initWithAnimatedImage:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;
- (void)removeReadyForDataObserverIfNeeded;
- (void)transcodeWithCompletionHandler:(id /* block */)arg1;

@end

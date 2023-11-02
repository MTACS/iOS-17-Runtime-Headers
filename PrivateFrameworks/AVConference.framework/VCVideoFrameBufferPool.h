
@interface VCVideoFrameBufferPool : NSObject {
    NSMutableDictionary * _bufferPool;
    int  _maxBufferCount;
}

- (bool)addFrame:(struct __CVBuffer { }*)arg1 time:(long long)arg2;
- (void)dealloc;
- (id)initWithCapacity:(int)arg1;
- (bool)releaseFrameWithTime:(long long)arg1;

@end

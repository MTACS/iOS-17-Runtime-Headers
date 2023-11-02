
@interface VCMediaRecorderHistoryBuffer : NSObject {
    unsigned int  _bufferLength;
    id  _delegate;
    unsigned int  _lastTimestamp;
    struct __CFDictionary { } * _sampleMap;
    struct __CFAllocator { } * _timestampAllocator;
    struct __CFArray { } * _timestampQueue;
}

- (void)dealloc;
- (id)delegate;
- (void)flushBuffer;
- (struct opaqueCMSampleBuffer { }*)getClosestSampleForTimestamp:(unsigned int)arg1;
- (int)getCount;
- (id)initWithDelegate:(id)arg1 bufferLength:(int)arg2 dispatchQueue:(id)arg3;

@end

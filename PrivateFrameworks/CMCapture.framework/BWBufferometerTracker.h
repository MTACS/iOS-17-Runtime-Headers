
@interface BWBufferometerTracker : NSObject {
    void * _buffer;
    NSString * _bufferType;
    NSString * _tag;
    long long  _trackedSize;
    unsigned long long  _trackingSerialNumber;
}

- (void)dealloc;

@end

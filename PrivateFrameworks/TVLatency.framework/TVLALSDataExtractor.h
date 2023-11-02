
@interface TVLALSDataExtractor : NSObject {
    id /* block */  _completion;
    struct __IOHIDEventSystemClient { } * _ioHIDSystemClient;
    unsigned long long  _readCount;
    NSMutableArray * _results;
    NSTimer * _timer;
}

+ (unsigned int)_displayID;
+ (void)extract:(unsigned long long)arg1 ALSReadings:(id /* block */)arg2;
+ (id)extractALSCalibrationData;
+ (void)extractALSData:(id /* block */)arg1;

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

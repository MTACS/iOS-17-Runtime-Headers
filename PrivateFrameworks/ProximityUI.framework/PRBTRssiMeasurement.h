
@interface PRBTRssiMeasurement : NSObject {
    unsigned long long  _channel;
    int  _rssi;
    double  _timestamp;
    NSUUID * _uuid;
}

@property (nonatomic, readonly) unsigned long long channel;
@property (nonatomic, readonly) int rssi;
@property (nonatomic, readonly) double timestamp;
@property (nonatomic, readonly) NSUUID *uuid;

- (void).cxx_destruct;
- (unsigned long long)channel;
- (id)initWithTime:(double)arg1 rssi:(int)arg2 channel:(unsigned long long)arg3 uuid:(id)arg4;
- (int)rssi;
- (double)timestamp;
- (id)uuid;

@end

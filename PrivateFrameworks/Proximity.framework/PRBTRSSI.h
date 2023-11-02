
@interface PRBTRSSI : NSObject <NSCopying, NSSecureCoding> {
    int  _channel;
    int  _rssi_dbm;
    double  _timestamp;
}

@property (nonatomic, readonly) int channel;
@property (nonatomic, readonly) int rssi_dbm;
@property (nonatomic, readonly) double timestamp;

+ (bool)supportsSecureCoding;

- (int)channel;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimeStamp:(double)arg1 rssi_dbm:(int)arg2 channel:(int)arg3;
- (bool)isEqual:(id)arg1;
- (int)rssi_dbm;
- (double)timestamp;

@end

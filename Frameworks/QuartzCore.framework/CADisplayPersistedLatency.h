
@interface CADisplayPersistedLatency : NSObject <NSSecureCoding> {
    double  _latency;
    NSDictionary * _mode;
    NSString * _uuid;
}

@property (nonatomic) double latency;
@property (nonatomic, copy) NSDictionary *mode;
@property (nonatomic, copy) NSString *uuid;

+ (bool)supportsSecureCoding;

- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (double)latency;
- (id)mode;
- (void)setLatency:(double)arg1;
- (void)setMode:(id)arg1;
- (void)setUuid:(id)arg1;
- (id)uuid;

@end

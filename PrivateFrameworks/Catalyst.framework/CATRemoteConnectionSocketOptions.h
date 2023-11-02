
@interface CATRemoteConnectionSocketOptions : NSObject {
    NSNumber * _adaptiveWriteTimeout;
    NSNumber * _keepAliveCount;
    NSNumber * _keepAliveDelay;
    NSNumber * _keepAliveEnabled;
    NSNumber * _keepAliveInterval;
    NSNumber * _netServiceType;
}

@property (nonatomic, copy) NSNumber *adaptiveWriteTimeout;
@property (nonatomic, copy) NSNumber *keepAliveCount;
@property (nonatomic, copy) NSNumber *keepAliveDelay;
@property (nonatomic, copy) NSNumber *keepAliveEnabled;
@property (nonatomic, copy) NSNumber *keepAliveInterval;
@property (nonatomic, copy) NSNumber *netServiceType;

- (void).cxx_destruct;
- (id)adaptiveWriteTimeout;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)keepAliveCount;
- (id)keepAliveDelay;
- (id)keepAliveEnabled;
- (id)keepAliveInterval;
- (id)netServiceType;
- (void)setAdaptiveWriteTimeout:(id)arg1;
- (void)setKeepAliveCount:(id)arg1;
- (void)setKeepAliveDelay:(id)arg1;
- (void)setKeepAliveEnabled:(id)arg1;
- (void)setKeepAliveInterval:(id)arg1;
- (void)setNetServiceType:(id)arg1;

@end

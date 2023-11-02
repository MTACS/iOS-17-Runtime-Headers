
@interface FMDSecureLocationContext : NSObject <NSSecureCoding> {
    NSString * _findMyId;
    NSString * _mode;
    bool  _stopMonitoringActivePolicy;
}

@property (nonatomic, copy) NSString *findMyId;
@property (nonatomic, copy) NSString *mode;
@property (nonatomic) bool stopMonitoringActivePolicy;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)findMyId;
- (id)initWithCoder:(id)arg1;
- (id)mode;
- (void)setFindMyId:(id)arg1;
- (void)setMode:(id)arg1;
- (void)setStopMonitoringActivePolicy:(bool)arg1;
- (bool)stopMonitoringActivePolicy;

@end


@interface SAPersistenceStore : NSObject <NSSecureCoding> {
    NSMutableDictionary * _monitoringSessionRecord;
}

@property (nonatomic, retain) NSMutableDictionary *monitoringSessionRecord;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)monitoringSessionRecord;
- (void)setMonitoringSessionRecord:(id)arg1;

@end

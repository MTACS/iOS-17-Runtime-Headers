
@interface DTTapHeartbeatMessage : DTTapMessage <NSSecureCoding>

@property (nonatomic) unsigned long long heartbeatTime;

+ (bool)supportsSecureCoding;

- (unsigned long long)heartbeatTime;
- (id)init;
- (void)setHeartbeatTime:(unsigned long long)arg1;

@end

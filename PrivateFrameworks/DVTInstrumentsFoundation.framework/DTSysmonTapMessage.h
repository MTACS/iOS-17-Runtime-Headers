
@interface DTSysmonTapMessage : DTTapMessage <NSSecureCoding> {
    NSDictionary * _runningMetadata;
}

@property (nonatomic, copy) NSDictionary *runningMetadata;
@property (nonatomic) unsigned int tapVersion;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)runningMetadata;
- (id)sessionMetadata;
- (void)setRunningMetadata:(id)arg1;
- (void)setSessionMetadata:(id)arg1;
- (void)setTapVersion:(unsigned int)arg1;
- (unsigned int)tapVersion;

@end

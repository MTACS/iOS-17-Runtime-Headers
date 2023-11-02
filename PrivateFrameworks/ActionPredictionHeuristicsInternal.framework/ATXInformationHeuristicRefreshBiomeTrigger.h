
@interface ATXInformationHeuristicRefreshBiomeTrigger : ATXInformationHeuristicRefreshTrigger <NSSecureCoding> {
    NSObject<OS_dispatch_queue> * _queue;
    BMBiomeScheduler * _scheduler;
    BPSSink * _sink;
    long long  _streamType;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_publisher;
- (void)_start;
- (void)_stop;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithStreamType:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToATXInformationHeuristicRefreshBiomeTrigger:(id)arg1;

@end

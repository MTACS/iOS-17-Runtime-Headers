
@interface DTSysmonTapConfig : DTTapConfig {
    id /* block */  _sessionHandler;
}

@property (retain) NSArray *coalitionAttributes;
@property (retain) NSArray *processAttributes;
@property bool sampleCPUUsage;
@property (nonatomic) unsigned long long sampleInterval;
@property (nonatomic, copy) id /* block */ sessionHandler;
@property (retain) NSArray *systemAttributes;

- (void).cxx_destruct;
- (void)addPid:(int)arg1;
- (id)coalitionAttributes;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)init;
- (id)pids;
- (id)processAttributes;
- (bool)sampleCPUUsage;
- (unsigned long long)sampleInterval;
- (id /* block */)sessionHandler;
- (void)setCoalitionAttributes:(id)arg1;
- (void)setPids:(id)arg1;
- (void)setProcessAttributes:(id)arg1;
- (void)setSampleCPUUsage:(bool)arg1;
- (void)setSampleInterval:(unsigned long long)arg1;
- (void)setSessionHandler:(id /* block */)arg1;
- (void)setSystemAttributes:(id)arg1;
- (id)systemAttributes;

@end

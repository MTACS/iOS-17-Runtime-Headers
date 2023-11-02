
@interface IMMetricsMemoryEvent : IMAMSMetricsEvent

@property (nonatomic) unsigned long long totalBytes;
@property (nonatomic) unsigned long long usedBytes;

- (id)init;
- (void)setTotalBytes:(unsigned long long)arg1;
- (void)setUsedBytes:(unsigned long long)arg1;
- (id)shortDescription;
- (unsigned long long)totalBytes;
- (unsigned long long)usedBytes;

@end

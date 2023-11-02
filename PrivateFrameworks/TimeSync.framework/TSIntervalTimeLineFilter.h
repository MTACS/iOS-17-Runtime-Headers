
@interface TSIntervalTimeLineFilter : TSTimeLineFilter {
    unsigned long long  _AAnchor;
    long long  _AEntries;
    unsigned long long  _BAnchor;
    long long  _BEntries;
    TSIntervalFilter * _aIntervalFilter;
    TSIntervalFilter * _bIntervalFilter;
    NSObject<OS_dispatch_queue> * _syncQueue;
    long long  _validIndex;
}

- (void).cxx_destruct;
- (void)addTimestamps:(struct { unsigned long long x1; unsigned long long x2; })arg1;
- (bool)canConvertTime;
- (void)changeToNewFilterSize:(unsigned char)arg1;
- (unsigned long long)domainAIntervalFromDomainBInterval:(unsigned long long)arg1;
- (unsigned long long)domainATimeFromDomainBTime:(unsigned long long)arg1;
- (unsigned long long)domainBIntervalFromDomainAInterval:(unsigned long long)arg1;
- (unsigned long long)domainBTimeFromDomainATime:(unsigned long long)arg1;
- (void)getAnchors:(struct { unsigned long long x1; unsigned long long x2; }*)arg1 andRateRatio:(struct { unsigned long long x1; unsigned long long x2; }*)arg2;
- (id)initWithExpectedDomainAInterval:(unsigned long long)arg1 expectedDomainBInterval:(unsigned long long)arg2 filterSize:(unsigned char)arg3;
- (struct { unsigned long long x1; unsigned long long x2; })rateRatio;
- (void)resetFilter;
- (void)resetFilterWithNewExpectedDomainAInterval:(unsigned long long)arg1 expectedDomainBInterval:(unsigned long long)arg2;
- (void)resetFilterWithNewExpectedDomainAInterval:(unsigned long long)arg1 expectedDomainBInterval:(unsigned long long)arg2 multiIntervalCount:(unsigned int)arg3;

@end

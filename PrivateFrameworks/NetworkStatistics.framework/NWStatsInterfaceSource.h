
@interface NWStatsInterfaceSource : NSObject {
    unsigned int  _ifIndex;
    unsigned long long  _srcRef;
    unsigned long long  _threshold;
}

@property unsigned int ifIndex;
@property unsigned long long srcRef;
@property unsigned long long threshold;

- (unsigned int)ifIndex;
- (void)setIfIndex:(unsigned int)arg1;
- (void)setSrcRef:(unsigned long long)arg1;
- (void)setThreshold:(unsigned long long)arg1;
- (unsigned long long)srcRef;
- (unsigned long long)threshold;

@end

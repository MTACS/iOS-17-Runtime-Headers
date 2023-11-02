
@interface SABinaryLoadInfoTrackingHighestOffset : SABinaryLoadInfo {
    unsigned long long  _highestOffset;
    bool  _isInKernelAddressSpace;
}

@property unsigned long long highestOffset;

- (unsigned long long)highestOffset;
- (bool)isInKernelAddressSpace;
- (void)setHighestOffset:(unsigned long long)arg1;

@end

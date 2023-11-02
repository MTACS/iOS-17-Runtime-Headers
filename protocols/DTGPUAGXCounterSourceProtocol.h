
@protocol DTGPUAGXCounterSourceProtocol

@required

- (bool)request:(unsigned long long)arg1 vendorFeatures:(NSDictionary *)arg2;
- (void)resume;
- (void)sampleAPS:(void *)arg1; // needs 1 arg types, found 10: id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, char *, unsigned long long, unsigned long long, unsigned int, unsigned int, void*
- (void)sampleCounters:(void *)arg1 callback:(void *)arg2; // needs 2 arg types, found 12: unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, unsigned long long*, unsigned long long, unsigned long long, unsigned long long, unsigned int, unsigned int, void*
- (void)stop;

@end

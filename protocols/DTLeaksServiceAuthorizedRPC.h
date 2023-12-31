
@protocol DTLeaksServiceAuthorizedRPC <DTXAllowedRPC>

@required

- (NSDictionary *)requestGraph:(unsigned long long)arg1 options:(NSDictionary *)arg2;
- (NSArray *)requestMallocStackLog:(int)arg1 forAddress:(unsigned long long*)arg2 size:(unsigned long long)arg3 isLiteZone:(unsigned int)arg4;
- (NSArray *)requestVMregionStackLog:(int)arg1 forAddress:(unsigned long long*)arg2 size:(unsigned long long)arg3;
- (int)setMallocStackLoggingMode:(int)arg1 forPid:(int)arg2;

@end

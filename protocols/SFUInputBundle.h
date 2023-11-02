
@protocol SFUInputBundle <NSObject>

@required

- (SFUBufferedInputStream *)bufferedInputStreamForEntry:(NSString *)arg1;
- (void)copyEntry:(NSString *)arg1 toFile:(NSString *)arg2;
- (unsigned int)crc32ForEntry:(NSString *)arg1;
- (bool)hasEntryWithName:(NSString *)arg1;
- (<SFUInputStream> *)inputStreamForEntry:(NSString *)arg1;
- (long long)lengthOfEntry:(NSString *)arg1;

@end

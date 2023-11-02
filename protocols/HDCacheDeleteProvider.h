
@protocol HDCacheDeleteProvider <NSObject>

@optional

- (long long)purgeSpaceForUrgency:(int)arg1;
- (long long)purgeSpaceForUrgency:(int)arg1 volume:(NSString *)arg2;
- (long long)purgeableSpaceForUrgency:(int)arg1;
- (long long)purgeableSpaceForUrgency:(int)arg1 volume:(NSString *)arg2;

@end


@protocol CRKEventResponding <NSObject>

@optional

- (void)cardEventDidOccur:(unsigned long long)arg1 withIdentifier:(NSString *)arg2 userInfo:(NSDictionary *)arg3;

@end

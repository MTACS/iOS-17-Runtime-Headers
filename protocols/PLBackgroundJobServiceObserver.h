
@protocol PLBackgroundJobServiceObserver <NSObject>

@optional

- (void)backgroundJobServiceDidChangeStateFrom:(unsigned long long)arg1 to:(unsigned long long)arg2;
- (void)backgroundJobServiceDidRegisterCriteriaShortCode:(NSString *)arg1;
- (void)backgroundJobServiceDidShutdown;

@end

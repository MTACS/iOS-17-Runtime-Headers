
@protocol FCTodayPrivateDataTransaction <NSCopying, NSSecureCoding>

@required

- (void)performWithPrivateDataContext:(id <FCPrivateDataContext>)arg1;
- (void)performWithTodayPrivateData:(NSObject<FCMutableTodayPrivateData> *)arg1;

@end

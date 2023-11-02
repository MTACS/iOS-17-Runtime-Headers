
@protocol CRCommand <NSObject, NSCopying>

@required

- (unsigned long long)commandDirection;
- (void)setCommandDirection:(unsigned long long)arg1;
- (void)setUserInfo:(NSDictionary *)arg1;
- (NSDictionary *)userInfo;

@end

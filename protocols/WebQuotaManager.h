
@protocol WebQuotaManager

@required

- (id)initWithOrigin:(WebSecurityOrigin *)arg1;
- (WebSecurityOrigin *)origin;
- (unsigned long long)quota;
- (void)setQuota:(unsigned long long)arg1;
- (unsigned long long)usage;

@end

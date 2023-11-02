
@interface WebApplicationCacheQuotaManager : NSObject <WebQuotaManager> {
    WebSecurityOrigin * _origin;
}

- (id)initWithOrigin:(id)arg1;
- (id)origin;
- (unsigned long long)quota;
- (void)setQuota:(unsigned long long)arg1;
- (unsigned long long)usage;

@end

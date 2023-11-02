
@interface WebsiteDataUtilities : NSObject

+ (void)getApplicationCacheQuotaForOrigin:(id)arg1 currentQuota:(unsigned long long)arg2 totalBytesNeeded:(unsigned long long)arg3 dialogPresenter:(id)arg4 completionHandler:(id /* block */)arg5;
+ (void)getDatabaseQuotaForOrigin:(id)arg1 currentQuota:(unsigned long long)arg2 currentOriginUsage:(unsigned long long)arg3 currentDatabaseUsage:(unsigned long long)arg4 expectedUsage:(unsigned long long)arg5 dialogPresenter:(id)arg6 completionHandler:(id /* block */)arg7;

@end

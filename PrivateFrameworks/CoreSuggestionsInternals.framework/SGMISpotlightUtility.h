
@interface SGMISpotlightUtility : NSObject

+ (id)defaultCSSearchQueryContextFetchAttributes;
+ (id)findDeletedEmailAddresses:(id)arg1 mdSearchableItemAttribute:(id)arg2 fromDaysAgo:(unsigned long long)arg3 error:(id*)arg4;
+ (id)itemWithUniqueIdentifier:(id)arg1 error:(id*)arg2;
+ (id)nicknameCSSearchQueryContextFetchAttributes;
+ (id)queryEmailsFromDaysAgo:(unsigned long long)arg1 throughDaysAgo:(unsigned long long)arg2 fetchAttributes:(id)arg3 filterQuery:(id)arg4 queryString:(id)arg5 bundleIds:(id)arg6 spotlightTimeOut:(unsigned long long)arg7 withError:(id*)arg8;
+ (bool)queryFromDaysAgo:(unsigned long long)arg1 throughDaysAgo:(unsigned long long)arg2 limit:(unsigned long long)arg3 withError:(id*)arg4 handler:(id /* block */)arg5;
+ (bool)queryFromDaysAgo:(unsigned long long)arg1 throughDaysAgo:(unsigned long long)arg2 limit:(unsigned long long)arg3 withError:(id*)arg4 simulatedCSSIs:(id)arg5 handler:(id /* block */)arg6;
+ (void)querySentMailsForNicknameMatchingFromDaysAgo:(unsigned long long)arg1 throughDaysAgo:(unsigned long long)arg2 limit:(unsigned long long)arg3 handler:(id /* block */)arg4;

@end

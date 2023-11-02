
@interface CKVAnalytics : NSObject

+ (void)sendAllDatasetStatistics:(id)arg1;
+ (void)sendDonateEvent:(unsigned short)arg1 itemCount:(unsigned long long)arg2 appId:(id)arg3 reason:(unsigned short)arg4 result:(bool)arg5;
+ (void)sendDonateVerification:(unsigned short)arg1 isConsistent:(bool)arg2;

@end

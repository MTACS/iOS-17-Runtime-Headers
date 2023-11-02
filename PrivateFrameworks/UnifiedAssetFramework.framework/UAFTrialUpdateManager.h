
@interface UAFTrialUpdateManager : NSObject

+ (void)checkForOutOfSpace:(id)arg1 updateProgress:(id)arg2;
+ (id)filterOnDemandFactors:(id)arg1 namespaceName:(id)arg2 trialClient:(id)arg3;
+ (id)getConcurrentQueue;
+ (id)getImmediateDownloadSet:(id)arg1;
+ (void)getKnownFactors:(id)arg1 namespace:(id)arg2 knownFactors:(id*)arg3 onDemandFactors:(id*)arg4;
+ (id)getSerialQueue;
+ (unsigned long long)getTrialDownloadStatusForUsages:(id)arg1 configurationManager:(id)arg2;
+ (id)getTrialFactors:(id)arg1 configurationManager:(id)arg2 includeAllAssetSets:(bool)arg3 noRemovalNamespaces:(id*)arg4 assetSetNamespaces:(id*)arg5;
+ (bool)isOnDemand:(id)arg1;
+ (bool)isPresent:(id)arg1;
+ (bool)isRemoveAllowed;
+ (bool)isSubscribed:(id)arg1;
+ (unsigned long long)sizeFromLevel:(id)arg1;
+ (id)trialClientWithProject:(id)arg1;
+ (bool)updateNamespaces:(id)arg1 missingRolloutsOnly:(bool)arg2 expensiveNetworking:(bool)arg3 assetSetNamespaces:(id)arg4 updateProgress:(id)arg5;
+ (void)updateOnDemandFactors:(id)arg1 trialFactors:(id)arg2 removeUnneededFactors:(bool)arg3 expensiveNetworking:(bool)arg4 updateCount:(unsigned long long)arg5 storeManager:(id)arg6 noRemovalNamespaces:(id)arg7 updateProgress:(id)arg8 completion:(id /* block */)arg9;
+ (void)updateTrialFactors:(id)arg1 missingRolloutsOnly:(bool)arg2 removeUnneededFactors:(bool)arg3 expensiveNetworking:(bool)arg4 updateCount:(unsigned long long)arg5 storeManager:(id)arg6 noRemovalNamespaces:(id)arg7 assetSetNamespaces:(id)arg8 progress:(id /* block */)arg9 completion:(id /* block */)arg10;
+ (void)updateTrialFromAssetSetUsages:(id)arg1 missingRolloutsOnly:(bool)arg2 expensiveNetworking:(bool)arg3 storeManager:(id)arg4 configurationManager:(id)arg5 progress:(id /* block */)arg6 completion:(id /* block */)arg7;
+ (void)updateTrialFromAssetSetUsages:(id)arg1 storeManager:(id)arg2 configurationManager:(id)arg3;
+ (void)updateTrialProject:(id)arg1 trialFactors:(id)arg2 removeUnneededFactors:(bool)arg3 expensiveNetworking:(bool)arg4 updateCount:(unsigned long long)arg5 storeManager:(id)arg6 noRemovalNamespaces:(id)arg7 updateProgress:(id)arg8 completion:(id /* block */)arg9;

@end

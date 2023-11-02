
@interface ASDInstallAttribution : NSObject <ASDServiceProvider> {
    ASDServiceBroker * _serviceBroker;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)interface;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_initWithServiceBroker:(id)arg1;
- (void)addInstallAttributionParamsWithConfig:(id)arg1;
- (void)addInstallAttributionParamsWithConfig:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)addInstallWebAttributionParamsWithConfig:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)endImpressionWithConfig:(id)arg1 completionHandler:(id /* block */)arg2;
- (id)init;
- (void)registerInstallAttributionPingbackForApp:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)startGhostFetchTaskWithCompletionHandler:(id /* block */)arg1;
- (void)startImpressionWithConfig:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)startPingbackTaskWithCompletionHandler:(id /* block */)arg1;
- (void)updateConversionValueForInstallAttributionPingbackForApp:(id)arg1 conversionValue:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)updatePostbackConversionValuesForApp:(id)arg1 fineConversionValue:(id)arg2 coarseConversionValue:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)updatePostbackConversionValuesForApp:(id)arg1 fineConversionValue:(id)arg2 coarseConversionValue:(id)arg3 lockWindow:(bool)arg4 completionHandler:(id /* block */)arg5;

@end

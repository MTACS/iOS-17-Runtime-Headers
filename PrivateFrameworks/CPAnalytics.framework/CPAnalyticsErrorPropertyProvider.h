
@interface CPAnalyticsErrorPropertyProvider : NSObject <CPAnalyticsDynamicPropertyProvider>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_indepthErrorFromError:(id)arg1;

- (id)getDynamicProperty:(id)arg1 forEventName:(id)arg2 payloadForSystemPropertyExtraction:(id)arg3;
- (void)registerSystemProperties:(id)arg1;

@end

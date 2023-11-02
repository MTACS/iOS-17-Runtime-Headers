
@interface ASCViewRender : NSObject <ASCSignpostGroup>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (void)bootstrapDidBeginWithTag:(unsigned long long)arg1;
+ (void)bootstrapDidEndWithTag:(unsigned long long)arg1;
+ (id)category;
+ (void)jsCallDidBeginWithTag:(unsigned long long)arg1;
+ (void)jsCallDidEndWithTag:(unsigned long long)arg1;
+ (void)jsStackBootstrapDidBeginWithTag:(unsigned long long)arg1;
+ (void)jsStackBootstrapDidEndWithTag:(unsigned long long)arg1;
+ (void)launchCorrelationKeyWithTag:(unsigned long long)arg1 withString:(id)arg2;
+ (id)log;
+ (void)modelPrefetchDidBeginWithTag:(unsigned long long)arg1;
+ (void)modelPrefetchDidEndWithTag:(unsigned long long)arg1;
+ (void)overlayRequestedWithTag:(unsigned long long)arg1;
+ (void)pageRequestedWithTag:(unsigned long long)arg1;
+ (void)pageUserReadyWithTag:(unsigned long long)arg1;
+ (void)requestDidBeginWithTag:(unsigned long long)arg1;
+ (void)requestDidEndWithTag:(unsigned long long)arg1;
+ (id)requiredFieldNames;
+ (void)resourceRequestDidBeginWithTag:(unsigned long long)arg1;
+ (void)resourceRequestDidEndWithTag:(unsigned long long)arg1;
+ (void)rootViewModelParseDidBeginWithTag:(unsigned long long)arg1;
+ (void)rootViewModelParseDidEndWithTag:(unsigned long long)arg1;
+ (void)rootViewModelPresentWithTag:(unsigned long long)arg1;
+ (id)subsystem;
+ (void)willEmitSignpostOfType:(long long)arg1 withName:(id)arg2;

@end

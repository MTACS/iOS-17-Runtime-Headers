
@interface MXSampleAnalysisParser : NSObject

+ (id)constructPayloadWithReport:(id)arg1 withType:(long long)arg2;
+ (id)getCallStackForReport:(id)arg1 withType:(long long)arg2;
+ (id)parseCallTree:(id)arg1 isAttributedThread:(bool)arg2;
+ (id)parseCallTreeFrame:(id)arg1 withDepth:(unsigned long long)arg2;
+ (void)sendDiagnosticReport:(id)arg1 forType:(long long)arg2 forSourceID:(long long)arg3;
+ (void)sendDiagnosticReport:(id)arg1 forType:(long long)arg2 forSourceID:(long long)arg3 options:(id)arg4;

@end

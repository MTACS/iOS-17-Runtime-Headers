
@interface MXCorePayloadConstructor : NSObject

+ (id)buildDiagnosticPayloadForClient:(id)arg1 fromClientDiagnosticsDictionary:(id)arg2 withDateString:(id)arg3;
+ (id)buildDummyDiagnosticPayloadForClient:(id)arg1 withDateString:(id)arg2;
+ (id)buildDummyPayloadForClient:(id)arg1 withDateString:(id)arg2;
+ (id)buildPayloadForClient:(id)arg1 fromClientMetricsDictionary:(id)arg2;
+ (id)constructPayloadWithServiceString:(id)arg1 withSourceData:(id)arg2 withDateString:(id)arg3 forClient:(id)arg4;
+ (id)updatePayload:(id)arg1 withServiceString:(id)arg2 withSourceData:(id)arg3 withDateString:(id)arg4 forClient:(id)arg5;

@end

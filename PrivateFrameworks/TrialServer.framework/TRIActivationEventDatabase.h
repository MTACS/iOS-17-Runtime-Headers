
@interface TRIActivationEventDatabase : NSObject {
    TRIDatabase * _db;
}

- (void).cxx_destruct;
- (id)activationEventRecordWithParentId:(id)arg1 factorPackSetId:(id)arg2 deploymentId:(int)arg3;
- (struct { unsigned long long x1; })addRecordWithParentId:(id)arg1 factorPackSetId:(id)arg2 deploymentId:(int)arg3 osBuild:(id)arg4 languageCode:(id)arg5 regionCode:(id)arg6 carrierBundleId:(id)arg7 carrierCountryCode:(id)arg8 diagnosticsUsageEnabled:(bool)arg9 hasAne:(bool)arg10 aneVersion:(id)arg11 transaction:(id)arg12;
- (struct { unsigned long long x1; })deleteRecordWithParentId:(id)arg1 factorPackSetId:(id)arg2 deploymentId:(int)arg3;
- (id)init;
- (id)initWithDatabase:(id)arg1;
- (struct _PASDBTransactionCompletion_ { bool x1; })readTransactionWithFailableBlock:(id /* block */)arg1;
- (struct _PASDBTransactionCompletion_ { bool x1; })writeTransactionWithFailableBlock:(id /* block */)arg1;

@end

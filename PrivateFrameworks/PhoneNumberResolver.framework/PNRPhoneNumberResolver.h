
@interface PNRPhoneNumberResolver : NSObject {
    NSObject<OS_dispatch_queue> * _resolveQueue;
}

- (void).cxx_destruct;
- (id)_notAPhoneNumberError;
- (id)_notFullyQualifiedError;
- (void)_recordUsageAnalyticForCountryCode:(id)arg1 success:(bool)arg2;
- (id)init;
- (void)resolveFullyQualifiedPhoneNumber:(id)arg1 inCountry:(id)arg2 logId:(id)arg3 resultBlock:(id /* block */)arg4;
- (id)resolvePhoneNumber:(id)arg1 countryCode:(id)arg2 error:(id*)arg3;
- (void)resolvePhoneNumbers:(id)arg1 handler:(id /* block */)arg2 queue:(id)arg3;
- (void)resolvePhoneNumbers:(id)arg1 queue:(id)arg2 handler:(id /* block */)arg3;

@end

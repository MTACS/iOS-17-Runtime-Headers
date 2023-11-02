
@interface MTRClusterOtaSoftwareUpdateRequestor : MTRClusterOTASoftwareUpdateRequestor

- (void)announceOtaProviderWithParams:(id)arg1 expectedValues:(id)arg2 expectedValueInterval:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)initWithDevice:(id)arg1 endpoint:(unsigned short)arg2 queue:(id)arg3;
- (id)readAttributeDefaultOtaProvidersWithParams:(id)arg1;
- (void)writeAttributeDefaultOtaProvidersWithValue:(id)arg1 expectedValueInterval:(id)arg2;
- (void)writeAttributeDefaultOtaProvidersWithValue:(id)arg1 expectedValueInterval:(id)arg2 params:(id)arg3;

@end

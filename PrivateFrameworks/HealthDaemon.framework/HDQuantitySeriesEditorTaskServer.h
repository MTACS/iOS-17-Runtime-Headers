
@interface HDQuantitySeriesEditorTaskServer : HDStandardTaskServer <HKQuantitySeriesSampleEditorTaskServerInterface> {
    HKQuantitySample * _quantitySample;
}

+ (Class)configurationClass;
+ (id)requiredEntitlements;
+ (id)taskIdentifier;
+ (bool)validateConfiguration:(id)arg1 client:(id)arg2 error:(id*)arg3;

- (void).cxx_destruct;
- (id)exportedInterface;
- (id)initWithUUID:(id)arg1 configuration:(id)arg2 client:(id)arg3 delegate:(id)arg4;
- (id)remoteInterface;
- (void)remote_commitRemovedDatums:(id)arg1 completion:(id /* block */)arg2;

@end

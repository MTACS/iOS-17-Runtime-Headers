
@interface HDDatabaseValidationTaskServer : HDStandardTaskServer <HKDatabaseValidationTaskServerInterface>

+ (id)taskIdentifier;

- (void)connectionInvalidated;
- (id)exportedInterface;
- (id)remoteInterface;
- (void)remote_validateDatabase:(long long)arg1 clientCompletionHandler:(id /* block */)arg2 errorHandlerIdentifier:(id)arg3;
- (void)remote_validateEntitiesWithClientCompletionHandler:(id /* block */)arg1 errorHandlerIdentifier:(id)arg2;

@end

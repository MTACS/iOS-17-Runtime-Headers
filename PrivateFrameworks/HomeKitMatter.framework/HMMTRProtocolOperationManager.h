
@interface HMMTRProtocolOperationManager : HMFObject <HMFLogging>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)sharedInstance;

- (void)_addArgumentsToInvocation:(id)arg1 primaryArgument:(id)arg2 completionHandlerArgument:(id /* block */)arg3 characteristicDescriptor:(id)arg4 forCharacteristic:(id)arg5;
- (void)_addArgumentsToInvocation:(id)arg1 primaryArgument:(id)arg2 expectedValues:(id)arg3 expectedValueInterval:(id)arg4 completionHandlerArgument:(id /* block */)arg5 characteristicDescriptor:(id)arg6 forCharacteristic:(id)arg7;
- (void)_addParamsToInvocation:(id)arg1 paramsObject:(id)arg2 completionHandlerArgument:(id)arg3 characteristicDescriptor:(id)arg4 forCharacteristic:(id)arg5;
- (void)_addParamsToInvocation:(id)arg1 paramsObject:(id)arg2 expectedValues:(id)arg3 expectedValueInterval:(id)arg4 completionHandlerArgument:(id)arg5 characteristicDescriptor:(id)arg6 forCharacteristic:(id)arg7;
- (bool)_isBasicClusterOperationForBridgedDevice:(Class)arg1 endpointID:(unsigned long long)arg2;
- (id)_processGenericResponseForOperation:(id)arg1 responseValues:(id)arg2 responseError:(id)arg3;
- (id)_processReadResponseForOperation:(id)arg1 readResponseValues:(id)arg2 readResponseError:(id)arg3;
- (id)_processResponseForOperation:(id)arg1 responseValues:(id)arg2 responseError:(id)arg3;
- (id)_processWriteResponseForOperation:(id)arg1 writeResponseValues:(id)arg2 writeResponseError:(id)arg3;
- (id)_responseTupleWithMappedValueForOperation:(id)arg1 responseValue:(id)arg2 responseError:(id)arg3;
- (void)handleHueSaturationWriteWithOperation:(id)arg1 clientQueue:(id)arg2 operationResponseHandler:(id /* block */)arg3;
- (void)handleIdentifyDeviceWriteWithOperation:(id)arg1 clientQueue:(id)arg2 operationResponseHandler:(id /* block */)arg3;
- (void)handleLockTargetStateWriteWithOperation:(id)arg1 clientQueue:(id)arg2 operationResponseHandler:(id /* block */)arg3;
- (bool)handleSpecialCaseCharacteristicWithOperation:(id)arg1 clientQueue:(id)arg2 operationResponseHandler:(id /* block */)arg3;
- (void)registerOperation:(id)arg1 clientQueue:(id)arg2 operationResponseHandler:(id /* block */)arg3;

@end

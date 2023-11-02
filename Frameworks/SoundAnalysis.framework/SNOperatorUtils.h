
@interface SNOperatorUtils : NSObject

+ (bool)checkOperatorEventIsValidGivenInput:(id)arg1 terminationError:(id)arg2;
+ (id /* block */)downstreamHandlerForwardingToOther:(id /* block */)arg1 portID:(id)arg2;
+ (id /* block */)ignoreDownstreamHandler;
+ (bool)sendEventToDownstreamHandler:(id /* block */)arg1 toPortID:(id)arg2 input:(id)arg3 terminationError:(id)arg4 throughOptionalOperator:(id)arg5 operatorPortID:(id)arg6 error:(id*)arg7;
+ (bool)sendEventToOperator:(id)arg1 portID:(id)arg2 input:(id)arg3 terminationError:(id)arg4 downstreamHandler:(id /* block */)arg5 error:(id*)arg6;
+ (bool)validateOperatorEventIsValidGivenInput:(id)arg1 terminationError:(id)arg2 error:(id*)arg3;

- (id)init;

@end


@interface GEOProtobufSession : NSObject {
    GEODataURLSession * _dataSession;
}

+ (id)sharedDelegateQueue;
+ (id)sharedProtobufSession;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDataURLSession:(id)arg1;
- (id)taskWithRequest:(id)arg1 requestTypeCode:(unsigned int)arg2 responseClass:(Class)arg3 delegate:(id)arg4 delegateQueue:(id)arg5;
- (id)taskWithRequestKind:(struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg1 protobufRequest:(id)arg2 URL:(id)arg3 additionalHTTPHeaders:(id)arg4 auditToken:(id)arg5 traits:(id)arg6 delegate:(id)arg7 delegateQueue:(id)arg8 requestCounterTicket:(id)arg9 multipathServiceType:(unsigned long long)arg10 multipathAlternatePort:(unsigned long long)arg11 throttleToken:(id)arg12 options:(unsigned long long)arg13;

@end

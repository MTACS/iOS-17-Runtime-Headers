
@interface RWIProtocolNetworkDomainEventDispatcher : NSObject {
    struct AugmentableInspectorController { int (**x1)(); } * _controller;
}

// Image: /System/Library/PrivateFrameworks/WebInspector.framework/WebInspector

- (void)dataReceivedWithRequestId:(id)arg1 timestamp:(double)arg2 dataLength:(int)arg3 encodedDataLength:(int)arg4;
- (id)initWithController:(struct AugmentableInspectorController { int (**x1)(); }*)arg1;
- (void)loadingFailedWithRequestId:(id)arg1 timestamp:(double)arg2 errorText:(id)arg3 canceled:(bool*)arg4;
- (void)loadingFinishedWithRequestId:(id)arg1 timestamp:(double)arg2 sourceMapURL:(id*)arg3 metrics:(id*)arg4;
- (void)requestInterceptedWithRequestId:(id)arg1 request:(id)arg2;
- (void)requestServedFromMemoryCacheWithRequestId:(id)arg1 frameId:(id)arg2 loaderId:(id)arg3 documentURL:(id)arg4 timestamp:(double)arg5 initiator:(id)arg6 resource:(id)arg7;
- (void)requestWillBeSentWithRequestId:(id)arg1 frameId:(id)arg2 loaderId:(id)arg3 documentURL:(id)arg4 request:(id)arg5 timestamp:(double)arg6 walltime:(double)arg7 initiator:(id)arg8 redirectResponse:(id*)arg9 type:(long long*)arg10 targetId:(id*)arg11;
- (void)responseInterceptedWithRequestId:(id)arg1 response:(id)arg2;
- (void)responseReceivedWithRequestId:(id)arg1 frameId:(id)arg2 loaderId:(id)arg3 timestamp:(double)arg4 type:(long long)arg5 response:(id)arg6;
- (void)webSocketClosedWithRequestId:(id)arg1 timestamp:(double)arg2;
- (void)webSocketCreatedWithRequestId:(id)arg1 url:(id)arg2;
- (void)webSocketFrameErrorWithRequestId:(id)arg1 timestamp:(double)arg2 errorMessage:(id)arg3;
- (void)webSocketFrameReceivedWithRequestId:(id)arg1 timestamp:(double)arg2 response:(id)arg3;
- (void)webSocketFrameSentWithRequestId:(id)arg1 timestamp:(double)arg2 response:(id)arg3;
- (void)webSocketHandshakeResponseReceivedWithRequestId:(id)arg1 timestamp:(double)arg2 response:(id)arg3;
- (void)webSocketWillSendHandshakeRequestWithRequestId:(id)arg1 timestamp:(double)arg2 walltime:(double)arg3 request:(id)arg4;

// Image: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit

- (void)safe_dataReceivedWithRequestId:(id)arg1 timestamp:(double)arg2 dataLength:(int)arg3 encodedDataLength:(int)arg4;
- (void)safe_loadingFailedWithRequestId:(id)arg1 timestamp:(double)arg2 errorText:(id)arg3 canceled:(bool*)arg4;
- (void)safe_loadingFinishedWithRequestId:(id)arg1 timestamp:(double)arg2 sourceMapURL:(id*)arg3 metrics:(id*)arg4;
- (void)safe_requestInterceptedWithRequestId:(id)arg1 request:(id)arg2;
- (void)safe_requestServedFromMemoryCacheWithRequestId:(id)arg1 frameId:(id)arg2 loaderId:(id)arg3 documentURL:(id)arg4 timestamp:(double)arg5 initiator:(id)arg6 resource:(id)arg7;
- (void)safe_requestWillBeSentWithRequestId:(id)arg1 frameId:(id)arg2 loaderId:(id)arg3 documentURL:(id)arg4 request:(id)arg5 timestamp:(double)arg6 walltime:(double)arg7 initiator:(id)arg8 redirectResponse:(id*)arg9 type:(long long*)arg10 targetId:(id*)arg11;
- (void)safe_responseInterceptedWithRequestId:(id)arg1 response:(id)arg2;
- (void)safe_responseReceivedWithRequestId:(id)arg1 frameId:(id)arg2 loaderId:(id)arg3 timestamp:(double)arg4 type:(long long)arg5 response:(id)arg6;
- (void)safe_webSocketClosedWithRequestId:(id)arg1 timestamp:(double)arg2;
- (void)safe_webSocketCreatedWithRequestId:(id)arg1 url:(id)arg2;
- (void)safe_webSocketFrameErrorWithRequestId:(id)arg1 timestamp:(double)arg2 errorMessage:(id)arg3;
- (void)safe_webSocketFrameReceivedWithRequestId:(id)arg1 timestamp:(double)arg2 response:(id)arg3;
- (void)safe_webSocketFrameSentWithRequestId:(id)arg1 timestamp:(double)arg2 response:(id)arg3;
- (void)safe_webSocketHandshakeResponseReceivedWithRequestId:(id)arg1 timestamp:(double)arg2 response:(id)arg3;
- (void)safe_webSocketWillSendHandshakeRequestWithRequestId:(id)arg1 timestamp:(double)arg2 walltime:(double)arg3 request:(id)arg4;

@end


@protocol GEORequestCounterTicket <NSObject>

@required

- (<GEORequestCounterTicket> *)createSubtask:(bool)arg1;
- (void)explicitInterfaceRequestCompleted:(NSError *)arg1 xmitBytes:(unsigned long long)arg2 recvBytes:(unsigned long long)arg3;
- (void)requestCompleted:(NSError *)arg1;
- (void)startingRequestWithExplicitInterfaces:(unsigned long long)arg1;
- (void)startingRequestWithTask:(NSURLSessionTask *)arg1;

@end

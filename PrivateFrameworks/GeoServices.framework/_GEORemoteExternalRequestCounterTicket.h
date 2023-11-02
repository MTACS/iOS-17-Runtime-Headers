
@interface _GEORemoteExternalRequestCounterTicket : GEOExternalRequestCounterTicketBase {
    GEORequestCounterRemoteProxy * _remoteProxy;
}

+ (id)externalRequestCounterForType:(id)arg1 subtype:(id)arg2 source:(id)arg3 appId:(id)arg4 remoteProxy:(id)arg5;

- (void).cxx_destruct;
- (void)_incrementExternalForApp:(id)arg1 startTime:(id)arg2 endTime:(id)arg3 xmitBytes:(long long)arg4 recvBytes:(long long)arg5 usedInterfaces:(unsigned long long)arg6 requestType:(id)arg7 requestSubtype:(id)arg8 source:(id)arg9;

@end

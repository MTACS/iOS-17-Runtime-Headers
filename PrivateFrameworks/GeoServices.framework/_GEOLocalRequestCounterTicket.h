
@interface _GEOLocalRequestCounterTicket : GEORequestCounterTicketBase {
    GEORequestCounterPersistence * _persistence;
}

+ (id)requestCounterTicketForType:(struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg1 auditToken:(id)arg2 traits:(id)arg3 persistence:(id)arg4;

- (void).cxx_destruct;
- (void)_incrementForApp:(id)arg1 offlineCohortId:(id)arg2 requestMode:(int)arg3 startTime:(id)arg4 endTime:(id)arg5 requestType:(struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg6 result:(unsigned char)arg7 error:(id)arg8 xmitBytes:(long long)arg9 recvBytes:(long long)arg10 usedInterfaces:(unsigned long long)arg11;

@end

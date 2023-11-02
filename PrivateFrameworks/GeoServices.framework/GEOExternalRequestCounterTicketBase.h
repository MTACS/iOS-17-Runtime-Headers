
@interface GEOExternalRequestCounterTicketBase : NSObject <GEOExternalRequestCounterTicket> {
    NSString * _appId;
    NSString * _requestSubtype;
    NSString * _requestType;
    NSString * _source;
    NSDate * _startDate;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)externalRequestCounterForType:(id)arg1 subtype:(id)arg2 source:(id)arg3 appId:(id)arg4;

- (void).cxx_destruct;
- (void)_incrementExternalForApp:(id)arg1 startTime:(id)arg2 endTime:(id)arg3 xmitBytes:(long long)arg4 recvBytes:(long long)arg5 usedInterfaces:(unsigned long long)arg6 requestType:(id)arg7 requestSubtype:(id)arg8 source:(id)arg9;
- (void)requestCompletedWithAMPResult:(id)arg1;

@end

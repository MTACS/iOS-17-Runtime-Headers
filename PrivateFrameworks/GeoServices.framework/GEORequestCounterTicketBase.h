
@interface GEORequestCounterTicketBase : NSObject <GEORequestCounterTicket> {
    NSString * _appId;
    double  _end;
    unsigned long long  _explicitInterfaces;
    bool  _logNetworkActivityOnly;
    NSObject<OS_nw_activity> * _nwActivity;
    bool  _nwActivityCompleted;
    NSString * _offlineCohortId;
    GEORequestCounterTicketBase * _parentTask;
    int  _requestMode;
    unsigned char  _result;
    unsigned long long  _signpostId;
    double  _start;
    long long  _subTaskRecvBytes;
    unsigned char  _subTaskResult;
    unsigned long long  _subTaskUsedInterfaces;
    long long  _subTaskXmitBytes;
    unsigned char  _subtasks;
    NSURLSessionTask * _task;
    struct { 
        int type; 
        union { 
            int raw; 
            int tile; 
            int placeRequest; 
        } subtype; 
    }  _type;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_requestCounterTicketForType:(struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg1 appId:(id)arg2 traits:(id)arg3 offlineCohortId:(id)arg4 withParent:(id)arg5 logNetworkActivityOnly:(bool)arg6;
+ (id)requestCounterTicketForType:(struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg1 auditToken:(id)arg2 traits:(id)arg3;

- (void).cxx_destruct;
- (void)_incrementForApp:(id)arg1 offlineCohortId:(id)arg2 requestMode:(int)arg3 startTime:(id)arg4 endTime:(id)arg5 requestType:(struct { int x1; union { int x_2_1_1; int x_2_1_2; int x_2_1_3; } x2; })arg6 result:(unsigned char)arg7 error:(id)arg8 xmitBytes:(long long)arg9 recvBytes:(long long)arg10 usedInterfaces:(unsigned long long)arg11;
- (void)_requestCompletedWithError:(id)arg1 xmitBytes:(long long)arg2 recvBytes:(long long)arg3;
- (void)_subTask:(id)arg1 completed:(unsigned char)arg2 error:(id)arg3 started:(double)arg4 finished:(double)arg5 xmitBytes:(long long)arg6 recvBytes:(long long)arg7 usedInterfaces:(unsigned long long)arg8;
- (id)createSubtask:(bool)arg1;
- (void)dealloc;
- (id)description;
- (void)explicitInterfaceRequestCompleted:(id)arg1 xmitBytes:(unsigned long long)arg2 recvBytes:(unsigned long long)arg3;
- (void)requestCompleted:(id)arg1;
- (void)startingRequestWithExplicitInterfaces:(unsigned long long)arg1;
- (void)startingRequestWithTask:(id)arg1;

@end

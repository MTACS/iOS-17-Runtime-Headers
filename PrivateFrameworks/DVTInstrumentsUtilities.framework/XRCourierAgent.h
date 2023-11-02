
@interface XRCourierAgent : XRMobileAgent <XRMinorFrameAgent, XRMobileAgentVisitor> {
    NSDictionary * _details;
    NSString * _message;
    NSDictionary * _reply;
    XRMobileAgent<XRMobileAgentOwner> * _roomOwner;
}

@property (nonatomic, readonly) NSDictionary *details;
@property (nonatomic, readonly) NSString *message;
@property (nonatomic, retain) NSDictionary *reply;
@property (nonatomic, retain) XRMobileAgent<XRMobileAgentOwner> *roomOwner;
@property (nonatomic) _Atomic bool*yieldNow;

+ (id)sendCourierToVisitWaitingRoom:(id)arg1 message:(id)arg2 details:(id)arg3;
+ (id)sendCourierToVisitWaitingRoom:(id)arg1 message:(id)arg2 details:(id)arg3 replyStop:(id)arg4 replyTicket:(id)arg5;

- (void).cxx_destruct;
- (id)agentDiagnosticsName;
- (id)details;
- (void)executeStopOnItinerary:(id)arg1;
- (id)init;
- (id)initWithMessage:(id)arg1 details:(id)arg2;
- (id)message;
- (id)reply;
- (id)roomOwner;
- (void)sendToWaitingRoom:(id)arg1;
- (void)sendToWaitingRoom:(id)arg1 replyStop:(id)arg2 replyTicket:(id)arg3;
- (void)setReply:(id)arg1;
- (void)setRoomOwner:(id)arg1;
- (void)setYieldNow:(void *)arg1; // needs 1 arg types, found 2: _Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void**, bool
- (_Atomic /* Warning: Unrecognized filer type: '' using 'void*' */ void**)yieldNow:(SEL)arg1;

@end

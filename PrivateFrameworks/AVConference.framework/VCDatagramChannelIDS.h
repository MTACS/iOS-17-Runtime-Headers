
@interface VCDatagramChannelIDS : VCObject {
    int  _dataPath;
    NSString * _destination;
    id /* block */  _eventHandler;
    IDSDatagramChannel * _idsChannel;
    unsigned int  _token;
    int  _vtpSocket;
}

@property (readonly) NSArray *connectedLinks;
@property (readonly) int dataPath;
@property (readonly) IDSDataChannelLinkContext *defaultLink;
@property (readonly) NSString *destination;

- (id)VTPConnectionContext;
- (id)connectedLinks;
- (int)dataPath;
- (id)datagramChannelOptions;
- (id)datagramChannelWithDestination:(id)arg1 error:(id*)arg2;
- (void)dealloc;
- (id)defaultLink;
- (id)destination;
- (void)flushLinkProbingStatusWithOptions:(id)arg1;
- (id)initWithDestination:(id)arg1 token:(unsigned int)arg2 dataPath:(int)arg3 error:(id*)arg4;
- (id)initWithSocketDescriptor:(int)arg1 token:(unsigned int)arg2 error:(id*)arg3;
- (void)invalidate;
- (void)optInStreamIDs:(id)arg1;
- (void)optOutStreamIDs:(id)arg1;
- (void)osChannelInfoLog;
- (void)queryProbingResultsWithOptions:(id)arg1;
- (void)readyToRead;
- (void)requestSessionInfoWithOptions:(id)arg1;
- (void)requestStatsWithOptions:(id)arg1;
- (void)setChannelPreferences:(id)arg1;
- (void)setEventHandler:(id /* block */)arg1;
- (void)setOneToOneModeEnabled:(bool)arg1 isInitiator:(bool)arg2;
- (void)setReadHandler:(id /* block */)arg1;
- (void)setWiFiAssist:(bool)arg1;
- (void)setWriteCompletionHandler:(id /* block */)arg1;
- (int)setupVTPSocketWithFileDescriptor:(int)arg1;
- (id)sharedIDSService;
- (int)start;
- (void)startActiveProbingWithOptions:(id)arg1;
- (void)startMKMRecoveryForParticipantIDs:(id)arg1;
- (void)stopActiveProbingWithOptions:(id)arg1;
- (void)writeDatagram:(const void*)arg1 datagramSize:(unsigned int)arg2 datagramInfo:(struct { BOOL x1; unsigned short x2; unsigned char x3; unsigned short x4; unsigned char x5; })arg3 options:(struct { unsigned int x1; unsigned long long x2; unsigned short x3; unsigned char x4; BOOL x5; unsigned short x6[12]; unsigned char x7; unsigned short x8; struct { unsigned short x_9_1_1; unsigned short x_9_1_2; unsigned short x_9_1_3; unsigned short x_9_1_4; unsigned short x_9_1_5; } x9; double x10; unsigned long long x11; bool x12; unsigned long long x13; unsigned char x14[16]; bool x15; bool x16; }*)arg4 completionHandler:(id /* block */)arg5;
- (void)writeDatagrams:(const void**)arg1 datagramsSize:(unsigned int*)arg2 datagramsInfo:(struct { BOOL x1; unsigned short x2; unsigned char x3; unsigned short x4; unsigned char x5; }*)arg3 datagramsCount:(int)arg4 options:(struct { /* ? */ }**)arg5 completionHandler:(id /* block */)arg6;

@end

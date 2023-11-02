
@interface NMSSHChannel : NSObject {
    unsigned long long  _bufferSize;
    struct _LIBSSH2_CHANNEL { } * _channel;
    <NMSSHChannelDelegate> * _delegate;
    NSDictionary * _environmentVariables;
    NSData * _lastResponse;
    const char * _ptyTerminalName;
    long long  _ptyTerminalType;
    bool  _requestPty;
    NMSSHSession * _session;
    NSObject<OS_dispatch_source> * _source;
    long long  _type;
}

@property (nonatomic) unsigned long long bufferSize;
@property (nonatomic) struct _LIBSSH2_CHANNEL { }*channel;
@property (nonatomic) <NMSSHChannelDelegate> *delegate;
@property (nonatomic, retain) NSDictionary *environmentVariables;
@property (nonatomic, retain) NSData *lastResponse;
@property (nonatomic) const char *ptyTerminalName;
@property (nonatomic) long long ptyTerminalType;
@property (nonatomic) bool requestPty;
@property (nonatomic, retain) NMSSHSession *session;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *source;
@property (nonatomic) long long type;

- (void).cxx_destruct;
- (unsigned long long)bufferSize;
- (struct _LIBSSH2_CHANNEL { }*)channel;
- (void)closeChannel;
- (void)closeShell;
- (id)delegate;
- (bool)downloadFile:(id)arg1 to:(id)arg2;
- (bool)downloadFile:(id)arg1 to:(id)arg2 progress:(id /* block */)arg3;
- (id)environmentVariables;
- (id)execute:(id)arg1 error:(id*)arg2;
- (id)execute:(id)arg1 error:(id*)arg2 timeout:(id)arg3;
- (void)executeCommandAsynchronously:(id)arg1;
- (id)initWithSession:(id)arg1;
- (id)lastResponse;
- (bool)openChannel:(id*)arg1;
- (const char *)ptyTerminalName;
- (long long)ptyTerminalType;
- (id)readResponseWithError:(id*)arg1 timeout:(id)arg2 userInfo:(id)arg3;
- (bool)requestPty;
- (bool)requestSizeWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (bool)sendEOF;
- (id)session;
- (void)setBufferSize:(unsigned long long)arg1;
- (void)setChannel:(struct _LIBSSH2_CHANNEL { }*)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEnvironmentVariables:(id)arg1;
- (void)setLastResponse:(id)arg1;
- (void)setPtyTerminalName:(const char *)arg1;
- (void)setPtyTerminalType:(long long)arg1;
- (void)setRequestPty:(bool)arg1;
- (void)setSession:(id)arg1;
- (void)setSource:(id)arg1;
- (void)setType:(long long)arg1;
- (id)source;
- (bool)startShell:(id*)arg1;
- (long long)type;
- (bool)uploadFile:(id)arg1 to:(id)arg2;
- (bool)uploadFile:(id)arg1 to:(id)arg2 progress:(id /* block */)arg3;
- (void)waitEOF;
- (bool)write:(id)arg1 error:(id*)arg2;
- (bool)write:(id)arg1 error:(id*)arg2 timeout:(id)arg3;
- (bool)writeData:(id)arg1 error:(id*)arg2;
- (bool)writeData:(id)arg1 error:(id*)arg2 timeout:(id)arg3;

@end

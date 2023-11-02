
@interface MFSMTPConnection : MFConnection <EFLoggable> {
    id  _delegate;
    bool  _dislikesSaveSentMbox;
    NSString * _domainName;
    bool  _hideLoggedData;
    long long  _lastCommandTimestamp;
    MFSMTPResponse * _lastResponse;
    NSMutableData * _mdata;
    int  _originalSocketTimeout;
    NSString * _saveSentMbox;
    NSMutableArray * _serviceExtensions;
    bool  _useSaveSent;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)log;

- (void).cxx_destruct;
- (bool)_connectUsingAccount:(id)arg1;
- (id)_dataForCommand:(const char *)arg1 length:(unsigned long long)arg2 argument:(id)arg3 trailer:(const char *)arg4;
- (unsigned long long)_doHandshakeUsingAccount:(id)arg1;
- (unsigned long long)_getReply;
- (bool)_hasParameter:(id)arg1 forKeyword:(id)arg2;
- (unsigned long long)_readResponseRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; }*)arg1 isContinuation:(bool*)arg2;
- (unsigned long long)_sendBytes:(const char *)arg1 length:(unsigned long long)arg2 progressHandler:(id /* block */)arg3;
- (unsigned long long)_sendCommand:(const char *)arg1 length:(unsigned long long)arg2 argument:(id)arg3 trailer:(const char *)arg4;
- (unsigned long long)_sendData:(id)arg1;
- (unsigned long long)_sendData:(id)arg1 progressHandler:(id /* block */)arg2;
- (void)_setLastResponse:(id)arg1;
- (bool)_supportsExtension:(id)arg1;
- (bool)_supportsSaveSentExtension;
- (const char *)_trailerForMailFromWithEmailAddressFormatStyle:(long long)arg1;
- (void)abort;
- (bool)authenticateUsingAccount:(id)arg1;
- (bool)authenticateUsingAccount:(id)arg1 authenticator:(id)arg2;
- (id)authenticationMechanisms;
- (bool)connectUsingAccount:(id)arg1;
- (id)dataForDataCmd;
- (id)dataForMailFrom:(id)arg1 emailFormatStyle:(long long)arg2;
- (id)dataForRcptTo:(id)arg1;
- (id)domainName;
- (id)init;
- (id)lastResponse;
- (id)lastResponseLine;
- (unsigned long long)mailFrom:(id)arg1 emailFormatStyle:(long long)arg2;
- (long long)mailFrom:(id)arg1 recipients:(id)arg2 withData:(id)arg3 host:(id)arg4 emailFormatStyle:(long long)arg5 errorTitle:(id*)arg6 errorMessage:(id*)arg7 serverResponse:(id*)arg8 displayError:(bool*)arg9 errorCode:(int*)arg10 errorUserInfo:(id*)arg11;
- (unsigned long long)maximumMessageBytes;
- (unsigned long long)noop;
- (unsigned long long)quit;
- (unsigned long long)rcptTo:(id)arg1;
- (unsigned long long)sendBData:(id)arg1;
- (unsigned long long)sendData:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setDomainName:(id)arg1;
- (void)setUseSaveSent:(bool)arg1 toFolder:(id)arg2;
- (unsigned long long)state;
- (bool)supportsChunking;
- (bool)supportsEnhancedStatusCodes;
- (bool)supportsOutboxCopy;
- (bool)supportsPipelining;
- (bool)supportsSMTPUTF8;
- (long long)timeLastCommandWasSent;

@end

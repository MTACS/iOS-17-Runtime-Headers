
@interface NFSecureElementLoggingSession : NFSession <NFSecureElementLoggingSessionCallbacks>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)clearLogs:(unsigned char)arg1 forSEID:(id)arg2;
- (id)enableSMBLogging:(bool)arg1;
- (id)getLogs:(unsigned char)arg1 forSEID:(id)arg2 error:(id*)arg3;
- (id)getSMBLogWithError:(id*)arg1;
- (id)storeACLogs:(id)arg1;

@end

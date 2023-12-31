
@interface ICADIProvisionSession : NSObject {
    unsigned long long  _accountID;
    unsigned int  _sessionID;
}

- (void)_destroySession;
- (void)dealloc;
- (bool)endWithMessageData:(id)arg1 transportKey:(id)arg2 error:(id*)arg3;
- (id)initWithAccountID:(unsigned long long)arg1;
- (bool)startWithServerActionData:(id)arg1 returningClientData:(id*)arg2 error:(id*)arg3;

@end

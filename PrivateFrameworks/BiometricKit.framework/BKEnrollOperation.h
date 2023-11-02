
@interface BKEnrollOperation : BKOperation {
    BKAccessoryGroup * _accessoryGroup;
    NSData * _credentialSet;
    unsigned int  _userID;
}

@property (nonatomic, retain) BKAccessoryGroup *accessoryGroup;
@property (nonatomic, copy) NSData *credentialSet;
@property (nonatomic) <BKEnrollOperationDelegate> *delegate;
@property (nonatomic) unsigned int userID;

- (void).cxx_destruct;
- (id)accessoryGroup;
- (id)credentialSet;
- (void)enrollFeedback:(id)arg1 client:(unsigned long long)arg2;
- (void)enrollResult:(id)arg1 details:(id)arg2 client:(unsigned long long)arg3;
- (id)enrollResultInfoWithServerIdentity:(id)arg1 details:(id)arg2;
- (void)enrollUpdate:(id)arg1 client:(unsigned long long)arg2;
- (id)initWithDevice:(id)arg1;
- (void)operationInterrupted;
- (id)optionsDictionaryWithError:(id*)arg1;
- (void)processEnrollFailReason:(long long)arg1;
- (void)setAccessoryGroup:(id)arg1;
- (void)setCredentialSet:(id)arg1;
- (void)setUserID:(unsigned int)arg1;
- (void)startBioOperation:(bool)arg1 reply:(id /* block */)arg2;
- (void)statusMessage:(unsigned int)arg1 client:(unsigned long long)arg2;
- (void)statusMessage:(unsigned int)arg1 details:(id)arg2 client:(unsigned long long)arg3;
- (unsigned int)userID;

@end

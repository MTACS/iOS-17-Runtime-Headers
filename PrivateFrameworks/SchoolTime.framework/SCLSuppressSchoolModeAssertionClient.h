
@interface SCLSuppressSchoolModeAssertionClient : NSObject <SCLSuppressSchoolModeAssertionXPCServer> {
    bool  _acquired;
    NSXPCConnection * _connection;
    <SCLSuppressSchoolModeAssertionClientDelegate> * _delegate;
    bool  _entitled;
    NSString * _explanation;
}

@property (getter=isAcquired, nonatomic) bool acquired;
@property (nonatomic, readonly) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <SCLSuppressSchoolModeAssertionClientDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (getter=isEntitled, nonatomic) bool entitled;
@property (nonatomic, readonly, copy) NSString *explanation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (oneway void)acquireWithExplanation:(id)arg1 UUID:(id)arg2 completion:(id /* block */)arg3;
- (id)connection;
- (void)connectionDidInvalidate;
- (id)delegate;
- (id)description;
- (id)explanation;
- (id)initWithConnection:(id)arg1;
- (bool)isAcquired;
- (bool)isEntitled;
- (void)setAcquired:(bool)arg1;
- (void)setDelegate:(id)arg1;
- (void)setEntitled:(bool)arg1;

@end

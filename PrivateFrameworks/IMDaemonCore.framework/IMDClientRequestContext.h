
@interface IMDClientRequestContext : NSObject {
    struct { 
        unsigned int val[8]; 
    }  _auditToken;
    unsigned long long  _capabilities;
    NSString * _listenerID;
    <IMDaemonListenerProtocol> * _replyProxy;
}

@property (nonatomic, readonly) struct { unsigned int x1[8]; } auditToken;
@property (nonatomic, readonly) unsigned long long capabilities;
@property (nonatomic, readonly, copy) NSString *listenerID;
@property (nonatomic, readonly) <IMDaemonListenerProtocol> *replyProxy;

+ (id)currentContext;
+ (void)setCurrentContext:(id)arg1;

- (void).cxx_destruct;
- (struct { unsigned int x1[8]; })auditToken;
- (unsigned long long)capabilities;
- (id)initWithListenerID:(id)arg1 auditToken:(struct { unsigned int x1[8]; })arg2 capabilities:(unsigned long long)arg3 replyProxy:(id)arg4;
- (id)listenerID;
- (id)replyProxy;

@end


@interface COMessagingClientInfo : NSObject {
    COCoordinationServiceClient * _client;
    id  _cluster;
    id /* block */  _completionHandler;
    NSSet * _handledClasses;
    NSMutableDictionary * _sessions;
    NSString * _topic;
}

@property (nonatomic, readonly) COCoordinationServiceClient *client;
@property (nonatomic, readonly, copy) id cluster;
@property (nonatomic, copy) id /* block */ completionHandler;
@property (nonatomic, readonly, copy) NSSet *handledClasses;
@property (nonatomic, readonly, retain) NSMutableDictionary *sessions;
@property (nonatomic, readonly, copy) NSString *topic;

- (void).cxx_destruct;
- (id)client;
- (id)cluster;
- (id /* block */)completionHandler;
- (id)handledClasses;
- (id)initWithTopic:(id)arg1 cluster:(id)arg2 handledClasses:(id)arg3 client:(id)arg4 activateCompletionHanlder:(id /* block */)arg5;
- (id)sessions;
- (void)setCompletionHandler:(id /* block */)arg1;
- (id)topic;

@end


@interface HMDDataStreamPendingEvent : NSObject {
    id /* block */  _completion;
    NSDictionary * _payload;
    NSString * _protocol;
    NSString * _topic;
}

@property (nonatomic, readonly) id /* block */ completion;
@property (nonatomic, readonly) NSDictionary *payload;
@property (nonatomic, readonly) NSString *protocol;
@property (nonatomic, readonly) NSString *topic;

- (void).cxx_destruct;
- (id /* block */)completion;
- (id)initWithProtocol:(id)arg1 topic:(id)arg2 payload:(id)arg3 completion:(id /* block */)arg4;
- (id)payload;
- (id)protocol;
- (id)topic;

@end

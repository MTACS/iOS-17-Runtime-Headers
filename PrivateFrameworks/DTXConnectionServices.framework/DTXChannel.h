
@interface DTXChannel : NSObject <DTXMessenger> {
    bool  _canceled;
    unsigned int  _channelCode;
    struct __DTXChannelGuarded_private { 
        struct { 
            NSObject<OS_dispatch_queue> *userDispatchQueue; 
            <DTXAllowedRPC> *dispatchTarget; 
            id /* block */ messageHandler; 
            id /* block */ dispatchValidator; 
        } _fields; 
    }  _channelGuarded;
    int  _compressionTypeHint;
    DTXConnection * _connection;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _handlerGuard;
    NSString * _label;
    NSObject<OS_dispatch_queue> * _serialQueue;
    DTXConnection * _strongConnection;
}

@property (nonatomic, readonly) DTXConnection *_connection;
@property (nonatomic, readonly) unsigned int channelCode;
@property int compressionTypeHint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property bool isCanceled;
@property (nonatomic, copy) NSString *label;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (struct { id x1; id x2; id /* block */ x3; id /* block */ x4; })_callbackSnapshot;
- (id)_connection;
- (void)_scheduleBlock:(id /* block */)arg1;
- (void)_scheduleMessage:(id)arg1 tracker:(id)arg2 withHandler:(id /* block */)arg3;
- (void)_setDispatchTarget:(id)arg1 queue:(id)arg2;
- (void)_setDispatchValidator:(id /* block */)arg1;
- (void)cancel;
- (unsigned int)channelCode;
- (int)compressionTypeHint;
- (id)description;
- (id)initWithConnection:(id)arg1 channelIdentifier:(unsigned int)arg2 label:(id)arg3;
- (bool)isCanceled;
- (id)label;
- (void)registerDisconnectHandler:(id /* block */)arg1;
- (void)resume;
- (void)sendControlAsync:(id)arg1 replyHandler:(id /* block */)arg2;
- (void)sendControlSync:(id)arg1 replyHandler:(id /* block */)arg2;
- (void)sendMessage:(id)arg1 replyHandler:(id /* block */)arg2;
- (bool)sendMessageAsync:(id)arg1 replyHandler:(id /* block */)arg2;
- (void)sendMessageSync:(id)arg1 replyHandler:(id /* block */)arg2;
- (void)setCompressionTypeHint:(int)arg1;
- (void)setDispatchTarget:(id)arg1;
- (void)setIsCanceled:(bool)arg1;
- (void)setLabel:(id)arg1;
- (void)setMessageHandler:(id /* block */)arg1;
- (void)suspend;

@end

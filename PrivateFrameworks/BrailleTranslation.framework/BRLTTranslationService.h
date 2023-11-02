
@interface BRLTTranslationService : NSObject {
    bool  _interrupted;
    bool  _invalid;
    id /* block */  _invalidationHandler;
    NSObject<OS_dispatch_queue> * _queue;
    NSXPCConnection * _queue_connection;
    NSString * _serviceIdentifier;
}

@property (nonatomic) bool interrupted;
@property (getter=isInvalid, nonatomic) bool invalid;
@property (nonatomic, copy) id /* block */ invalidationHandler;
@property (getter=isLoopback, nonatomic, readonly) bool loopback;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic, retain) NSXPCConnection *queue_connection;
@property (nonatomic, readonly) NSString *serviceIdentifier;

+ (id)connectionForLoopbackService:(id)arg1;
+ (id)connectionForServiceIdentifier:(id)arg1;
+ (id)connections;
+ (id)serviceForIdentifier:(id)arg1;
+ (id)serviceForIdentifier:(id)arg1 loopback:(bool)arg2;

- (void).cxx_destruct;
- (void)_queue_invalidate;
- (void)_queue_loadBundle;
- (void)_queue_resume;
- (id)_queue_serviceProxy;
- (void)brailleForText:(id)arg1 parameters:(id)arg2 withReply:(id /* block */)arg3;
- (id)description;
- (id)initWithServiceIdentifier:(id)arg1 connection:(id)arg2;
- (bool)interrupted;
- (id /* block */)invalidationHandler;
- (bool)isInvalid;
- (bool)isLoopback;
- (id)queue;
- (id)queue_connection;
- (id)serviceIdentifier;
- (void)setInterrupted:(bool)arg1;
- (void)setInvalid:(bool)arg1;
- (void)setInvalidationHandler:(id /* block */)arg1;
- (void)setQueue:(id)arg1;
- (void)setQueue_connection:(id)arg1;
- (void)textForBraille:(id)arg1 parameters:(id)arg2 withReply:(id /* block */)arg3;

@end

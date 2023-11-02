
@interface EDBiomeInteractionEventLog : NSObject <EDInteractionEventLog, EFLoggable> {
    NSObject<OS_dispatch_queue> * _queue;
    BMSource * _source;
    BMStoreStream * _stream;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)log;
+ (id)payloadFromData:(id)arg1 message:(id)arg2;

- (void).cxx_destruct;
- (void)donateToBiomeWithEvent:(id)arg1;
- (id)init;
- (void)persistEvent:(id)arg1 dataFromMessage:(id)arg2;
- (void)persistEvent:(id)arg1 dataFromMessage:(id)arg2 account:(id)arg3;
- (void)persistEvent:(id)arg1 date:(id)arg2 conversationID:(long long)arg3 data:(id)arg4;
- (void)persistEvent:(id)arg1 date:(id)arg2 message:(id)arg3 data:(id)arg4;
- (void)persistEvent:(id)arg1 date:(id)arg2 message:(id)arg3 mailbox:(id)arg4;
- (void)persistEvent:(id)arg1 date:(id)arg2 message:(id)arg3 mailboxType:(long long)arg4;

@end

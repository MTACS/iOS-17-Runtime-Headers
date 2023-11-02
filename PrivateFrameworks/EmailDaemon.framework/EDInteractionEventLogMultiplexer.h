
@interface EDInteractionEventLogMultiplexer : NSObject <EDInteractionEventLog> {
    NSArray * _logs;
}

@property (nonatomic, retain) NSArray *logs;

- (void).cxx_destruct;
- (id)description;
- (id)initWithLogs:(id)arg1;
- (id)logs;
- (void)persistEvent:(id)arg1 dataFromMessage:(id)arg2;
- (void)persistEvent:(id)arg1 dataFromMessage:(id)arg2 account:(id)arg3;
- (void)persistEvent:(id)arg1 date:(id)arg2 conversationID:(long long)arg3 data:(id)arg4;
- (void)persistEvent:(id)arg1 date:(id)arg2 message:(id)arg3 data:(id)arg4;
- (void)persistEvent:(id)arg1 date:(id)arg2 message:(id)arg3 mailbox:(id)arg4;
- (void)persistEvent:(id)arg1 date:(id)arg2 message:(id)arg3 mailboxType:(long long)arg4;
- (void)setLogs:(id)arg1;

@end

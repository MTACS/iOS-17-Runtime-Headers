
@interface MSPSenderMessageStrategy : MSPSenderStrategy {
    <MSPSenderMessageStrategyDelegate> * _delegate;
    NSMutableSet * _messagesParticipants;
}

@property (nonatomic) <MSPSenderMessageStrategyDelegate> *delegate;
@property (nonatomic, retain) NSMutableSet *messagesParticipants;

- (void).cxx_destruct;
- (void)_addMessagesParticipants:(id)arg1;
- (void)_removeMessagesParticipants:(id)arg1;
- (void)addParticipants:(id)arg1;
- (id)delegate;
- (id)messagesParticipants;
- (id)participants;
- (void)removeParticipants:(id)arg1;
- (void)sendMessageIfNeeded;
- (void)setDelegate:(id)arg1;
- (void)setMessagesParticipants:(id)arg1;
- (void)setState:(id)arg1;

@end

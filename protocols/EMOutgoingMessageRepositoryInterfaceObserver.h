
@protocol EMOutgoingMessageRepositoryInterfaceObserver <NSObject>

@required

- (void)hasDelayedMessagesDidChange:(bool)arg1;
- (void)numberOfPendingMessagesChanged:(NSNumber *)arg1;

@end

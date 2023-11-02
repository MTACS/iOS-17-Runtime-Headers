
@protocol ATMessageLinkObserver <NSObject>

@optional

- (void)messageLinkWasClosed:(ATMessageLink *)arg1;
- (void)messageLinkWasInitialized:(ATMessageLink *)arg1;
- (void)messageLinkWasOpened:(ATMessageLink *)arg1;

@end

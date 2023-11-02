
@protocol AAIDSMessagingServiceInternal <AAIDSMessagingService>

@required

- (NSMutableArray *)pendingCustodianMessages;
- (NSMutableArray *)pendingInheritanceMessages;

@end

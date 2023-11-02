
@protocol MessageHeaderViewModelBuilder <MessageItemViewModelBuilder>

@required

- (MFAddressAtomStatusManager *)atomManager;
- (NSArray *)bccList;
- (EFFuture *)brandIndicatorFuture;
- (NSArray *)ccList;
- (NSDate *)dateSent;
- (<EMCollectionItemID> *)itemID;
- (MFMailboxUid *)mailbox;
- (NSArray *)senderList;
- (void)setAtomManager:(MFAddressAtomStatusManager *)arg1;
- (void)setBccList:(NSArray *)arg1;
- (void)setBrandIndicatorFuture:(EFFuture *)arg1;
- (void)setCcList:(NSArray *)arg1;
- (void)setDateSent:(NSDate *)arg1;
- (void)setItemID:(id <EMCollectionItemID>)arg1;
- (void)setMailbox:(MFMailboxUid *)arg1;
- (void)setSenderList:(NSArray *)arg1;
- (void)setSubject:(ECSubject *)arg1;
- (void)setToList:(NSArray *)arg1;
- (ECSubject *)subject;
- (NSArray *)toList;

@end


@protocol ECTransferMessageActionItemBuilder <NSObject>

@required

- (<ECMessage> *)destinationMessage;
- (void)setDestinationMessage:(id <ECMessage>)arg1;
- (void)setSourceMessage:(id <ECMessage>)arg1;
- (void)setSourceRemoteID:(NSString *)arg1;
- (<ECMessage> *)sourceMessage;
- (NSString *)sourceRemoteID;

@end

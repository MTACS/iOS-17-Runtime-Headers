
@protocol EMBaseMessageListItemBuilder <EMMutableMessageListItem>

@required

- (NSArray *)bccList;
- (<ECEmailAddressConvertible> *)senderAddress;
- (void)setBccList:(NSArray *)arg1;
- (void)setSenderAddress:(id <ECEmailAddressConvertible>)arg1;

@end

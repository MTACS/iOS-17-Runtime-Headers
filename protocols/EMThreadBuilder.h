
@protocol EMThreadBuilder <EMMutableMessageListItem>

@required

- (<EMMailboxTypeResolver> *)mailboxTypeResolver;
- (void)setMailboxTypeResolver:(id <EMMailboxTypeResolver>)arg1;

@end


@protocol MessageListCellDisclosureDelegate <NSObject>

@required

- (void)didSelectDisclosureButtonForMessageListItem:(id <EMMessageListItem>)arg1 disclosureEnabled:(bool)arg2;

@end

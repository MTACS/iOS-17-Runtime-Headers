
@protocol AAUIAccountContactSelectorDelegate <NSObject>

@required

- (void)accountContactSelector:(AAUIAccountContactSelectorViewController *)arg1 didSelectContact:(AALocalContactInfo *)arg2;

@optional

- (void)accountContactSelectorShowOtherContacts:(AAUIAccountContactSelectorViewController *)arg1;

@end


@protocol CNAvatarViewController <NSObject, CNUIObjectViewController>

@required

- (NSArray *)contacts;
- (<CNKeyDescriptor> *)descriptorForRequiredKeys;
- (id)initWithSettings:(CNAvatarViewControllerSettings *)arg1;
- (void)setContacts:(NSArray *)arg1;

@end

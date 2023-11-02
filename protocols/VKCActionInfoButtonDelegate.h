
@protocol VKCActionInfoButtonDelegate <NSObject>

@optional

- (void)actionInfoButtonDidActivatePrimaryAction:(VKCActionInfoButton *)arg1;
- (void)willDisplayMenuForActionInfoButton:(VKCActionInfoButton *)arg1;
- (void)willHideMenuForActionInfoButton:(VKCActionInfoButton *)arg1;

@end

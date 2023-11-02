
@protocol CNMeCardSharingEnabledDelegate <NSObject>

@required

- (void)sharingEnabledDataSource:(CNMeCardSharingEnabledDataSource *)arg1 didChangeEnabledState:(bool)arg2;

@end

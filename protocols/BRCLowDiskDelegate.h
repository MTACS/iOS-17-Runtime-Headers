
@protocol BRCLowDiskDelegate <NSObject>

@required

- (void)lowDiskStatusChangedForDevice:(int)arg1 hasEnoughSpace:(bool)arg2;

@end

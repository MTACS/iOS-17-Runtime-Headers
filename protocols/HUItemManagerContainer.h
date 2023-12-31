
@protocol HUItemManagerContainer <NSObject>

@required

+ (unsigned long long)updateMode;

- (HFItemManager *)itemManager;
- (void)recursivelyDisableItemUpdates:(bool)arg1 withReason:(NSString *)arg2;

@end

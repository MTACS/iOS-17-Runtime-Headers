
@protocol SBLockScreenBehaviorSuppressing <NSObject>

@required

- (bool)suppressesBanners;
- (bool)suppressesControlCenter;
- (bool)suppressesScreenshots;

@end

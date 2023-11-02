
@interface UIStatusBarHoverRegionAction : BSAction

@property (nonatomic, readonly) long long region;

- (long long)UIActionType;
- (id)initWithRegion:(long long)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (long long)region;

@end

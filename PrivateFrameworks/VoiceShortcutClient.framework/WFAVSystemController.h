
@interface WFAVSystemController : NSObject

@property (nonatomic, readonly) bool silentModeActive;

- (id)avSystemController;
- (bool)setSilentMode:(bool)arg1 reason:(id)arg2 client:(long long)arg3;
- (bool)silentModeActive;
- (bool)toggleSilentModeWithReason:(id)arg1 client:(long long)arg2;

@end

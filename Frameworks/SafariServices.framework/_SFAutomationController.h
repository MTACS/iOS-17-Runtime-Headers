
@interface _SFAutomationController : NSObject

@property (nonatomic) bool allowsRemoteAutomation;

+ (bool)isSystemRemoteAutomationEnabled;

- (bool)allowsRemoteAutomation;
- (void)setAllowsRemoteAutomation:(bool)arg1;

@end

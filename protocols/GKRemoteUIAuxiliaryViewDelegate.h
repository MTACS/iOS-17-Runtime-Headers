
@protocol GKRemoteUIAuxiliaryViewDelegate <NSObject>

@optional

- (void)auxiliaryView:(UIView *)arg1 pressedButton:(NSString *)arg2 attributes:(NSDictionary *)arg3;
- (void)auxiliaryView:(UIView *)arg1 pressedLink:(NSString *)arg2 attributes:(NSDictionary *)arg3;

@end

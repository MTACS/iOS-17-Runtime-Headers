
@interface UIPPTRequestAction : BSAction

- (long long)UIActionType;
- (id)initWithDesiredOrientation:(long long)arg1;
- (long long)orientationRequested;
- (bool)shouldChangeOrientation;

@end

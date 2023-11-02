
@protocol HAL_DSP_HostCallbacks <NSObject>

@required

- (void)notifyClientsOfCustomPropertyChange:(struct AudioObjectPropertyAddress { unsigned int x1; unsigned int x2; unsigned int x3; })arg1;
- (void)requestMutation:(NSDictionary *)arg1;

@end

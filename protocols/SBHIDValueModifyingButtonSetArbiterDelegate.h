
@protocol SBHIDValueModifyingButtonSetArbiterDelegate <NSObject>

@required

- (void)buttonSetArbiter:(SBHIDValueModifyingButtonSetArbiter *)arg1 performActionForButtonPage:(unsigned short)arg2 usage:(unsigned short)arg3;

@optional

- (void)buttonSetArbiterDidReset:(SBHIDValueModifyingButtonSetArbiter *)arg1;

@end

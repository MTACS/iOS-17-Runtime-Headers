
@protocol HFPrimaryStateWriter <NSObject, HFToggleableControlItem>

@required

- (NAFuture *)writePrimaryState:(long long)arg1;

@end

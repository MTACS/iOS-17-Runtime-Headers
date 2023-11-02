
@interface GameCenterUI.GKMultiplayerStepperController : NSObject {
    void maximumValue;
    void minimumValue;
    void value;
    void valueChangedHandler;
}

- (void).cxx_destruct;
- (id)init;
- (id)initWithMinimumValue:(long long)arg1 maximumValue:(long long)arg2 initialValue:(long long)arg3 valueChangedHandler:(id /* block */)arg4;

@end

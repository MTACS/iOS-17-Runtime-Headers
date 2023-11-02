
@interface _UIFocusSoundGenerator : NSObject {
    <_UIFocusSoundPlayer> * _focusSoundPlayer;
}

@property (nonatomic, readonly) <_UIFocusSoundPlayer> *focusSoundPlayer;

+ (void)_uiktest_unregisterURLForIdentifier:(id)arg1;
+ (id)defaultGenerator;
+ (void)registerURL:(id)arg1 forIdentifier:(id)arg2;

- (void).cxx_destruct;
- (id)focusSoundPlayer;
- (id)initWithFocusSoundPlayer:(id)arg1;
- (void)playSoundForFocusUpdateInContext:(id)arg1;

@end
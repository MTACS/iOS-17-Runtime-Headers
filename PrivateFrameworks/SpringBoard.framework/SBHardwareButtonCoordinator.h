
@interface SBHardwareButtonCoordinator : NSObject {
    NSCountedSet * _activeButtonIdentifiers;
    NSDictionary * _buttonIdentifierToButtonInstance;
    NSDictionary * _buttonIdentifierToSuppressedButtonIdentifiers;
    NSCountedSet * _canceledButtonIdentifiers;
    NSDictionary * _suppressedButtonIdentifierToSuppressorButtonIdentifiers;
    int  _sysdiagnoseDidBeginNotificationToken;
}

- (void).cxx_destruct;
- (id)assertButtonIsActive:(id)arg1;
- (bool)buttonShouldStart:(id)arg1;
- (id)cancelHardwareButtons:(id)arg1 fromButton:(id)arg2;
- (void)dealloc;

@end

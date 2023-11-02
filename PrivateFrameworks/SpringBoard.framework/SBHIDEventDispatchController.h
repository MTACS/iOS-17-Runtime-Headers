
@interface SBHIDEventDispatchController : NSObject {
    <BSInvalidatable> * _dispatchingAssertion;
    <BSInvalidatable> * _dispatchingAssertionForVoiceCommand;
    <BSInvalidatable> * _keyCommandDispatchingAssertion;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;

@end

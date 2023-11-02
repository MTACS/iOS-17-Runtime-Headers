
@interface SBAuthenticationFeedback : NSObject {
    bool  _jiggleLock;
    unsigned long long  _result;
    bool  _showPasscode;
    bool  _vibrate;
    unsigned long long  result;
}

@property (nonatomic, readonly) bool hintFailureText;
@property (nonatomic, readonly) bool jiggleLock;
@property (nonatomic, readonly) unsigned long long result;
@property (nonatomic, readonly) bool showPasscode;
@property (nonatomic, readonly) bool vibrate;

- (id)description;
- (unsigned long long)hash;
- (bool)hintFailureText;
- (id)initForFailureShowingPasscode:(bool)arg1;
- (id)initForFailureWithFailureSettings:(id)arg1;
- (id)initForSuccess;
- (bool)isEqual:(id)arg1;
- (bool)jiggleLock;
- (unsigned long long)result;
- (bool)showPasscode;
- (bool)vibrate;

@end


@interface UniqueAnimationKeyCounter : NSObject {
    unsigned long long  _finishedUsingKeys;
    unsigned long long  _nextAnimationKey;
}

@property (getter=isFinishedUsingAllKeys, nonatomic, readonly) bool finishedUsingAllKeys;

- (void)didFinishUsingAnimationKey;
- (bool)isFinishedUsingAllKeys;
- (unsigned long long)nextAnimationKey;

@end

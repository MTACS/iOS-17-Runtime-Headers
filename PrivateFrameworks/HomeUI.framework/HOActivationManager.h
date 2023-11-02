
@interface HOActivationManager : NSObject {
    NSDate * _lastEnteredForegroundDate;
}

@property (nonatomic, retain) NSDate *lastEnteredForegroundDate;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)_enteredForeground:(id)arg1;
- (id)init;
- (id)lastEnteredForegroundDate;
- (void)setLastEnteredForegroundDate:(id)arg1;

@end

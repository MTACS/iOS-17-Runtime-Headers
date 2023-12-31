
@interface VSErrorRecoveryOption : NSObject {
    id /* block */  _attemptHandler;
    bool  _destructive;
    NSString * _localizedAlertButtonTitle;
}

@property (nonatomic, copy) id /* block */ attemptHandler;
@property (getter=isDestructive, nonatomic) bool destructive;
@property (nonatomic, copy) NSString *localizedAlertButtonTitle;

- (void).cxx_destruct;
- (id /* block */)attemptHandler;
- (bool)isDestructive;
- (id)localizedAlertButtonTitle;
- (void)setAttemptHandler:(id /* block */)arg1;
- (void)setDestructive:(bool)arg1;
- (void)setLocalizedAlertButtonTitle:(id)arg1;

@end

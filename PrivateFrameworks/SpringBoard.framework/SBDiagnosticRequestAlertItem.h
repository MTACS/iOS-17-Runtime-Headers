
@interface SBDiagnosticRequestAlertItem : SBAlertItem {
    id /* block */  _completionBlock;
    NSString * _message;
    NSArray * _radarAttachments;
    long long  _radarClassification;
    NSString * _radarDescription;
    long long  _radarReproducibility;
    NSString * _radarTitle;
    NSString * _title;
}

@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, copy) NSArray *radarAttachments;
@property (nonatomic) long long radarClassification;
@property (nonatomic, copy) NSString *radarDescription;
@property (nonatomic) long long radarReproducibility;
@property (nonatomic, copy) NSString *radarTitle;
@property (nonatomic, copy) NSString *title;

- (void).cxx_destruct;
- (void)_fileRadar;
- (id)_noButtonTitle;
- (id)_stringFromClassification:(long long)arg1;
- (id)_stringFromReproducibility:(long long)arg1;
- (id)_yesButtonTitle;
- (id /* block */)completionBlock;
- (void)configure:(bool)arg1 requirePasscodeForActions:(bool)arg2;
- (id)message;
- (void)performUnlockAction;
- (id)radarAttachments;
- (long long)radarClassification;
- (id)radarDescription;
- (long long)radarReproducibility;
- (id)radarTitle;
- (bool)reappearsAfterLock;
- (bool)reappearsAfterUnlock;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setMessage:(id)arg1;
- (void)setRadarAttachments:(id)arg1;
- (void)setRadarClassification:(long long)arg1;
- (void)setRadarDescription:(id)arg1;
- (void)setRadarReproducibility:(long long)arg1;
- (void)setRadarTitle:(id)arg1;
- (void)setTitle:(id)arg1;
- (bool)shouldShowInLockScreen;
- (id)title;

@end

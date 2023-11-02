
@interface _SBUISystemApertureAlertingAssertion : SBUISystemApertureAssertion <SBUISystemApertureAutomaticallyInvalidatable> {
    SBUISystemApertureAlertingAction * _alertingAction;
    bool  _automaticallyInvalidatable;
    SBUISystemApertureElementSource * _elementSource;
}

@property (nonatomic, retain) SBUISystemApertureAlertingAction *alertingAction;
@property (getter=isAutomaticallyInvalidatable, nonatomic) bool automaticallyInvalidatable;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) SBUISystemApertureElementSource *elementSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (getter=isValid, nonatomic, readonly) bool valid;

- (void).cxx_destruct;
- (id)_descriptionConstituents;
- (void)addInvalidationBlock:(id /* block */)arg1;
- (id)alertingAction;
- (id)elementSource;
- (id)initWithElementSource:(id)arg1;
- (bool)isAutomaticallyInvalidatable;
- (void)resetAutomaticInvalidationTimer;
- (void)setAlertingAction:(id)arg1;
- (void)setAutomaticallyInvalidatable:(bool)arg1;
- (void)setElementSource:(id)arg1;

@end

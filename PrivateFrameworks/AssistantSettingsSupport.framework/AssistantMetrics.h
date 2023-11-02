
@interface AssistantMetrics : NSObject {
    PETEventProperty * _confirmedTrueFalseProperty;
    PETScalarEventTracker * _detailToggleFoundInAppsTracker;
    PETScalarEventTracker * _detailToggleSearchTracker;
    PETScalarEventTracker * _detailToggleSiriKitTracker;
    PETEventProperty * _detailToggleTrackerNameProperty;
    PETScalarEventTracker * _detailVisitFoundInAppsTracker;
    PETScalarEventTracker * _detailVisitTracker;
    PETScalarEventTracker * _disableSiriTracker;
    PETScalarEventTracker * _enableSiriTracker;
    PETEventProperty * _foundInAppsProperty;
    PETEventProperty * _onOffProperty;
    PETEventProperty * _siriSourceProperty;
    PETScalarEventTracker * _startEnrollmentTracker;
    PETScalarEventTracker * _toggleTracker;
    PETEventProperty * _toggleTrackerNameProperty;
    PETScalarEventTracker * _visitTracker;
}

+ (void)didDetailToggle:(id)arg1 bundleId:(id)arg2 on:(bool)arg3;
+ (void)didDetailVisit:(id)arg1;
+ (void)didDisableSiriConfirmed:(bool)arg1 source:(id)arg2;
+ (void)didEnableSiriConfirmed:(bool)arg1 source:(id)arg2;
+ (void)didStartEnrollment:(bool)arg1;
+ (void)didToggle:(id)arg1 on:(bool)arg2;
+ (void)didVisit;
+ (id)sharedMetrics;

- (void).cxx_destruct;
- (id)__confirmedTrueFalseProperty;
- (id)__detailToggleFoundInAppsTracker;
- (id)__detailToggleSearchTracker;
- (id)__detailToggleSiriKitTracker;
- (id)__detailToggleTrackerNameProperty;
- (id)__detailVisitFoundInAppsTracker;
- (id)__detailVisitTracker;
- (id)__disableSiriTracker;
- (id)__enableSiriTracker;
- (id)__foundInAppsProperty;
- (id)__onOffProperty;
- (id)__siriSourceProperty;
- (id)__startEnrollmentTracker;
- (id)__toggleTracker;
- (id)__toggleTrackerNameProperty;
- (id)__visitTracker;
- (void)logDetailToggle:(id)arg1 bundleId:(id)arg2 on:(bool)arg3;
- (void)logDetailVisit:(id)arg1;
- (void)logDisableSiriConfirmed:(bool)arg1 source:(id)arg2;
- (void)logEnableSiriConfirmed:(bool)arg1 source:(id)arg2;
- (void)logStartEnrollment:(bool)arg1;
- (void)logToggle:(id)arg1 on:(bool)arg2;
- (void)logVisit;

@end

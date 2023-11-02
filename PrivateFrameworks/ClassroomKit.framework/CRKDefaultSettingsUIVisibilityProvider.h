
@interface CRKDefaultSettingsUIVisibilityProvider : NSObject <CRKCourseEnrollmentControllerObserver, CRKSettingsUIVisibilityProvider> {
    NSString * _paneStatus;
    bool  _settingsUIVisible;
    CRKCourseEnrollmentController * mEnrollmentController;
    CRKUserDefaultsObject * mUIPreviouslyVisible;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *paneStatus;
@property bool settingsUIVisible;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)connectToDaemon;
- (void)enrollmentControllerDidUpdateActiveCourses:(id)arg1;
- (void)enrollmentControllerDidUpdateSettingsUIVisibility:(id)arg1;
- (id)init;
- (bool)isAnyCourseActiveInEnrollmentController:(id)arg1;
- (void)migrateOldUserDefaultsValues;
- (id)paneStatus;
- (void)setPaneStatus:(id)arg1;
- (void)setSettingsUIVisible:(bool)arg1;
- (bool)settingsUIVisible;
- (void)updatePaneStatus;
- (void)updatePreviouslyVisibleDefaultWithValue:(bool)arg1;
- (void)updateVisibilityState;

@end

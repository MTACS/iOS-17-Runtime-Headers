
@interface SBInteractionAfterWakeMetric : SBAnalyticsStateMachineEventHandler {
    double  _screenOnTimestamp;
    struct { 
        bool usedQuickActionButton; 
        bool scrolledInNotifications; 
        bool longLookedNotification; 
        bool interactedNotification; 
        bool clearedNotifications; 
        bool activatedCamera; 
        bool prewarmedCameraFalsePositive; 
        bool cameraSwipeFailed; 
        bool activatedControlCenter; 
        bool activatedSpotlight; 
        bool unlockDismissed; 
    }  _sessionInteractions;
    PETDistributionEventTracker * _sessionTimeTracker;
    bool  _shouldReport;
    PETGoalConversionEventTracker * _unlockTracker;
}

- (void).cxx_destruct;
- (bool)_determineIfShouldReport;
- (void)_trackSessionWithDuration:(double)arg1;
- (void)_trackUnlockConversion:(bool)arg1;
- (void)_trackUnlockOpportunity;
- (id)init;

@end


@interface DockKitCore.ObjectTracker : _TtCs12_SwiftObject {
    void ADJUST_WEIGHT_THRESHHOLD;
    void BOUNCE_TIMEOUT;
    void IGNORE_SECONDARY_TIMEOUT;
    void MAX_HIST;
    void MAX_STATEDUMP_HIST;
    void PRIMARY_CENTER_OFFSET;
    void REMEMBER_SECONDARY_TIMEOUT;
    void SECONDAY_LOOKAWAY_TIMEOUT;
    void SPEAK_DEBUG_CONDITIONS;
    void _selectedBodyIds;
    void _selectedFaceIds;
    void _selectionSemaphore;
    void adjustedCalibration;
    void bounceDetectionEnabled;
    void bounceDetector;
    void bytesLogged;
    void calibratingCenter;
    void cameraCalibration;
    void cameraCalibrationSemaphore;
    void cameraPitchMotionStatus;
    void cameraYawMotionStatus;
    void configSemaphore;
    void controlSemaphore;
    void currentObjectData;
    void currentSelectedIDs;
    void deadbandInflation;
    void deviceModelName;
    void enable3DTracking;
    void enableCalibrate;
    void enableDeadbands;
    void enablePID;
    void enablePredictiveTracking;
    void enableVURecognition;
    void forceLog;
    void fovMonitor;
    void framingEngine;
    void history;
    void historySemaphore;
    void horizontalOutOfBounds;
    void inputSummary;
    void lastBounceDate;
    void lastCommandVelocity;
    void lastFacingCameraDate;
    void lastForgetDate;
    void lastLoggedLine;
    void lastLoggedLineSemaphore;
    void lastSeenOrientation;
    void lastSeenOrientationSemaphore;
    void lastSeenSecondary;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lastSeenSecondaryStamp;
    void linesLogged;
    void logFileSemaphore;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logFileURL;
    void logHandle;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void loggingEnabled;
    void loopQueue;
    void manualRTB;
    void motion;
    void multiFaceTracker;
    void pid;
    void pitchMultiplier;
    void predTrackerPid;
    void primarySubjectWeight;
    void publishDebug;
    void rateControl;
    void rotationState;
    void rtbSmoothedPitch;
    void rtbSmoothedYaw;
    void searchDirection;
    void searchRange;
    void searchingCenter;
    void secondarySubjectWeight;
    void selectRelevantEnabled;
    void selectSubjectCallback;
    void selectSubjectOverridePosition;
    void selectSubjectSemaphore;
    void selectSubjectTimer;
    void selectSubjectTimestamp;
    void sensors;
    void smoothedPitch;
    void smoothedYaw;
    void stand;
    void startupAnimation;
    void stateHandle;
    void stateQueue;
    void stopQueue;
    void timeSinceFaceSeen;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  timeSinceStart;
    void totalScalingWeight;
    void trackAllFaces;
    void trackingEnabled;
    void trackingKnownObject;
    void trackingMetrics;
    void trackingSecondaryPitch;
    void trackingSecondaryYaw;
    void trackingSensor;
    void trackingStatusSemaphore;
    void verticalOutOfBounds;
    void yawMultiplier;
    void zoomMultiplier;
}

- (id)dumpFullHistoryToLogFileWithDirectory:(id)arg1;
- (id)getConfig;
- (id)getStatistics;
- (bool)setConfigWithKey:(id)arg1 value:(id)arg2;

@end
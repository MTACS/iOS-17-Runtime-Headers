
@interface DockKitCore.TrackerConfig : NSObject {
    void CAMERA_STATIONARY_SPEED;
    void MAX_FACE_SEARCH_TIME;
    void MIN_TIME_TO_CLEAR_TRACKING_SELECTION;
    void NOT_TRACKING;
    void OVERLAP_THRESHOLD;
    void PITCH_MULTIPLIER;
    void RETURN_TO_CENTER_MAX_DURATION;
    void RETURN_TO_CENTER_MIN_TIME;
    void SUBJECT_POS_PREDICTION_HORIZON;
    void TRACKING_LEFT;
    void TRACKING_RIGHT;
    void YAW_MULTIPLIER;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void nightStandMode;
    void pidConfig;
    void pitchVelocityMultiplier;
    void predPidConfig;
    void useDeadbands;
    void usePIDParamsFromARDF;
    void yawVelocityMultiplier;
}

- (void).cxx_destruct;
- (id)init;

@end

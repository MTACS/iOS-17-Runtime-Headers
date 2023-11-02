
@interface DockKitCore.FramingEngine : NSObject {
    void MIN_TIME_BETWEEN_FRAMING;
    void MIN_TIME_BETWEEN_FRAMING_WHITEBOARDMODE;
    void REFRAME_CENTER_TIMEOUT;
    void REFRAME_CENTER_TIMEOUT_MULTI;
    void REFRAME_CENTER_TIMEOUT_SINGLE_ESCAPE;
    void REFRAME_SIDE_TIMEOUT;
    void SMART_FRAMING_ACCELERATION;
    void SMART_FRAMING_HZ;
    void _horizontalExtremes;
    void _horizontalMargins;
    void _horizontalMargins_singleSubject;
    void _verticalExtremes;
    void _verticalMargins;
    void configSemaphore;
    void currentHorizontalFraming;
    void currentMinCutTime;
    void currentObservationType;
    void currentOrientation;
    void currentVerticalFraming;
    void deadband;
    void deadbandSemaphore;
    void farLimits;
    void framingChangeSemaphore;
    void framingMode;
    void framingQueue;
    void framingTimer;
    void heightInflation;
    void horizontalExtremes;
    void horizontalMargins;
    void horizontalMarginsSingleSubject;
    void lastCloseToCamera;
    void lastNumTracks;
    void lastReframeDate;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void midLimits;
    void minDeltaToFrame;
    void minROISize;
    void nearLimits;
    void nearThreshold;
    void parent;
    void roi;
    void smartFramingEnabled;
    void targetDeadband;
    void trackingMetrics;
    void verticalExtremes;
    void verticalMargins;
    void widthInflation;
}

- (void).cxx_destruct;
- (void)dealloc;
- (id)init;

@end

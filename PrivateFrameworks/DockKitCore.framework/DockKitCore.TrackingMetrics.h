
@interface DockKitCore.TrackingMetrics : _TtCs12_SwiftObject {
    void activeCamera;
    void activeFraming;
    void activeOrientation;
    void activeTrackingCount;
    void appId;
    void bodyInFrame;
    void currentObjectData;
    void endTime;
    void faceInFrame;
    void facePositionHistory;
    void facePositionHistorySynced;
    void horizontalDynamicReframeCount;
    void inactiveTrackingCount;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lastPrintTime;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void nothingInFrame;
    void objectInFrame;
    void primarySubjectLostCount;
    void printPeriod;
    void rawVelocityHistory;
    void secondarySubjectLostCount;
    void smoothedVelocityHistory;
    void standOrientation;
    void startTime;
    void timeSinceFaceSeen;
    void trackingMode;
    void verticalDynamicReframeCount;
}

@end

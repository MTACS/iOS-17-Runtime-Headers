
@interface DockKitCore.FilterMultiFaceTracker : _TtCs12_SwiftObject {
    void adjustedCameraFOV;
    void cameraFOV;
    void debugMode;
    void falseBodyDiscardHorizontalLimit;
    void falseFaceDiscardHorizontalLimit;
    void imu;
    void lastDetectionStamp;
    void lastTrackerId;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void maxAssociationThreshold;
    void motionModel;
    void nrTracks;
    void penaltyFaceAlreadyMatched;
    void primaryTrackId;
    void rewardCorrectId;
    void rewardPrimaryId;
    void timeoutNonPrimary;
    void timeoutPrimary;
    void trackSemaphore;
    void trackedBodiesDiscard;
    void trackedBodyIdCounts;
    void trackedBodyIdconfidences;
    void trackedFaceIdConfidences;
    void trackedFaceIdCounts;
    void trackedFacesDiscard;
    void tracks;
}

@end

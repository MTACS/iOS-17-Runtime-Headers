
@interface CoreOC.CaptureManager : _TtCs12_SwiftObject {
    void addToPoseGraphEnabled;
    void allowToTakeNextShot;
    void baselineThreshold;
    void cameraControl;
    void cancelShotRequest;
    void captureRequestWaitTime;
    void currentVideoFrameDepthWarpMotionScore;
    void depthWarpBuffer;
    void depthWarpCacheInterval;
    void depthWarpMotionBlurThreshold;
    void depthWarpUpdateInterval;
    void enablePostCaptureCheck;
    void factors;
    void focusPixelBlurScore;
    void focusPixelBlurScoreThreshold;
    void geoDebugData;
    void imuTimestampAtCapture;
    void lastVideoFrameMetadata;
    void maxJasperDepth;
    void minJasperDepth;
    void minJasperPointCount;
    void motionManager;
    void nextShotWaitTimeIfAccepted;
    void nextShotWaitTimeIfNotAccepted;
    void numInvalidPose;
    void numShotsAttempted;
    void numShotsCaptured;
    void objectInFOVRatioThreshold;
    void pointOfInterest;
    void poseGraph;
    void postCheckPassedDepthWarpMotionScore;
    void postCheckPassedIMUMaxAngularSpeed;
    void preCheckPassedDepthWarpMotionScore;
    void preCheckPassedIMUMaxAngularSpeed;
    void preCheckPassedReferenceTimestamp;
    void referenceTime;
    void rollingShutterSkewUpperBound;
    void sphereAngleConfusionIntervalLowerBound;
    void sphereAngleConfusionIntervalUpperBound;
    void workingQueue;
}

@end

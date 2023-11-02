
@interface DockKitCore.FilterFaceTracker : NSObject <NSCopying> {
    void adjustedCameraFOV;
    void averageSubjectBuffer;
    void averageSubjectBufferLong;
    void cameraFOV;
    void closeBodyWidth;
    void defaultFaceBox;
    void depthConstant;
    void faceYawThreshold;
    void falseBodyIOUThreshold;
    void falseFaceIOUThreshold;
    void filter;
    void humanHeight;
    void id;
    void idSwitchTimeout;
    void imu;
    void isActive;
    void ispBodyId;
    void ispFaceId;
    void lastBodyRect;
    void lastFaceRect;
    void lastFaceRectInBody;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  lastIdSwitchTime;
    void lastPitch;
    void lastYawState;
    void latestBodyStamp;
    void latestFaceStamp;
    void latestObjectStamp;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  logger;
    void maxVAzimuth;
    void maxVElevation;
    void minBodyPrintConfidence;
    void minPredictionPitch;
    void motionModel;
    void objectId;
    void personId;
    void pitchPredictionHorizon;
    void pitchSearchMargin;
    void standHeight;
    void stationaryPosThreshold;
    void stationarySpeedThreshold;
    void timeout;
    void topOfHeadScale;
    void topOfHeadThreshold;
    void type;
    void uncertaintyRangeMultiplier;
    void walkingSpeedThreshold;
    void yawPredictionHorizon;
    void yawSearchMargin;
}

- (void).cxx_destruct;
- (id)copyWithZone:(void*)arg1;
- (id)init;

@end

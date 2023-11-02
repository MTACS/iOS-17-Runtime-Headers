
@interface DockKitCore.FilterBase : _TtCs12_SwiftObject {
    void accelerationGains_;
    void accelerationLimits_;
    void controlAcceleration_;
    void controlIndex;
    void controlTimeout_;
    void controlUpdateVector_;
    void covarianceEpsilon;
    void decelerationGains_;
    void decelerationLimits_;
    void estimateErrorCovariance;
    void filterState_;
    void identity_;
    void initialized;
    void isSaturated;
    void lastMeasurementTime;
    void latestControlTime_;
    void latestControl_;
    void latestCorrectedState;
    void latestCorrectionTime;
    void maxCovariance;
    void motionModel_;
    void predictedState;
    void processNoiseCovariance;
    void state;
    void stateIndex;
    void stateSemaphore;
    void transferFunction;
    void transferFunctionJacobian;
}

@end

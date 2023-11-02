
@interface DockKitCore.PIDController : NSObject {
    void clampDerivativeThres;
    void clampIntegralThres;
    void clampIntegralZero;
    void dError;
    void derivativeErrorSmoothing;
    void iError;
    void integralLimit;
    void kd;
    void ki;
    void kp;
    void kv;
    void pError;
    void previousError;
    void rateControl;
    void smoothedError;
    void stateSize;
}

- (void).cxx_destruct;
- (id)init;

@end

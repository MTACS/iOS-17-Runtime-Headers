
@interface KalmanFilter : NSObject {
    bool  _isFirstObservation;
    KalmanFilterPrivate * _kalmanFilterHeight;
    KalmanFilterPrivate * _kalmanFilterWidth;
    KalmanFilterPrivate * _kalmanFilterX;
    KalmanFilterPrivate * _kalmanFilterY;
    int  _observationIdentifier;
}

@property (nonatomic, readonly) int oid;

- (void).cxx_destruct;
- (void)addObservation:(id)arg1;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })estimatedBounds;
- (id)init;
- (int)oid;

@end

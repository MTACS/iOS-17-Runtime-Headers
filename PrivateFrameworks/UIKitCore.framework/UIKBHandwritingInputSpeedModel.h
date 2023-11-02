
@interface UIKBHandwritingInputSpeedModel : NSObject {
    bool  _autoConfirmationEnabled;
    bool  _duringStroke;
    struct CGRect { 
        struct CGPoint { 
            double x; 
            double y; 
        } origin; 
        struct CGSize { 
            double width; 
            double height; 
        } size; 
    }  _handwritingFrame;
    double  _lastStrokeTimeStamp;
    struct CGPoint { 
        double x; 
        double y; 
    }  _lastTouchLocation;
    double  _lastTouchTimeStamp;
    double  _maxTimeout;
    double  _minTimeout;
    NSMutableArray * _pointsCurrentStroke;
    NSMutableArray * _recordedIntervals;
    NSMutableArray * _recordedSpeeds;
}

@property (nonatomic, readonly) bool autoConfirmationEnabled;
@property (nonatomic) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } handwritingFrame;
@property (nonatomic, readonly) double maxTimeout;
@property (nonatomic, readonly) double minTimeout;

- (void).cxx_destruct;
- (void)addPoint:(struct CGPoint { double x1; double x2; })arg1 timestamp:(double)arg2;
- (bool)autoConfirmationEnabled;
- (void)beginStroke;
- (void)endCharacter;
- (void)endStroke;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })handwritingFrame;
- (id)init;
- (double)maxTimeout;
- (double)minTimeout;
- (void)setHandwritingFrame:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1;
- (double)smoothValueFromArray:(id)arg1;
- (double)speedForCurrentStroke;
- (double)timeoutForNextPage;
- (void)updatePreferences;

@end

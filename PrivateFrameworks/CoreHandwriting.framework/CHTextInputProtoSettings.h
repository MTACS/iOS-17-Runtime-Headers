
@interface CHTextInputProtoSettings : NSObject {
    double  _autoLineBreakAreaWidthFactor;
    double  _autoLineBreakDualBreakVerticalDistance;
    bool  _autoLineBreakEnabled;
    double  _autoLineBreakMinVerticalDistance;
    bool  _autoLineBreakRequireWeakCursor;
    bool  _lineBreakVerticalBarGestureEnabled;
    bool  _lineBreakVerticalBarUpToDelete;
    bool  _preventLeftoverCharsInSubwordGestures;
    double  _subwordGestureEndingSpeedRange;
    double  _subwordGestureSpeedThreshold;
}

@property (nonatomic, readonly) double autoLineBreakAreaWidthFactor;
@property (nonatomic, readonly) double autoLineBreakDualBreakVerticalDistance;
@property (nonatomic, readonly) bool autoLineBreakEnabled;
@property (nonatomic, readonly) double autoLineBreakMinVerticalDistance;
@property (nonatomic, readonly) bool autoLineBreakRequireWeakCursor;
@property (nonatomic, readonly) bool isScribbleActive;
@property (nonatomic, readonly) bool lineBreakVerticalBarGestureEnabled;
@property (nonatomic, readonly) bool lineBreakVerticalBarUpToDelete;
@property (nonatomic, readonly) bool preventLeftoverCharsInSubwordGestures;
@property (nonatomic, readonly) double subwordGestureEndingSpeedRange;
@property (nonatomic, readonly) double subwordGestureSpeedThreshold;

+ (id)sharedSettings;

- (double)autoLineBreakAreaWidthFactor;
- (double)autoLineBreakDualBreakVerticalDistance;
- (bool)autoLineBreakEnabled;
- (double)autoLineBreakMinVerticalDistance;
- (bool)autoLineBreakRequireWeakCursor;
- (bool)isScribbleActive;
- (bool)lineBreakVerticalBarGestureEnabled;
- (bool)lineBreakVerticalBarUpToDelete;
- (bool)preventLeftoverCharsInSubwordGestures;
- (double)subwordGestureEndingSpeedRange;
- (double)subwordGestureSpeedThreshold;

@end

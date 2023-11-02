
@interface RCPPointerTrackingChildEventStream : NSObject <RCPChildEventStream> {
    struct CGPoint { 
        double x; 
        double y; 
    }  _currentPointerLocation;
    double  _currentTimeOffset;
    RCPEventEnvironment * _environment;
    double  _frequency;
    CAMediaTimingFunction * _pointerCurveFunction;
    NSMutableArray * _processingEventBuffer;
    RCPEventSenderProperties * _senderProperties;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } currentPointerLocation;
@property (nonatomic) double currentTimeOffset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) RCPEventEnvironment *environment;
@property (nonatomic) double frequency;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CAMediaTimingFunction *pointerCurveFunction;
@property (nonatomic, retain) RCPEventSenderProperties *senderProperties;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addIOHIDEventToProcessingBuffer:(struct __IOHIDEvent { }*)arg1;
- (unsigned long long)_currentMachTime;
- (struct CGVector { double x1; double x2; })_deltaToPoint:(struct CGPoint { double x1; double x2; })arg1;
- (void)advanceTime:(double)arg1;
- (long long)currentInterfaceOrientation;
- (struct CGPoint { double x1; double x2; })currentPointerLocation;
- (double)currentTimeOffset;
- (id)environment;
- (id)finalizeEventStream;
- (double)frequency;
- (id)initWithCurrentPointerLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)moveByDelta:(struct CGVector { double x1; double x2; })arg1 duration:(double)arg2;
- (void)movePointerByDelta:(struct CGVector { double x1; double x2; })arg1;
- (void)moveToPoint:(struct CGPoint { double x1; double x2; })arg1 duration:(double)arg2;
- (struct CGPoint { double x1; double x2; })orientedDestinationPoint:(struct CGPoint { double x1; double x2; })arg1;
- (struct CGPoint { double x1; double x2; })orientedNormalPoint:(struct CGPoint { double x1; double x2; })arg1;
- (id)pointerCurveFunction;
- (id)senderProperties;
- (void)setCurrentPointerLocation:(struct CGPoint { double x1; double x2; })arg1;
- (void)setCurrentTimeOffset:(double)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setFrequency:(double)arg1;
- (void)setPointerCurveFunction:(id)arg1;
- (void)setSenderProperties:(id)arg1;

@end

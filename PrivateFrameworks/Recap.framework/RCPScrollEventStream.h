
@interface RCPScrollEventStream : NSObject <RCPChildEventStream> {
    RCPEvent * _cachedFirstEvent;
    double  _currentTimeOffset;
    double  _deltaToPixelsScaleFactor;
    RCPEventEnvironment * _environment;
    NSMutableArray * _events;
    double  _frequency;
    CAMediaTimingFunction * _pointerCurveFunction;
    unsigned int  _scrollOptions;
    RCPEventSenderProperties * _senderProperties;
}

@property (nonatomic) double currentTimeOffset;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double deltaToPixelsScaleFactor;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) RCPEventEnvironment *environment;
@property (nonatomic) double frequency;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) CAMediaTimingFunction *pointerCurveFunction;
@property (nonatomic, retain) RCPEventSenderProperties *senderProperties;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_eventWithDelta:(struct CGVector { double x1; double x2; })arg1 phase:(unsigned short)arg2;
- (void)_updateAmplitudeBy:(struct CGVector { double x1; double x2; })arg1;
- (void)advanceByDelta:(struct CGVector { double x1; double x2; })arg1 duration:(double)arg2;
- (void)advanceTime:(double)arg1;
- (double)currentTimeOffset;
- (double)deltaToPixelsScaleFactor;
- (id)environment;
- (id)finalizeEventStream;
- (double)frequency;
- (id)init;
- (id)pointerCurveFunction;
- (id)senderProperties;
- (void)setCurrentTimeOffset:(double)arg1;
- (void)setDeltaToPixelsScaleFactor:(double)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setFrequency:(double)arg1;
- (void)setPointerCurveFunction:(id)arg1;
- (void)setSenderProperties:(id)arg1;

@end

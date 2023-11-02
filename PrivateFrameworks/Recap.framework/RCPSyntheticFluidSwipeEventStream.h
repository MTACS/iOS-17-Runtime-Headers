
@interface RCPSyntheticFluidSwipeEventStream : NSObject <RCPChildEventStream, RCPProgressEventStreamComposer> {
    double  _currentTimeOffset;
    RCPEventEnvironment * _environment;
    unsigned int  _eventType;
    unsigned short  _flavor;
    double  _frequency;
    bool  _hasCreatedFirstEvent;
    unsigned short  _motion;
    NSMutableArray * _processingEventBuffer;
    double  _progress;
    RCPEventSenderProperties * _senderProperties;
}

@property (nonatomic) double currentTimeOffset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) RCPEventEnvironment *environment;
@property (nonatomic) double frequency;
@property (readonly) unsigned long long hash;
@property (nonatomic) double progress;
@property (nonatomic, retain) RCPEventSenderProperties *senderProperties;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (unsigned long long)_currentMachTime;
- (void)addToBuffer:(struct __IOHIDEvent { }*)arg1;
- (void)advanceProgressByDelta:(double)arg1 duration:(double)arg2;
- (void)advanceTime:(double)arg1;
- (double)currentTimeOffset;
- (id)environment;
- (id)finalizeEventStream;
- (double)frequency;
- (id)initWithEventType:(unsigned int)arg1 flavor:(unsigned short)arg2 motion:(unsigned short)arg3;
- (double)progress;
- (id)senderProperties;
- (void)setCurrentTimeOffset:(double)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setFrequency:(double)arg1;
- (void)setProgress:(double)arg1;
- (void)setSenderProperties:(id)arg1;
- (void)updateProgressTo:(double)arg1;
- (void)updateProgressTo:(double)arg1 duration:(double)arg2;

@end

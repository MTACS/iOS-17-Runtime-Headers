
@interface DTMFEventHandler : NSObject {
    unsigned int  _adjustTimestamp;
    int  _currentEventState;
    unsigned int  _currentPauseCompleteTimestamp;
    unsigned int  _rtpEventDuration;
    unsigned int  currentDurationCounter;
    unsigned int  currentEndTimestamp;
    unsigned char  currentEvent;
    bool  currentEventNeedsEndBlock;
    unsigned long long  currentEventRetransmitFinalPacketCount;
    unsigned int  currentStartTimestamp;
    unsigned char  currentVolume;
    NSMutableArray * dtmfEventQueue;
    NSObject<OS_dispatch_queue> * dtmfQueue;
}

- (int)constructDTMFEventPacketWithEvent:(unsigned char)arg1 volume:(unsigned char)arg2 durationCounter:(unsigned int)arg3 dataBuffer:(char *)arg4 isEnd:(bool)arg5;
- (void)dealloc;
- (id)init;
- (bool)insertStartBlockWithEvent:(unsigned char)arg1 volume:(unsigned char)arg2 timestamp:(unsigned int)arg3;
- (bool)insertStopBlockWithEndTimestamp:(unsigned int)arg1 withPauseCompleteTimestamp:(unsigned int)arg2;
- (void)sendDTMFEvent:(id)arg1 atTimestamp:(unsigned int)arg2 withSampleRate:(unsigned int)arg3;
- (void)sendingDTMFEventWithTimeStamp:(unsigned int)arg1 interval:(unsigned int)arg2 RTPHandle:(struct tagHANDLE { int x1; }*)arg3;
- (void)setDTMFRTPEventDurationForPayload:(int)arg1;
- (bool)shouldAdjustForLastPauseCompleteTimestamp:(unsigned int*)arg1;
- (bool)shouldTransmitDTMFWithTimestamp:(unsigned int)arg1;
- (void)stopDTMFEventAtTimestamp:(unsigned int)arg1 withSampleRate:(unsigned int)arg2;

@end

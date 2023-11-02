
@interface BLSHBacklightDisplayStateMachineAbortContext : NSObject <BLSHWatchdogAbortContext> {
    unsigned long long  _abortReason;
    long long  _backlightFactor;
    bool  _displayIsOff;
    long long  _displayMode;
    bool  _hasEnsureFlipbookCurrent;
    bool  _isCABlanked;
    bool  _isFlipbookEnabled;
    long long  _lastSteadyStateDisplayMode;
    const void * _payload;
    unsigned int  _payloadSize;
    bool  _showingBlankingWindow;
    bool  _sleepImminent;
    bool  _sleepRequested;
    double  _timeInSleepImminent;
    long long  _transitioningToDisplayMode;
}

@property (nonatomic, readonly) unsigned long long abortReason;
@property (nonatomic, readonly, copy) NSString *abortReasonString;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) bool hasEnsureFlipbookCurrent;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) const void*payload;
@property (nonatomic, readonly) unsigned int payloadSize;
@property (readonly) Class superclass;
@property (nonatomic, readonly) bool wantsPanic;
@property (nonatomic, readonly) bool wantsWaitPastFireForCompletionAndTailspin;

- (void)_populatePayload;
- (unsigned long long)abortReason;
- (id)abortReasonString;
- (void)dealloc;
- (id)description;
- (bool)hasEnsureFlipbookCurrent;
- (id)initWithDisplayMode:(long long)arg1 transitioningToDisplayMode:(long long)arg2 lastSteadyStateDisplayMode:(long long)arg3 isFlipbookEnabled:(bool)arg4 showingBlankingWindow:(bool)arg5 backlightFactor:(long long)arg6 isCABlanked:(bool)arg7 displayIsOff:(bool)arg8 sleepRequested:(bool)arg9 sleepImminent:(bool)arg10 timeInSleepImminent:(double)arg11 hasEnsureFlipbookCurrent:(bool)arg12;
- (const void*)payload;
- (unsigned int)payloadSize;
- (void)setSleepImminentAbortReason;
- (bool)wantsPanic;

@end

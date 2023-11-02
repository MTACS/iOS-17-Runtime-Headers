
@interface BLSHOSInterfaceProviderAbortContext : NSObject <BLSHWatchdogAbortContext> {
    unsigned long long  _abortReason;
    float  _backlightDimmedFactor;
    bool  _caBlanked;
    bool  _caFlipbookEnabled;
    bool  _caFlipbookSuppressed;
    long long  _cbDisplayMode;
    long long  _cbFlipbookState;
    bool  _deviceSupportsAlwaysOn;
    bool  _displayStateClientSupported;
    bool  _flipbookTransparent;
    bool  _kernelSpecialMode;
    bool  _suppressionServiceActive;
    unsigned long long  _watchdogType;
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

- (unsigned long long)abortReason;
- (id)abortReasonString;
- (id)description;
- (id)initWithWatchdogType:(unsigned long long)arg1 cbDisplayMode:(long long)arg2 cbFlipbookState:(long long)arg3 suppressionServiceActive:(bool)arg4 caFlipbookEnabled:(bool)arg5 caFlipbookSuppressed:(bool)arg6 caBlanked:(bool)arg7 flipbookTransparent:(bool)arg8 deviceSupportsAlwaysOn:(bool)arg9 kernelSpecialMode:(bool)arg10 displayStateClientSupported:(bool)arg11 backlightDimmedFactor:(float)arg12;
- (void)setSleepImminentAbortReason;
- (bool)wantsPanic;
- (bool)wantsWaitPastFireForCompletionAndTailspin;

@end


@protocol BLSHWatchdogAbortContext <NSObject>

@required

- (unsigned long long)abortReason;
- (NSString *)abortReasonString;
- (void)setSleepImminentAbortReason;

@optional

- (bool)hasEnsureFlipbookCurrent;
- (const void*)payload;
- (unsigned int)payloadSize;
- (bool)wantsPanic;
- (bool)wantsWaitPastFireForCompletionAndTailspin;

@end

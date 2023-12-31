
@interface AVOutputContextDestinationChange : NSObject {
    AVOutputContextDestinationChangeInternal * _ivars;
}

@property (readonly) NSString *cancellationReason;
@property (readonly) long long status;

- (void)_setStatus:(long long)arg1 cancellationReason:(id)arg2;
- (id)cancellationReason;
- (void)changeToTerminalStatusBasedOnRouteChangeEndedReason:(struct __CFString { }*)arg1;
- (void)changeToTerminalStatusBasedOnRouteConfigUpdatedReason:(struct __CFString { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)markAsCancelledWithReason:(id)arg1;
- (void)markAsFailed;
- (void)markAsFinished;
- (void)markAsInProgress;
- (long long)status;

@end

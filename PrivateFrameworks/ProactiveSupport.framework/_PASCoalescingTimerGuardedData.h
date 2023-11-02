
@interface _PASCoalescingTimerGuardedData : NSObject {
    id  acc;
    NSObject<OS_dispatch_source> * coalescingSource;
    unsigned long long  currentCoalescingTimerId;
    unsigned long long  currentNonCoalescingTimerGeneration;
    NSDate * nextCoalescedEventTime;
    NSMutableSet * nonCoalescingSources;
}

- (void).cxx_destruct;

@end

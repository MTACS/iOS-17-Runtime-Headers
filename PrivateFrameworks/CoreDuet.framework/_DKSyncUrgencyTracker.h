
@interface _DKSyncUrgencyTracker : NSObject {
    NSMutableDictionary * _urgencies;
    unsigned long long  _urgency;
}

- (void).cxx_destruct;
- (void)recomputeUrgency;

@end

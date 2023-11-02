
@interface _UIResponderIntegrityProtection : NSObject {
    NSMutableArray * _deliveryStack;
    NSMapTable * _pressBeganRecords;
}

+ (id)rip;

- (void).cxx_destruct;
- (void)finishedDeliveringPresses;
- (id)init;
- (void)responder:(id)arg1 class:(Class)arg2 receivedPresses:(id)arg3 inPhase:(long long)arg4 withEvent:(id)arg5;
- (void)startDeliveringPresses:(id)arg1 inPhase:(long long)arg2 withEvent:(id)arg3;

@end

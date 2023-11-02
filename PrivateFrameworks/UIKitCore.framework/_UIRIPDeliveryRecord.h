
@interface _UIRIPDeliveryRecord : NSObject {
    UIEvent * _event;
    long long  _phase;
    NSSet * _presses;
    NSMapTable * _receivers;
}

@property (nonatomic, readonly) UIEvent *event;
@property (nonatomic, readonly) long long phase;
@property (nonatomic, readonly) NSSet *presses;

- (void).cxx_destruct;
- (id)description;
- (id)diffToRecord:(id)arg1 press:(id)arg2;
- (id)event;
- (id)initWithPresses:(id)arg1 inPhase:(long long)arg2 withEvent:(id)arg3;
- (long long)phase;
- (id)presses;
- (void)responder:(id)arg1 class:(Class)arg2 receivedPresses:(id)arg3 inPhase:(long long)arg4 withEvent:(id)arg5;

@end

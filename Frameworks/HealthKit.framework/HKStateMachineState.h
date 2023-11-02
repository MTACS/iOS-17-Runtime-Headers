
@interface HKStateMachineState : NSObject {
    NSDictionary * _incomingTransitions;
    long long  _index;
    NSString * _label;
    NSDictionary * _outgoingTransitions;
}

@property (nonatomic, copy) NSDictionary *incomingTransitions;
@property (nonatomic, readonly) long long index;
@property (nonatomic, readonly, copy) NSString *label;
@property (nonatomic, copy) NSDictionary *outgoingTransitions;

- (void).cxx_destruct;
- (id)description;
- (id)incomingTransitions;
- (long long)index;
- (id)init;
- (id)initWithIndex:(long long)arg1 label:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)label;
- (id)outgoingTransitions;
- (void)setIncomingTransitions:(id)arg1;
- (void)setOutgoingTransitions:(id)arg1;

@end

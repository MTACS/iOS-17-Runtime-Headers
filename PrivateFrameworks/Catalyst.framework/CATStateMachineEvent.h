
@interface CATStateMachineEvent : NSObject {
    id  _context;
    id  _trigger;
}

@property (nonatomic, readonly) id context;
@property (nonatomic, readonly) id trigger;

+ (id)eventWithTrigger:(id)arg1 context:(id)arg2;

- (void).cxx_destruct;
- (id)context;
- (id)description;
- (id)initWithEventTrigger:(id)arg1 context:(id)arg2;
- (id)trigger;

@end

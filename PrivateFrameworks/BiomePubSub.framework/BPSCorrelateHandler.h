
@interface BPSCorrelateHandler : NSObject {
    id  _context;
}

@property (nonatomic, retain) id context;

+ (id)directStreamsAssociationWithBlock:(id /* block */)arg1;
+ (id)new;

- (void).cxx_destruct;
- (id)context;
- (id)correlateWithCurrentEvent:(id)arg1;
- (id)init;
- (id)initWithInitalContext:(id)arg1;
- (id)initWithInitialContext:(id)arg1;
- (void)receiveCurrentEvent:(id)arg1;
- (void)receivePriorEvent:(id)arg1;
- (void)setContext:(id)arg1;
- (void)updateContext:(id)arg1;

@end


@interface BPSDirectAssocationCorrelateHandler : BPSCorrelateHandler {
    id /* block */  _correlating;
}

- (void).cxx_destruct;
- (id)correlateWithCurrentEvent:(id)arg1;
- (id)initWithCorrelating:(id /* block */)arg1;
- (void)receiveCurrentEvent:(id)arg1;
- (void)receivePriorEvent:(id)arg1;

@end

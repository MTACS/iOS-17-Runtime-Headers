
@interface _BPSCorrelateInner : BPSCorrelationProducer {
    BPSCorrelateHandler * _correlateHandler;
}

@property (nonatomic, readonly) BPSCorrelateHandler *correlateHandler;

- (void).cxx_destruct;
- (id)correlateHandler;
- (id)initWithDownstream:(id)arg1 correlateHandler:(id)arg2;
- (id)newBookmark;
- (id)receiveNewValue:(id)arg1 source:(long long)arg2;

@end

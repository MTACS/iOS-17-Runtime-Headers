
@interface CIDCPayloadBuilder : NSObject {
    _TtC17CoreIDCredBuilder26CIDCInternalPayloadBuilder * _payloadBuilder;
}

@property (nonatomic, retain) _TtC17CoreIDCredBuilder26CIDCInternalPayloadBuilder *payloadBuilder;

- (void).cxx_destruct;
- (void)buildPayloadWithDetails:(id)arg1 completion:(id /* block */)arg2;
- (id)initWithDelegate:(id)arg1;
- (id)payloadBuilder;
- (void)setPayloadBuilder:(id)arg1;

@end

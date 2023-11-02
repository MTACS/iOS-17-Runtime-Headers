
@interface MRSetStateMessage : MRProtocolMessage {
    MRNowPlayingState * _state;
}

@property (nonatomic, readonly) MRNowPlayingState *state;

- (void).cxx_destruct;
- (id)initWithNowPlayingState:(id)arg1 encoding:(long long)arg2;
- (id)initWithUnderlyingCodableMessage:(id)arg1 error:(id)arg2;
- (id)state;
- (unsigned long long)type;

@end

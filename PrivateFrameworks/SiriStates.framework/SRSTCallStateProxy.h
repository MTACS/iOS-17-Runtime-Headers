
@interface SRSTCallStateProxy : NSObject {
    SRSTCallState * _state;
}

@property (nonatomic, retain) SRSTCallState *state;

- (void).cxx_destruct;
- (id)initWithState:(id)arg1;
- (void)setState:(id)arg1;
- (id)state;

@end

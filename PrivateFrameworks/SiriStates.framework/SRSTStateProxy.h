
@interface SRSTStateProxy : NSObject {
    SRSTState * _state;
}

@property (nonatomic, retain) SRSTState *state;

- (void).cxx_destruct;
- (id)initWithState:(id)arg1;
- (void)setState:(id)arg1;
- (id)state;

@end

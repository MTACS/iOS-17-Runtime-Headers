
@interface _SRSTStateProxy : NSObject {
    void state;
}

@property (nonatomic, readonly) long long hash;
@property (nonatomic, readonly) _SRSTState *state;

- (void).cxx_destruct;
- (long long)hash;
- (id)init;
- (id)initWithState:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)state;

@end

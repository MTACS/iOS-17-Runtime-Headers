
@interface PKPassFooterViewConfiguration : NSObject {
    PKPassView * _passView;
    long long  _state;
}

@property (nonatomic, readonly) PKPass *pass;
@property (nonatomic, readonly) PKPassView *passView;
@property (nonatomic, readonly) long long state;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithPassView:(id)arg1 state:(long long)arg2;
- (bool)isEqual:(id)arg1;
- (id)pass;
- (id)passView;
- (long long)state;

@end


@interface SBKRequestHandler : NSObject {
    SBKStoreURLBagContext * _bagContext;
}

@property (nonatomic, readonly) SBKStoreURLBagContext *bagContext;

- (void).cxx_destruct;
- (id)bagContext;
- (void)cancel;
- (id)initWithBagContext:(id)arg1;
- (void)timeout;

@end


@interface MUTransitLineItemActionManager : NSObject <MKPlaceActionItemFooterBuilder, MKPlaceActionManagerProtocol> {
    void analyticsDelegate;
    void delegate;
}

- (void).cxx_destruct;
- (id)createFooterActions;
- (id)createRowActionsWithStyle:(unsigned long long)arg1;
- (id)init;
- (id)initWithDelegate:(id)arg1 analyticsDelegate:(id)arg2;
- (void)performAction:(id)arg1 options:(id)arg2 completion:(id /* block */)arg3;

@end

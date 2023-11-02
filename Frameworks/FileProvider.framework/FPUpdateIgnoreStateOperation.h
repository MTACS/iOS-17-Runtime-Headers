
@interface FPUpdateIgnoreStateOperation : FPActionOperation {
    bool  _ignoreState;
    NSArray * _items;
}

- (void).cxx_destruct;
- (void)actionMain;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithItems:(id)arg1 ignoreState:(bool)arg2 action:(id)arg3;
- (void)presendNotifications;
- (id)replicateForItems:(id)arg1;

@end

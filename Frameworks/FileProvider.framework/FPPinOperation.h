
@interface FPPinOperation : FPActionOperation {
    NSArray * _items;
}

- (void).cxx_destruct;
- (void)actionMain;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithItems:(id)arg1;
- (void)presendNotifications;

@end


@interface CKAlertAction : UIAlertAction {
    id /* block */  ___ck_handler;
}

@property (nonatomic, copy) id /* block */ __ck_handler;

+ (id)actionWithTitle:(id)arg1 style:(long long)arg2 handler:(id /* block */)arg3;

- (void).cxx_destruct;
- (id /* block */)__ck_handler;
- (void)set__ck_handler:(id /* block */)arg1;

@end

@interface TPAlertAction : UIAlertAction {
    id /* block */  _handler;
}

@property (nonatomic, copy) id /* block */ handler;

+ (id)actionWithTitle:(id)arg1 style:(long long)arg2 handler:(id /* block */)arg3;
+ (id)actionWithType:(unsigned long long)arg1;
+ (id)preferencesURLForClassName:(id)arg1;

- (void).cxx_destruct;
- (id /* block */)handler;
- (void)setHandler:(id /* block */)arg1;

@end

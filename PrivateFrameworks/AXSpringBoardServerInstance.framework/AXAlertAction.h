
@interface AXAlertAction : UIAlertAction {
    long long  buttonIndex;
}

@property (nonatomic) long long buttonIndex;

+ (id)actionWithTitle:(id)arg1 style:(long long)arg2 handler:(id /* block */)arg3;

- (long long)buttonIndex;
- (void)setButtonIndex:(long long)arg1;

@end


@protocol TMLBinder <NSObject>

@required

- (long long)bindingOrder;
- (void)bindingValueChanged:(TMLBinding *)arg1;

@end

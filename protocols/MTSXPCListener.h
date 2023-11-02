
@protocol MTSXPCListener <NSObject>

@required

- (<MTSXPCListenerDelegate> *)delegate;
- (void)setDelegate:(id <MTSXPCListenerDelegate>)arg1;
- (void)start;

@end

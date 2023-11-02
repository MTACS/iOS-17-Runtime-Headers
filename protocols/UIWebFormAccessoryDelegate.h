
@protocol UIWebFormAccessoryDelegate <NSObject>

@required

- (void)accessoryAutoFill;
- (void)accessoryClear;
- (void)accessoryDone;
- (void)accessoryTab:(bool)arg1;

@end

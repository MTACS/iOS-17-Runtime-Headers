
@protocol ATServiceObserver <NSObject>

@required

- (void)service:(ATService *)arg1 willOpenMessageLink:(ATMessageLink *)arg2;

@end

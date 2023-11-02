
@protocol SCROBrailleDisplayInputManagerProtocol <NSObject>

@required

- (NSString *)commandForBrailleKey:(SCROBrailleKey *)arg1;
- (void)configureWithDriverConfiguration:(NSArray *)arg1;

@end


@protocol StateWatcherDelegate <NSObject>

@optional

- (void)noteStateChange:(NSString *)arg1 new:(id)arg2 old:(id)arg3;

@end

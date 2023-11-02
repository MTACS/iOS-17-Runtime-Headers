
@protocol PTRowObserver <NSObject>

@optional

- (void)rowDidChangeImage:(PTRow *)arg1;
- (void)rowDidChangeTitle:(PTRow *)arg1;
- (void)rowDidChangeValue:(PTRow *)arg1;
- (void)rowDidReload:(PTRow *)arg1;

@end

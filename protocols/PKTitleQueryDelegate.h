
@protocol PKTitleQueryDelegate <NSObject>

@required

- (void)titleQuery:(PKTitleQuery *)arg1 didUpdateWithItem:(PKTitleQueryItem *)arg2;

@optional

- (OS_dispatch_queue *)titleQueryDrawingDispatchQueue:(PKTitleQuery *)arg1;

@end

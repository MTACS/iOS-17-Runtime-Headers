
@protocol MTEventFilter <NSObject>

@required

- (MTPromise *)apply:(MTPromise *)arg1;

@end

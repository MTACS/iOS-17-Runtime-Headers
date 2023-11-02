
@protocol MKLocationManagerOperation <NSObject>

@required

- (void)cancel;
- (void)start;

@end

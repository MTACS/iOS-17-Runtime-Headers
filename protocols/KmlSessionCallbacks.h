
@protocol KmlSessionCallbacks <NSObject>

@required

- (void)didEnd:(NSError *)arg1;
- (void)didStart:(bool)arg1;

@end

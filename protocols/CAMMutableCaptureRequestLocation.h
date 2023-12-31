
@protocol CAMMutableCaptureRequestLocation <NSObject>

@required

- (CLHeading *)heading;
- (CLLocation *)location;
- (void)setHeading:(CLHeading *)arg1;
- (void)setLocation:(CLLocation *)arg1;

@end


@protocol NUPurgeableImage <NUImage>

@required

- (bool)beginAccess;
- (bool)beginAccessRegion:(NURegion *)arg1;
- (void)endAccess;
- (void)endAccessRegion:(NURegion *)arg1;

@end

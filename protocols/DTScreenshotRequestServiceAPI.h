
@protocol DTScreenshotRequestServiceAPI <DTXAllowedRPC>

@required

- (NSData *)takeScreenshot;

@end

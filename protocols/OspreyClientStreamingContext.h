
@protocol OspreyClientStreamingContext <NSObject>

@required

- (void)finishWriting;
- (void)writeFrame:(NSData *)arg1;
- (void)writeFrame:(NSData *)arg1 compressed:(bool)arg2;

@end

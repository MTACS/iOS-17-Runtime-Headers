
@protocol DAMailboxStreamingContentConsumer

@required

- (void)consumeData:(char *)arg1 length:(int)arg2 format:(int)arg3 mailMessage:(DAMailMessage *)arg4;
- (void)didEndStreamingForMailMessage:(DAMailMessage *)arg1;
- (bool)shouldBeginStreamingForMailMessage:(DAMailMessage *)arg1 format:(int)arg2;

@end

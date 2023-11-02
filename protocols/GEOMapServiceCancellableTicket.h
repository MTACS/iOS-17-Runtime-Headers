
@protocol GEOMapServiceCancellableTicket <NSObject>

@required

- (void)cancel;
- (bool)isCancelled;

@end


@protocol HDCoreMotionDataSource <NSObject>

@required

- (void)hd_beginStreamingFromDatum:(void *)arg1 handler:(void *)arg2; // needs 2 arg types, found 8: <HDCoreMotionDatum> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSArray *, NSError *, void*
- (void)hd_stopStreaming;

@end

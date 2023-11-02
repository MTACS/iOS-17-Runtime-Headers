
@protocol GEOMapServiceWiFiQualityTileLoadTicket <GEOMapServiceThrottlableTicket>

@required

- (void)cancelTileLoad;
- (void)submitTileLoadWithCompletionQueue:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 11: NSObject<OS_dispatch_queue> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, bool, GEOWiFiQualitySearchResultTile *, NSString *, NSError *, void*

@end

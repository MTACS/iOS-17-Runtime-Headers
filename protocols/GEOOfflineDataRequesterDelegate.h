
@protocol GEOOfflineDataRequesterDelegate <NSObject>

@required

- (void)offlineRequester:(id <GEOOfflineDataRequester>)arg1 didFailWithError:(NSError *)arg2;
- (void)offlineRequester:(id <GEOOfflineDataRequester>)arg1 didFinishWithData:(GEOTileData *)arg2 withETag:(NSString *)arg3 containingDataKeys:(NSDictionary *)arg4;

@end

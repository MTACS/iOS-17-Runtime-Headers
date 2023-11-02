
@protocol SLDCollaborationNoticeServiceProtocol <NSObject>

@required

- (void)sendClearNoticesFor:(void *)arg1 forAttributionIdentifiers:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 8: NSString *, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*
- (void)sendHighlightEventData:(void *)arg1 eventType:(void *)arg2 forAttributionIdentifiers:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 9: NSData *, long long, NSArray *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, void*

@end

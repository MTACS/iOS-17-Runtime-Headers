
@protocol FCM3U8ParserDelegate <NSObject>

@required

- (void)parser:(FCM3U8Parser *)arg1 lineIsComment:(NSString *)arg2;
- (void)parser:(FCM3U8Parser *)arg1 lineIsTag:(NSString *)arg2 value:(NSString *)arg3 attributeList:(NSDictionary *)arg4;
- (void)parser:(FCM3U8Parser *)arg1 lineIsURL:(NSURL *)arg2;
- (bool)parserShouldCollectLine:(FCM3U8Parser *)arg1;

@end

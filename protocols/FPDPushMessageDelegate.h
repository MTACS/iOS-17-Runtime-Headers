
@protocol FPDPushMessageDelegate <NSObject>

@required

- (NSArray *)customPushTopics;
- (void)didReceiveMessage:(void *)arg1 completionHandler:(void *)arg2; // needs 2 arg types, found 6: APSIncomingMessage *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, void*

@end

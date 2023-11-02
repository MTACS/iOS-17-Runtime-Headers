
@interface FCM3U8Parser : NSObject <NSURLSessionDataDelegate> {
    NSMutableData * _bytes;
    bool  _collectForRewrite;
    NSMutableData * _collectedData;
    NSData * _data;
    <FCM3U8ParserDelegate> * _delegate;
    NSError * _error;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;

@end

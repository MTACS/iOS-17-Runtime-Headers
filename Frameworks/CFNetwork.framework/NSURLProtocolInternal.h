
@interface NSURLProtocolInternal : NSObject {
    NSCachedURLResponse * cachedResponse;
    <NSURLProtocolClient> * client;
    NSURLRequest * request;
}

- (void)dealloc;

@end

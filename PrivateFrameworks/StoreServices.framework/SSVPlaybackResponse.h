
@interface SSVPlaybackResponse : NSObject <NSCopying> {
    NSURL * _fallbackStreamingKeyCertificateURL;
    NSURL * _fallbackStreamingKeyServerURL;
    NSDictionary * _responseDictionary;
    NSHTTPURLResponse * _urlResponse;
}

@property (nonatomic, readonly) NSHTTPURLResponse *URLResponse;
@property (nonatomic, copy) NSURL *fallbackStreamingKeyCertificateURL;
@property (nonatomic, copy) NSURL *fallbackStreamingKeyServerURL;
@property (nonatomic, readonly) NSArray *items;
@property (nonatomic, readonly, copy) NSDictionary *responseDictionary;

- (void).cxx_destruct;
- (id)URLResponse;
- (void)_enumerateItemsUsingBlock:(id /* block */)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)fallbackStreamingKeyCertificateURL;
- (id)fallbackStreamingKeyServerURL;
- (id)initWithDictionary:(id)arg1 URLResponse:(id)arg2;
- (id)itemForItemIdentifier:(id)arg1;
- (id)items;
- (id)responseDictionary;
- (void)setFallbackStreamingKeyCertificateURL:(id)arg1;
- (void)setFallbackStreamingKeyServerURL:(id)arg1;

@end

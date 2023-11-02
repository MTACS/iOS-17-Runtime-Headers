
@interface ECRawMessageHeaders : NSObject {
    NSMutableDictionary * _headers;
    NSMutableArray * _orderedHeaders;
}

- (void).cxx_destruct;
- (id)allHeaderKeys;
- (id)allHeaders;
- (id)firstHeaderForKey:(id)arg1;
- (id)headersForKey:(id)arg1;
- (id)initWithHeaderString:(id)arg1;

@end

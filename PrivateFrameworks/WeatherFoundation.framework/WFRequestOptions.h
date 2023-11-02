
@interface WFRequestOptions : NSObject {
    NSMutableDictionary * _httpHeaderDictionary;
}

@property (nonatomic, readonly) NSMutableDictionary *httpHeaderDictionary;

- (void).cxx_destruct;
- (void)addHttpHeaderField:(id)arg1 withValue:(id)arg2;
- (id)httpHeaderDictionary;

@end


@interface JXHTTPFormEncodedBody : NSObject <JXHTTPRequestBody> {
    NSMutableDictionary * _dictionary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) NSMutableDictionary *dictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)withDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)dictionary;
- (long long)httpContentLength;
- (id)httpContentType;
- (id)httpInputStream;
- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)requestData;
- (void)setDictionary:(id)arg1;

@end

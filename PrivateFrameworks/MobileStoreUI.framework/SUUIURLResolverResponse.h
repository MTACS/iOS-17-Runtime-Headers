
@interface SUUIURLResolverResponse : NSObject {
    NSData * _data;
    NSHTTPURLResponse * _response;
}

@property (nonatomic, readonly) NSHTTPURLResponse *URLResponse;
@property (nonatomic, readonly) NSData *data;

- (void).cxx_destruct;
- (id)URLResponse;
- (id)data;
- (id)initWithData:(id)arg1 URLResponse:(id)arg2;

@end

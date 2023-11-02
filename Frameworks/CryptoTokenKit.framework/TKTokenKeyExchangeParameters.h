
@interface TKTokenKeyExchangeParameters : NSObject {
    long long  _requestedSize;
    NSData * _sharedInfo;
}

@property (readonly) long long requestedSize;
@property (readonly, copy) NSData *sharedInfo;

- (void).cxx_destruct;
- (id)initWithParameters:(id)arg1;
- (long long)requestedSize;
- (id)sharedInfo;

@end

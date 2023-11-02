
@interface ICSLazyDigestUIDGenerator : NSObject <ICSUIDGenerator> {
    NSData * _data;
    NSString * _digest;
    int  _lastIndex;
}

- (void).cxx_destruct;
- (id)_digest;
- (id)generateUID;
- (id)initWithData:(id)arg1;

@end

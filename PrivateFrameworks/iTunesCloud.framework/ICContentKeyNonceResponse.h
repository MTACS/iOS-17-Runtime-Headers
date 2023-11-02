
@interface ICContentKeyNonceResponse : NSObject {
    NSData * _nonceData;
    long long  _status;
}

@property (nonatomic, readonly, copy) NSData *nonceData;
@property (nonatomic, readonly) long long status;

- (void).cxx_destruct;
- (id)initWithResponseDictionary:(id)arg1;
- (id)nonceData;
- (long long)status;

@end

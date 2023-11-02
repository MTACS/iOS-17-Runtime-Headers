
@interface CKAssetDownloadPreauthorization : NSObject <NSCopying> {
    NSData * _contentResponseBody;
    NSDictionary * _contentResponseHeaders;
    NSString * _responseUUID;
}

@property (nonatomic, readonly, copy) NSData *contentResponseBody;
@property (nonatomic, readonly, copy) NSDictionary *contentResponseHeaders;
@property (nonatomic, readonly, copy) NSString *responseUUID;

- (void).cxx_destruct;
- (id)contentResponseBody;
- (id)contentResponseHeaders;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)hash;
- (id)initWithResponseUUID:(id)arg1 contentResponseHeaders:(id)arg2 contentResponseBody:(id)arg3;
- (bool)isEqual:(id)arg1;
- (id)responseUUID;

@end


@interface SBKPullValueResponse : SBKResponse {
    NSString * _domainVersion;
    NSString * _itemKey;
    NSData * _itemValuePayload;
    NSString * _itemVersion;
}

@property (nonatomic, readonly) NSString *domainVersion;
@property (nonatomic, readonly) NSString *itemKey;
@property (nonatomic, readonly) NSData *itemValuePayload;
@property (nonatomic, readonly) NSString *itemVersion;

+ (id)responseWithResponse:(id)arg1 transaction:(id)arg2;

- (void).cxx_destruct;
- (void)deserializeResponseBodyWithTransaction:(id)arg1;
- (id)domainVersion;
- (id)itemKey;
- (id)itemValuePayload;
- (id)itemVersion;

@end

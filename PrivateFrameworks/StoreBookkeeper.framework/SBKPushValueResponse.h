
@interface SBKPushValueResponse : SBKResponse {
    NSString * _conflictItemKey;
    NSData * _conflictItemValuePayload;
    NSString * _conflictItemVersionAnchor;
    NSString * _domainVersion;
}

@property (nonatomic, readonly) NSString *conflictItemKey;
@property (nonatomic, readonly) NSData *conflictItemValuePayload;
@property (nonatomic, readonly) NSString *conflictItemVersionAnchor;
@property (nonatomic, readonly) NSString *domainVersion;

+ (id)responseWithResponse:(id)arg1 transaction:(id)arg2;

- (void).cxx_destruct;
- (id)conflictItemKey;
- (id)conflictItemValuePayload;
- (id)conflictItemVersionAnchor;
- (void)deserializeResponseBodyWithTransaction:(id)arg1;
- (id)domainVersion;

@end

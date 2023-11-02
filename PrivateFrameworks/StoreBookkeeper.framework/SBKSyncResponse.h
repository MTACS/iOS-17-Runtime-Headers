
@interface SBKSyncResponse : SBKResponse {
    SBKSyncResponseData * _syncResponseData;
}

@property (nonatomic, readonly) SBKSyncResponseData *syncResponseData;

+ (id)responseWithResponse:(id)arg1 transaction:(id)arg2;

- (void).cxx_destruct;
- (void)deserializeResponseBodyWithTransaction:(id)arg1;
- (id)syncResponseData;

@end

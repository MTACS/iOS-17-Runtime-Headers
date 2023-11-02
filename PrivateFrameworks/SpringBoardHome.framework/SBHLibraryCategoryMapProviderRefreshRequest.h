
@interface SBHLibraryCategoryMapProviderRefreshRequest : NSObject <NSCopying> {
    NSMutableDictionary * _failures;
    unsigned long long  _options;
    NSString * _requestReason;
    NSString * _senderDescription;
}

@property (nonatomic, readonly) unsigned long long failureCount;
@property (nonatomic, readonly) unsigned long long options;
@property (nonatomic, copy) NSString *requestReason;
@property (nonatomic, copy) NSString *senderDescription;

- (void).cxx_destruct;
- (void)accumulateFailure:(id)arg1 forSession:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)failureCount;
- (id)failureForSessionIdentifier:(long long)arg1;
- (bool)hasFailedSeveralTimes;
- (id)initWithOptions:(unsigned long long)arg1 reason:(id)arg2;
- (unsigned long long)options;
- (id)requestReason;
- (id)senderDescription;
- (void)setRequestReason:(id)arg1;
- (void)setSenderDescription:(id)arg1;

@end

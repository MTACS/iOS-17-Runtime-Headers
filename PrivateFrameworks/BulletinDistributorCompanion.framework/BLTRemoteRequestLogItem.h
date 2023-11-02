
@interface BLTRemoteRequestLogItem : NSObject {
    NSDate * _cacheDate;
    NSString * _idsResponseIdentifier;
    NSString * _idsTransmitIdentifier;
    id  _requestDescription;
    NSNumber * _sequenceNumber;
    NSUUID * _sessionIdentifier;
    unsigned long long  _sessionState;
}

@property (nonatomic, retain) NSDate *cacheDate;
@property (nonatomic, copy) NSString *idsResponseIdentifier;
@property (nonatomic, copy) NSString *idsTransmitIdentifier;
@property (nonatomic, copy) id requestDescription;
@property (nonatomic, retain) NSNumber *sequenceNumber;
@property (nonatomic, retain) NSUUID *sessionIdentifier;
@property (nonatomic) unsigned long long sessionState;

+ (id)remoteRequestLogItemWithIDSTransmitIdentifier:(id)arg1 IDSResponseIdentifier:(id)arg2 requestDescription:(id)arg3 sequenceNumber:(id)arg4 sessionIdentifier:(id)arg5 sessionState:(unsigned long long)arg6;

- (void).cxx_destruct;
- (id)cacheDate;
- (id)description;
- (id)idsResponseIdentifier;
- (id)idsTransmitIdentifier;
- (id)requestDescription;
- (id)sequenceNumber;
- (id)sessionIdentifier;
- (unsigned long long)sessionState;
- (void)setCacheDate:(id)arg1;
- (void)setIdsResponseIdentifier:(id)arg1;
- (void)setIdsTransmitIdentifier:(id)arg1;
- (void)setRequestDescription:(id)arg1;
- (void)setSequenceNumber:(id)arg1;
- (void)setSessionIdentifier:(id)arg1;
- (void)setSessionState:(unsigned long long)arg1;

@end

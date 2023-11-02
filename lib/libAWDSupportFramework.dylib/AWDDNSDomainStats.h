
@interface AWDDNSDomainStats : PBCodable <NSCopying> {
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _answeredQuerySendCounts;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _dnsOverTCPStates;
    NSString * _domain;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _expiredAnswerStates;
    struct { 
        unsigned int networkType : 1; 
        unsigned int recordType : 1; 
    }  _has;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _negAnsweredQuerySendCounts;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _negResponseLatencyMs;
    int  _networkType;
    int  _recordType;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _responseLatencyMs;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _unansweredQueryDurationMs;
    struct { 
        unsigned int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _unansweredQuerySendCounts;
}

@property (nonatomic, readonly) unsigned int*answeredQuerySendCounts;
@property (nonatomic, readonly) unsigned long long answeredQuerySendCountsCount;
@property (nonatomic, readonly) unsigned int*dnsOverTCPStates;
@property (nonatomic, readonly) unsigned long long dnsOverTCPStatesCount;
@property (nonatomic, retain) NSString *domain;
@property (nonatomic, readonly) unsigned int*expiredAnswerStates;
@property (nonatomic, readonly) unsigned long long expiredAnswerStatesCount;
@property (nonatomic, readonly) bool hasDomain;
@property (nonatomic) bool hasNetworkType;
@property (nonatomic) bool hasRecordType;
@property (nonatomic, readonly) unsigned int*negAnsweredQuerySendCounts;
@property (nonatomic, readonly) unsigned long long negAnsweredQuerySendCountsCount;
@property (nonatomic, readonly) unsigned int*negResponseLatencyMs;
@property (nonatomic, readonly) unsigned long long negResponseLatencyMsCount;
@property (nonatomic) int networkType;
@property (nonatomic) int recordType;
@property (nonatomic, readonly) unsigned int*responseLatencyMs;
@property (nonatomic, readonly) unsigned long long responseLatencyMsCount;
@property (nonatomic, readonly) unsigned int*unansweredQueryDurationMs;
@property (nonatomic, readonly) unsigned long long unansweredQueryDurationMsCount;
@property (nonatomic, readonly) unsigned int*unansweredQuerySendCounts;
@property (nonatomic, readonly) unsigned long long unansweredQuerySendCountsCount;

- (int)StringAsNetworkType:(id)arg1;
- (int)StringAsRecordType:(id)arg1;
- (void)addAnsweredQuerySendCount:(unsigned int)arg1;
- (void)addDnsOverTCPState:(unsigned int)arg1;
- (void)addExpiredAnswerState:(unsigned int)arg1;
- (void)addNegAnsweredQuerySendCount:(unsigned int)arg1;
- (void)addNegResponseLatencyMs:(unsigned int)arg1;
- (void)addResponseLatencyMs:(unsigned int)arg1;
- (void)addUnansweredQueryDurationMs:(unsigned int)arg1;
- (void)addUnansweredQuerySendCount:(unsigned int)arg1;
- (unsigned int)answeredQuerySendCountAtIndex:(unsigned long long)arg1;
- (unsigned int*)answeredQuerySendCounts;
- (unsigned long long)answeredQuerySendCountsCount;
- (void)clearAnsweredQuerySendCounts;
- (void)clearDnsOverTCPStates;
- (void)clearExpiredAnswerStates;
- (void)clearNegAnsweredQuerySendCounts;
- (void)clearNegResponseLatencyMs;
- (void)clearResponseLatencyMs;
- (void)clearUnansweredQueryDurationMs;
- (void)clearUnansweredQuerySendCounts;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned int)dnsOverTCPStateAtIndex:(unsigned long long)arg1;
- (unsigned int*)dnsOverTCPStates;
- (unsigned long long)dnsOverTCPStatesCount;
- (id)domain;
- (unsigned int)expiredAnswerStateAtIndex:(unsigned long long)arg1;
- (unsigned int*)expiredAnswerStates;
- (unsigned long long)expiredAnswerStatesCount;
- (bool)hasDomain;
- (bool)hasNetworkType;
- (bool)hasRecordType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (unsigned int)negAnsweredQuerySendCountAtIndex:(unsigned long long)arg1;
- (unsigned int*)negAnsweredQuerySendCounts;
- (unsigned long long)negAnsweredQuerySendCountsCount;
- (unsigned int*)negResponseLatencyMs;
- (unsigned int)negResponseLatencyMsAtIndex:(unsigned long long)arg1;
- (unsigned long long)negResponseLatencyMsCount;
- (int)networkType;
- (id)networkTypeAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (int)recordType;
- (id)recordTypeAsString:(int)arg1;
- (unsigned int*)responseLatencyMs;
- (unsigned int)responseLatencyMsAtIndex:(unsigned long long)arg1;
- (unsigned long long)responseLatencyMsCount;
- (void)setAnsweredQuerySendCounts:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setDnsOverTCPStates:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setDomain:(id)arg1;
- (void)setExpiredAnswerStates:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setHasNetworkType:(bool)arg1;
- (void)setHasRecordType:(bool)arg1;
- (void)setNegAnsweredQuerySendCounts:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setNegResponseLatencyMs:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setNetworkType:(int)arg1;
- (void)setRecordType:(int)arg1;
- (void)setResponseLatencyMs:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setUnansweredQueryDurationMs:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (void)setUnansweredQuerySendCounts:(unsigned int*)arg1 count:(unsigned long long)arg2;
- (unsigned int*)unansweredQueryDurationMs;
- (unsigned int)unansweredQueryDurationMsAtIndex:(unsigned long long)arg1;
- (unsigned long long)unansweredQueryDurationMsCount;
- (unsigned int)unansweredQuerySendCountAtIndex:(unsigned long long)arg1;
- (unsigned int*)unansweredQuerySendCounts;
- (unsigned long long)unansweredQuerySendCountsCount;
- (void)writeTo:(id)arg1;

@end
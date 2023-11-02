
@interface _CPStartSearchFeedback : PBCodable <NSSecureCoding, _CPFeedbackUUID, _CPProcessableFeedback, _CPStartSearchFeedback> {
    NSString * _input;
    unsigned long long  _queryId;
    int  _searchType;
    unsigned long long  _timestamp;
    int  _triggerEvent;
    NSString * _uuid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *input;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned long long queryId;
@property (nonatomic) int searchType;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int triggerEvent;
@property (nonatomic, readonly, copy) NSString *uuid;
@property (nonatomic, copy) NSString *uuid;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)initWithFacade:(id)arg1;
- (id)input;
- (bool)isEqual:(id)arg1;
- (unsigned long long)queryId;
- (bool)readFrom:(id)arg1;
- (int)searchType;
- (void)setInput:(id)arg1;
- (void)setQueryId:(unsigned long long)arg1;
- (void)setSearchType:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (void)setTriggerEvent:(int)arg1;
- (void)setUuid:(id)arg1;
- (unsigned long long)timestamp;
- (int)triggerEvent;
- (id)uuid;
- (void)writeTo:(id)arg1;

@end

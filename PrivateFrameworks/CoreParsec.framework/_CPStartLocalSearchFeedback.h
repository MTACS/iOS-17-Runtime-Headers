
@interface _CPStartLocalSearchFeedback : PBCodable <NSSecureCoding, _CPFeedbackUUID, _CPProcessableFeedback, _CPStartLocalSearchFeedback> {
    _CPPerformEntityQueryCommandForFeedback * _entityQueryCommand;
    _CPIndexStateForFeedback * _indexState;
    int  _indexType;
    NSString * _input;
    NSString * _originatingApp;
    unsigned long long  _queryId;
    int  _searchType;
    unsigned long long  _timestamp;
    int  _triggerEvent;
    NSString * _uuid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) _CPPerformEntityQueryCommandForFeedback *entityQueryCommand;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) _CPIndexStateForFeedback *indexState;
@property (nonatomic) int indexType;
@property (nonatomic, copy) NSString *input;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSString *originatingApp;
@property (nonatomic) unsigned long long queryId;
@property (nonatomic) int searchType;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long timestamp;
@property (nonatomic) int triggerEvent;
@property (nonatomic, readonly, copy) NSString *uuid;
@property (nonatomic, copy) NSString *uuid;

- (void).cxx_destruct;
- (id)entityQueryCommand;
- (unsigned long long)hash;
- (id)indexState;
- (int)indexType;
- (id)init;
- (id)initWithFacade:(id)arg1;
- (id)input;
- (bool)isEqual:(id)arg1;
- (id)originatingApp;
- (unsigned long long)queryId;
- (bool)readFrom:(id)arg1;
- (int)searchType;
- (void)setEntityQueryCommand:(id)arg1;
- (void)setIndexState:(id)arg1;
- (void)setIndexType:(int)arg1;
- (void)setInput:(id)arg1;
- (void)setOriginatingApp:(id)arg1;
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

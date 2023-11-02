
@interface SFStartLocalSearchFeedback : SFStartSearchFeedback {
    SFPerformEntityQueryCommand * _entityQueryCommand;
    SFIndexState * _indexState;
    unsigned long long  _indexType;
    NSString * _originatingApp;
}

@property (nonatomic, copy) SFPerformEntityQueryCommand *entityQueryCommand;
@property (nonatomic, retain) SFIndexState *indexState;
@property (nonatomic) unsigned long long indexType;
@property (nonatomic, copy) NSString *originatingApp;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)entityQueryCommand;
- (id)indexState;
- (unsigned long long)indexType;
- (id)initWithCoder:(id)arg1;
- (id)initWithEntityQueryCommand:(id)arg1 triggerEvent:(unsigned long long)arg2 searchType:(unsigned long long)arg3 indexType:(unsigned long long)arg4 queryId:(unsigned long long)arg5 originatingApp:(id)arg6;
- (id)initWithInput:(id)arg1 triggerEvent:(unsigned long long)arg2 indexType:(unsigned long long)arg3;
- (id)initWithInput:(id)arg1 triggerEvent:(unsigned long long)arg2 indexType:(unsigned long long)arg3 queryId:(unsigned long long)arg4;
- (id)initWithInput:(id)arg1 triggerEvent:(unsigned long long)arg2 searchType:(unsigned long long)arg3 indexType:(unsigned long long)arg4 queryId:(unsigned long long)arg5;
- (id)initWithInput:(id)arg1 triggerEvent:(unsigned long long)arg2 searchType:(unsigned long long)arg3 indexType:(unsigned long long)arg4 queryId:(unsigned long long)arg5 originatingApp:(id)arg6;
- (id)originatingApp;
- (void)setEntityQueryCommand:(id)arg1;
- (void)setIndexState:(id)arg1;
- (void)setIndexType:(unsigned long long)arg1;
- (void)setOriginatingApp:(id)arg1;

@end


@interface ATXMPBBlendingClientModelHomeScreenLayoutTracker : PBCodable <NSCopying> {
    NSString * _abGroup;
    NSString * _clientModelABGroup;
    NSString * _clientModelId;
    NSString * _consumerSubType;
    struct { 
        unsigned int numSuggestionsForClientModelInLayout : 1; 
    }  _has;
    NSString * _layoutType;
    unsigned int  _numSuggestionsForClientModelInLayout;
}

@property (nonatomic, retain) NSString *abGroup;
@property (nonatomic, retain) NSString *clientModelABGroup;
@property (nonatomic, retain) NSString *clientModelId;
@property (nonatomic, retain) NSString *consumerSubType;
@property (nonatomic, readonly) bool hasAbGroup;
@property (nonatomic, readonly) bool hasClientModelABGroup;
@property (nonatomic, readonly) bool hasClientModelId;
@property (nonatomic, readonly) bool hasConsumerSubType;
@property (nonatomic, readonly) bool hasLayoutType;
@property (nonatomic) bool hasNumSuggestionsForClientModelInLayout;
@property (nonatomic, retain) NSString *layoutType;
@property (nonatomic) unsigned int numSuggestionsForClientModelInLayout;

- (void).cxx_destruct;
- (id)abGroup;
- (id)clientModelABGroup;
- (id)clientModelId;
- (id)consumerSubType;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAbGroup;
- (bool)hasClientModelABGroup;
- (bool)hasClientModelId;
- (bool)hasConsumerSubType;
- (bool)hasLayoutType;
- (bool)hasNumSuggestionsForClientModelInLayout;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)layoutType;
- (void)mergeFrom:(id)arg1;
- (unsigned int)numSuggestionsForClientModelInLayout;
- (bool)readFrom:(id)arg1;
- (void)setAbGroup:(id)arg1;
- (void)setClientModelABGroup:(id)arg1;
- (void)setClientModelId:(id)arg1;
- (void)setConsumerSubType:(id)arg1;
- (void)setHasNumSuggestionsForClientModelInLayout:(bool)arg1;
- (void)setLayoutType:(id)arg1;
- (void)setNumSuggestionsForClientModelInLayout:(unsigned int)arg1;
- (void)writeTo:(id)arg1;

@end

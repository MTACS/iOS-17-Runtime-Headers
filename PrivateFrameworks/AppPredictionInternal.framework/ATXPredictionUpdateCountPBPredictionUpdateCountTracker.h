
@interface ATXPredictionUpdateCountPBPredictionUpdateCountTracker : PBCodable <NSCopying> {
    NSString * _abGroup;
    int  _clientType;
    struct { 
        unsigned int clientType : 1; 
        unsigned int triggerType : 1; 
    }  _has;
    int  _triggerType;
}

@property (nonatomic, retain) NSString *abGroup;
@property (nonatomic) int clientType;
@property (nonatomic, readonly) bool hasAbGroup;
@property (nonatomic) bool hasClientType;
@property (nonatomic) bool hasTriggerType;
@property (nonatomic) int triggerType;

- (void).cxx_destruct;
- (int)StringAsClientType:(id)arg1;
- (int)StringAsTriggerType:(id)arg1;
- (id)abGroup;
- (int)clientType;
- (id)clientTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasAbGroup;
- (bool)hasClientType;
- (bool)hasTriggerType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAbGroup:(id)arg1;
- (void)setClientType:(int)arg1;
- (void)setHasClientType:(bool)arg1;
- (void)setHasTriggerType:(bool)arg1;
- (void)setTriggerType:(int)arg1;
- (int)triggerType;
- (id)triggerTypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

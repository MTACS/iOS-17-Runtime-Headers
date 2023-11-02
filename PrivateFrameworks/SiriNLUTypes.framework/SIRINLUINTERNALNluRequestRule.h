
@interface SIRINLUINTERNALNluRequestRule : PBCodable <NSCopying> {
    NSString * _deviceType;
    NSString * _idA;
    NSString * _localeId;
    NSMutableArray * _turnInputRules;
    NSString * _userInterfaceIdiom;
}

@property (nonatomic, retain) NSString *deviceType;
@property (nonatomic, readonly) bool hasDeviceType;
@property (nonatomic, readonly) bool hasIdA;
@property (nonatomic, readonly) bool hasLocaleId;
@property (nonatomic, readonly) bool hasUserInterfaceIdiom;
@property (nonatomic, retain) NSString *idA;
@property (nonatomic, retain) NSString *localeId;
@property (nonatomic, retain) NSMutableArray *turnInputRules;
@property (nonatomic, retain) NSString *userInterfaceIdiom;

+ (Class)turnInputRulesType;

- (void).cxx_destruct;
- (void)addTurnInputRules:(id)arg1;
- (void)clearTurnInputRules;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceType;
- (id)dictionaryRepresentation;
- (bool)hasDeviceType;
- (bool)hasIdA;
- (bool)hasLocaleId;
- (bool)hasUserInterfaceIdiom;
- (unsigned long long)hash;
- (id)idA;
- (bool)isEqual:(id)arg1;
- (id)localeId;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDeviceType:(id)arg1;
- (void)setIdA:(id)arg1;
- (void)setLocaleId:(id)arg1;
- (void)setTurnInputRules:(id)arg1;
- (void)setUserInterfaceIdiom:(id)arg1;
- (id)turnInputRules;
- (id)turnInputRulesAtIndex:(unsigned long long)arg1;
- (unsigned long long)turnInputRulesCount;
- (id)userInterfaceIdiom;
- (void)writeTo:(id)arg1;

@end

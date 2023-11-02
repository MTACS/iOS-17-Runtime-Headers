
@interface SIRINLUINTERNALRewriteInteraction : PBCodable <NSCopying> {
    struct { 
        unsigned int startTimestamp : 1; 
        unsigned int tap2edit : 1; 
    }  _has;
    NSString * _locale;
    NSMutableArray * _originalUtterances;
    NSMutableArray * _siriResponses;
    unsigned long long  _startTimestamp;
    bool  _tap2edit;
}

@property (nonatomic, readonly) bool hasLocale;
@property (nonatomic) bool hasStartTimestamp;
@property (nonatomic) bool hasTap2edit;
@property (nonatomic, retain) NSString *locale;
@property (nonatomic, retain) NSMutableArray *originalUtterances;
@property (nonatomic, retain) NSMutableArray *siriResponses;
@property (nonatomic) unsigned long long startTimestamp;
@property (nonatomic) bool tap2edit;

+ (Class)originalUtterancesType;
+ (Class)siriResponseType;

- (void).cxx_destruct;
- (void)addOriginalUtterances:(id)arg1;
- (void)addSiriResponse:(id)arg1;
- (void)clearOriginalUtterances;
- (void)clearSiriResponses;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasLocale;
- (bool)hasStartTimestamp;
- (bool)hasTap2edit;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)locale;
- (void)mergeFrom:(id)arg1;
- (id)originalUtterances;
- (id)originalUtterancesAtIndex:(unsigned long long)arg1;
- (unsigned long long)originalUtterancesCount;
- (bool)readFrom:(id)arg1;
- (void)setHasStartTimestamp:(bool)arg1;
- (void)setHasTap2edit:(bool)arg1;
- (void)setLocale:(id)arg1;
- (void)setOriginalUtterances:(id)arg1;
- (void)setSiriResponses:(id)arg1;
- (void)setStartTimestamp:(unsigned long long)arg1;
- (void)setTap2edit:(bool)arg1;
- (id)siriResponseAtIndex:(unsigned long long)arg1;
- (id)siriResponses;
- (unsigned long long)siriResponsesCount;
- (unsigned long long)startTimestamp;
- (bool)tap2edit;
- (void)writeTo:(id)arg1;

@end

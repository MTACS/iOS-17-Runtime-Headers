
@interface SCLPBScheduleSettings : PBCodable <NSCopying> {
    struct { 
        unsigned int version : 1; 
        unsigned int isEnabled : 1; 
    }  _has;
    bool  _isEnabled;
    NSMutableArray * _recurrences;
    unsigned int  _version;
}

@property (nonatomic) bool hasIsEnabled;
@property (nonatomic) bool hasVersion;
@property (nonatomic) bool isEnabled;
@property (nonatomic, retain) NSMutableArray *recurrences;
@property (nonatomic) unsigned int version;

+ (Class)recurrencesType;

- (void).cxx_destruct;
- (void)addRecurrences:(id)arg1;
- (void)clearRecurrences;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasIsEnabled;
- (bool)hasVersion;
- (unsigned long long)hash;
- (bool)isEnabled;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)recurrences;
- (id)recurrencesAtIndex:(unsigned long long)arg1;
- (unsigned long long)recurrencesCount;
- (void)setHasIsEnabled:(bool)arg1;
- (void)setHasVersion:(bool)arg1;
- (void)setIsEnabled:(bool)arg1;
- (void)setRecurrences:(id)arg1;
- (void)setVersion:(unsigned int)arg1;
- (unsigned int)version;
- (void)writeTo:(id)arg1;

@end

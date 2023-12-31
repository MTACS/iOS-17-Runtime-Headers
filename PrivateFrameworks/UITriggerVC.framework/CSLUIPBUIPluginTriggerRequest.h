
@interface CSLUIPBUIPluginTriggerRequest : PBRequest <NSCopying> {
    NSMutableArray * _dictionarys;
    struct { 
        unsigned int reason : 1; 
    }  _has;
    NSString * _name;
    int  _reason;
}

@property (nonatomic, retain) NSMutableArray *dictionarys;
@property (nonatomic, readonly) bool hasName;
@property (nonatomic) bool hasReason;
@property (nonatomic, retain) NSString *name;
@property (nonatomic) int reason;

- (void).cxx_destruct;
- (void)addDictionary:(id)arg1;
- (void)clearDictionarys;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryAtIndex:(unsigned long long)arg1;
- (id)dictionaryRepresentation;
- (id)dictionarys;
- (unsigned long long)dictionarysCount;
- (bool)hasName;
- (bool)hasReason;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)name;
- (bool)readFrom:(id)arg1;
- (int)reason;
- (void)setDictionarys:(id)arg1;
- (void)setHasReason:(bool)arg1;
- (void)setName:(id)arg1;
- (void)setReason:(int)arg1;
- (void)writeTo:(id)arg1;

@end

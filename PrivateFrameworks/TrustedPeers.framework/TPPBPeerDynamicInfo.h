
@interface TPPBPeerDynamicInfo : PBCodable <NSCopying> {
    unsigned long long  _clock;
    NSMutableArray * _dispositions;
    NSMutableArray * _excludeds;
    struct { 
        unsigned int clock : 1; 
    }  _has;
    NSMutableArray * _includeds;
    NSMutableArray * _preapprovals;
}

@property (nonatomic) unsigned long long clock;
@property (nonatomic, retain) NSMutableArray *dispositions;
@property (nonatomic, retain) NSMutableArray *excludeds;
@property (nonatomic) bool hasClock;
@property (nonatomic, retain) NSMutableArray *includeds;
@property (nonatomic, retain) NSMutableArray *preapprovals;

+ (Class)dispositionsType;
+ (Class)excludedType;
+ (Class)includedType;
+ (Class)preapprovalsType;

- (void).cxx_destruct;
- (void)addDispositions:(id)arg1;
- (void)addExcluded:(id)arg1;
- (void)addIncluded:(id)arg1;
- (void)addPreapprovals:(id)arg1;
- (void)clearDispositions;
- (void)clearExcludeds;
- (void)clearIncludeds;
- (void)clearPreapprovals;
- (unsigned long long)clock;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)dispositions;
- (id)dispositionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)dispositionsCount;
- (id)excludedAtIndex:(unsigned long long)arg1;
- (id)excludeds;
- (unsigned long long)excludedsCount;
- (bool)hasClock;
- (unsigned long long)hash;
- (id)includedAtIndex:(unsigned long long)arg1;
- (id)includeds;
- (unsigned long long)includedsCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)preapprovals;
- (id)preapprovalsAtIndex:(unsigned long long)arg1;
- (unsigned long long)preapprovalsCount;
- (bool)readFrom:(id)arg1;
- (void)setClock:(unsigned long long)arg1;
- (void)setDispositions:(id)arg1;
- (void)setExcludeds:(id)arg1;
- (void)setHasClock:(bool)arg1;
- (void)setIncludeds:(id)arg1;
- (void)setPreapprovals:(id)arg1;
- (void)writeTo:(id)arg1;

@end

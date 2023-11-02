
@interface SIRINLUEXTERNALMatchInfo : PBCodable <NSCopying> {
    SIRICOMMONUInt32Value * _editDistance;
    struct { 
        unsigned int matchSignalBitset : 1; 
    }  _has;
    SIRICOMMONFloatValue * _matchScore;
    unsigned int  _matchSignalBitset;
    SIRICOMMONUInt32Value * _matchedAliasCount;
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _matchedAliasTypes;
    SIRICOMMONUInt32Value * _matchedStopWordCount;
    SIRICOMMONUInt32Value * _matchedTokenCount;
    SIRICOMMONUInt32Value * _maxAliasCount;
    SIRICOMMONUInt32Value * _maxStopWordCount;
    SIRICOMMONUInt32Value * _maxTokenCount;
}

@property (nonatomic, retain) SIRICOMMONUInt32Value *editDistance;
@property (nonatomic, readonly) bool hasEditDistance;
@property (nonatomic, readonly) bool hasMatchScore;
@property (nonatomic) bool hasMatchSignalBitset;
@property (nonatomic, readonly) bool hasMatchedAliasCount;
@property (nonatomic, readonly) bool hasMatchedStopWordCount;
@property (nonatomic, readonly) bool hasMatchedTokenCount;
@property (nonatomic, readonly) bool hasMaxAliasCount;
@property (nonatomic, readonly) bool hasMaxStopWordCount;
@property (nonatomic, readonly) bool hasMaxTokenCount;
@property (nonatomic, retain) SIRICOMMONFloatValue *matchScore;
@property (nonatomic) unsigned int matchSignalBitset;
@property (nonatomic, retain) SIRICOMMONUInt32Value *matchedAliasCount;
@property (nonatomic, readonly) int*matchedAliasTypes;
@property (nonatomic, readonly) unsigned long long matchedAliasTypesCount;
@property (nonatomic, retain) SIRICOMMONUInt32Value *matchedStopWordCount;
@property (nonatomic, retain) SIRICOMMONUInt32Value *matchedTokenCount;
@property (nonatomic, retain) SIRICOMMONUInt32Value *maxAliasCount;
@property (nonatomic, retain) SIRICOMMONUInt32Value *maxStopWordCount;
@property (nonatomic, retain) SIRICOMMONUInt32Value *maxTokenCount;

- (void).cxx_destruct;
- (int)StringAsMatchedAliasTypes:(id)arg1;
- (void)addMatchedAliasTypes:(int)arg1;
- (void)clearMatchedAliasTypes;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)editDistance;
- (bool)hasEditDistance;
- (bool)hasMatchScore;
- (bool)hasMatchSignalBitset;
- (bool)hasMatchedAliasCount;
- (bool)hasMatchedStopWordCount;
- (bool)hasMatchedTokenCount;
- (bool)hasMaxAliasCount;
- (bool)hasMaxStopWordCount;
- (bool)hasMaxTokenCount;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)matchScore;
- (unsigned int)matchSignalBitset;
- (id)matchedAliasCount;
- (int*)matchedAliasTypes;
- (id)matchedAliasTypesAsString:(int)arg1;
- (int)matchedAliasTypesAtIndex:(unsigned long long)arg1;
- (unsigned long long)matchedAliasTypesCount;
- (id)matchedStopWordCount;
- (id)matchedTokenCount;
- (id)maxAliasCount;
- (id)maxStopWordCount;
- (id)maxTokenCount;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setEditDistance:(id)arg1;
- (void)setHasMatchSignalBitset:(bool)arg1;
- (void)setMatchScore:(id)arg1;
- (void)setMatchSignalBitset:(unsigned int)arg1;
- (void)setMatchedAliasCount:(id)arg1;
- (void)setMatchedAliasTypes:(int*)arg1 count:(unsigned long long)arg2;
- (void)setMatchedStopWordCount:(id)arg1;
- (void)setMatchedTokenCount:(id)arg1;
- (void)setMaxAliasCount:(id)arg1;
- (void)setMaxStopWordCount:(id)arg1;
- (void)setMaxTokenCount:(id)arg1;
- (void)writeTo:(id)arg1;

@end

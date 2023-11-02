
@interface SIRINLUINTERNALUtteranceRule : PBCodable <NSCopying> {
    SIRINLUINTERNALCompareOptions * _compareOptions;
    struct { 
        unsigned int type : 1; 
    }  _has;
    NSString * _pattern;
    NSMutableArray * _spansForNamedCaptureGroups;
    int  _type;
}

@property (nonatomic, retain) SIRINLUINTERNALCompareOptions *compareOptions;
@property (nonatomic, readonly) bool hasCompareOptions;
@property (nonatomic, readonly) bool hasPattern;
@property (nonatomic) bool hasType;
@property (nonatomic, retain) NSString *pattern;
@property (nonatomic, retain) NSMutableArray *spansForNamedCaptureGroups;
@property (nonatomic) int type;

+ (Class)spansForNamedCaptureGroupsType;

- (void).cxx_destruct;
- (int)StringAsType:(id)arg1;
- (void)addSpansForNamedCaptureGroups:(id)arg1;
- (void)clearSpansForNamedCaptureGroups;
- (id)compareOptions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCompareOptions;
- (bool)hasPattern;
- (bool)hasType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)pattern;
- (bool)readFrom:(id)arg1;
- (void)setCompareOptions:(id)arg1;
- (void)setHasType:(bool)arg1;
- (void)setPattern:(id)arg1;
- (void)setSpansForNamedCaptureGroups:(id)arg1;
- (void)setType:(int)arg1;
- (id)spansForNamedCaptureGroups;
- (id)spansForNamedCaptureGroupsAtIndex:(unsigned long long)arg1;
- (unsigned long long)spansForNamedCaptureGroupsCount;
- (int)type;
- (id)typeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

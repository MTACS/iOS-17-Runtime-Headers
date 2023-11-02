
@interface SIRINLUEXTERNALUsoGraph : PBCodable <NSCopying> {
    NSMutableArray * _alignments;
    NSMutableArray * _edges;
    NSMutableArray * _identifiers;
    NSMutableArray * _nodes;
    NSMutableArray * _spans;
    SIRINLUEXTERNALSemVer * _version;
}

@property (nonatomic, retain) NSMutableArray *alignments;
@property (nonatomic, retain) NSMutableArray *edges;
@property (nonatomic, readonly) bool hasVersion;
@property (nonatomic, retain) NSMutableArray *identifiers;
@property (nonatomic, retain) NSMutableArray *nodes;
@property (nonatomic, retain) NSMutableArray *spans;
@property (nonatomic, retain) SIRINLUEXTERNALSemVer *version;

+ (Class)alignmentsType;
+ (Class)edgesType;
+ (Class)identifiersType;
+ (Class)nodesType;
+ (Class)spansType;

- (void).cxx_destruct;
- (void)addAlignments:(id)arg1;
- (void)addEdges:(id)arg1;
- (void)addIdentifiers:(id)arg1;
- (void)addNodes:(id)arg1;
- (void)addSpans:(id)arg1;
- (id)alignments;
- (id)alignmentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)alignmentsCount;
- (void)clearAlignments;
- (void)clearEdges;
- (void)clearIdentifiers;
- (void)clearNodes;
- (void)clearSpans;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)edges;
- (id)edgesAtIndex:(unsigned long long)arg1;
- (unsigned long long)edgesCount;
- (bool)hasVersion;
- (unsigned long long)hash;
- (id)identifiers;
- (id)identifiersAtIndex:(unsigned long long)arg1;
- (unsigned long long)identifiersCount;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)nodes;
- (id)nodesAtIndex:(unsigned long long)arg1;
- (unsigned long long)nodesCount;
- (bool)readFrom:(id)arg1;
- (void)setAlignments:(id)arg1;
- (void)setEdges:(id)arg1;
- (void)setIdentifiers:(id)arg1;
- (void)setNodes:(id)arg1;
- (void)setSpans:(id)arg1;
- (void)setVersion:(id)arg1;
- (id)spans;
- (id)spansAtIndex:(unsigned long long)arg1;
- (unsigned long long)spansCount;
- (id)version;
- (void)writeTo:(id)arg1;

@end

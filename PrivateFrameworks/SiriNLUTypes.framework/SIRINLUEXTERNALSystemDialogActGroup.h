
@interface SIRINLUEXTERNALSystemDialogActGroup : PBCodable <NSCopying> {
    NSMutableArray * _childActs;
    SIRINLUEXTERNALSystemDialogAct * _systemDialogAct;
}

@property (nonatomic, retain) NSMutableArray *childActs;
@property (nonatomic, readonly) bool hasSystemDialogAct;
@property (nonatomic, retain) SIRINLUEXTERNALSystemDialogAct *systemDialogAct;

+ (Class)childActsType;

- (void).cxx_destruct;
- (void)addChildActs:(id)arg1;
- (id)childActs;
- (id)childActsAtIndex:(unsigned long long)arg1;
- (unsigned long long)childActsCount;
- (void)clearChildActs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasSystemDialogAct;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setChildActs:(id)arg1;
- (void)setSystemDialogAct:(id)arg1;
- (id)systemDialogAct;
- (void)writeTo:(id)arg1;

@end

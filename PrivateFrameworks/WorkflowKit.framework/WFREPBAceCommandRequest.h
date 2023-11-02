
@interface WFREPBAceCommandRequest : PBRequest <NSCopying> {
    NSData * _aceCommandData;
}

@property (nonatomic, retain) NSData *aceCommandData;

- (void).cxx_destruct;
- (id)aceCommandData;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setAceCommandData:(id)arg1;
- (void)writeTo:(id)arg1;

@end

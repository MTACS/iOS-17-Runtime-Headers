
@interface NSPPrivacyProxyPolicy : PBCodable <NSCopying> {
    struct { 
        int *list; 
        unsigned long long count; 
        unsigned long long size; 
    }  _conditions;
}

@property (nonatomic, readonly) int*conditions;
@property (nonatomic, readonly) unsigned long long conditionsCount;

- (int)StringAsConditions:(id)arg1;
- (void)addConditions:(int)arg1;
- (void)clearConditions;
- (int*)conditions;
- (id)conditionsAsString:(int)arg1;
- (int)conditionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)conditionsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setConditions:(int*)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end

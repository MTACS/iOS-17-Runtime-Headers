
@interface SGM2PerfXPCLatency : PBCodable <NSCopying> {
    struct { 
        unsigned int method : 1; 
    }  _has;
    NSString * _key;
    int  _method;
}

@property (nonatomic, readonly) bool hasKey;
@property (nonatomic) bool hasMethod;
@property (nonatomic, retain) NSString *key;
@property (nonatomic) int method;

- (void).cxx_destruct;
- (int)StringAsMethod:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasKey;
- (bool)hasMethod;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (id)key;
- (void)mergeFrom:(id)arg1;
- (int)method;
- (id)methodAsString:(int)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasMethod:(bool)arg1;
- (void)setKey:(id)arg1;
- (void)setMethod:(int)arg1;
- (void)writeTo:(id)arg1;

@end

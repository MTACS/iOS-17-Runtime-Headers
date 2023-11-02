
@interface VisionSignalGradingEntry : PBCodable <NSCopying> {
    int  _count;
    struct { 
        unsigned int count : 1; 
    }  _has;
    NSString * _identifier;
}

@property (nonatomic) int count;
@property (nonatomic) bool hasCount;
@property (nonatomic, readonly) bool hasIdentifier;
@property (nonatomic, retain) NSString *identifier;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)count;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasCount;
- (bool)hasIdentifier;
- (unsigned long long)hash;
- (id)identifier;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCount:(int)arg1;
- (void)setHasCount:(bool)arg1;
- (void)setIdentifier:(id)arg1;
- (void)writeTo:(id)arg1;

@end


@interface MXWordWithPronunciations : PBCodable <NSCopying> {
    int  _frequency;
    struct { 
        unsigned int frequency : 1; 
    }  _has;
    NSString * _orthography;
    NSMutableArray * _pronunciations;
    NSString * _tag;
}

@property (nonatomic) int frequency;
@property (nonatomic) bool hasFrequency;
@property (nonatomic, readonly) bool hasOrthography;
@property (nonatomic, readonly) bool hasTag;
@property (nonatomic, retain) NSString *orthography;
@property (nonatomic, retain) NSMutableArray *pronunciations;
@property (nonatomic, retain) NSString *tag;

+ (Class)pronunciationsType;

- (void).cxx_destruct;
- (void)addPronunciations:(id)arg1;
- (void)clearPronunciations;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)frequency;
- (bool)hasFrequency;
- (bool)hasOrthography;
- (bool)hasTag;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)orthography;
- (id)pronunciations;
- (id)pronunciationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)pronunciationsCount;
- (bool)readFrom:(id)arg1;
- (void)setFrequency:(int)arg1;
- (void)setHasFrequency:(bool)arg1;
- (void)setOrthography:(id)arg1;
- (void)setPronunciations:(id)arg1;
- (void)setTag:(id)arg1;
- (id)tag;
- (void)writeTo:(id)arg1;

@end
